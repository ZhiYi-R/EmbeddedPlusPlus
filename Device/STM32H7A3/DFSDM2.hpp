/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7A3_DFSDM2_HPP
#define EMBEDDED_PP_STM32H7A3_DFSDM2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Digital filter for sigma delta modulators */
namespace STM32H7A3::DFSDM2 {

    /** @brief DFSDM channel 0 configuration register */
    using DFSDM_CH0CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH0CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI with rising edge to strobe data (value: 0)
     *          - B_0x1: SPI with falling edge to strobe data (value: 1)
     *          - B_0x2: Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief SPI with rising edge to strobe data */
    constexpr std::uint32_t DFSDM_CH0CFGR1_SITP_B_0x0 = 0;
        /** @brief SPI with falling edge to strobe data */
    constexpr std::uint32_t DFSDM_CH0CFGR1_SITP_B_0x1 = 1;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t DFSDM_CH0CFGR1_SITP_B_0x2 = 2;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t DFSDM_CH0CFGR1_SITP_B_0x3 = 3;

    /** @brief SPI clock select for channel y 2:	clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3:	clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH0CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock coming from external CKINy input - sampling point according SITP[1:0] (value: 0)
     *          - B_0x1: clock coming from internal CKOUT output - sampling point according SITP[1:0] (value: 1)
     */
        /** @brief clock coming from external CKINy input - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH0CFGR1_SPICKSEL_B_0x0 = 0;
        /** @brief clock coming from internal CKOUT output - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH0CFGR1_SPICKSEL_B_0x1 = 1;

    /** @brief Short-circuit detector enable on channel y */
    using DFSDM_CH0CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel y will not be guarded by the short-circuit detector (value: 0)
     *          - B_0x1: Input channel y will be continuously guarded by the short-circuit detector (value: 1)
     */
        /** @brief Input channel y will not be guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH0CFGR1_SCDEN_B_0x0 = 0;
        /** @brief Input channel y will be continuously guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH0CFGR1_SCDEN_B_0x1 = 1;

    /** @brief Clock absence detector enable on channel y */
    using DFSDM_CH0CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence detector disabled on channel y (value: 0)
     *          - B_0x1: Clock absence detector enabled on channel y (value: 1)
     */
        /** @brief Clock absence detector disabled on channel y */
    constexpr std::uint32_t DFSDM_CH0CFGR1_CKABEN_B_0x0 = 0;
        /** @brief Clock absence detector enabled on channel y */
    constexpr std::uint32_t DFSDM_CH0CFGR1_CKABEN_B_0x1 = 1;

    /** @brief Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting. */
    using DFSDM_CH0CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel y disabled (value: 0)
     *          - B_0x1: Channel y enabled (value: 1)
     */
        /** @brief Channel y disabled */
    constexpr std::uint32_t DFSDM_CH0CFGR1_CHEN_B_0x0 = 0;
        /** @brief Channel y enabled */
    constexpr std::uint32_t DFSDM_CH0CFGR1_CHEN_B_0x1 = 1;

    /** @brief Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH0CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel inputs are taken from pins of the same channel y. (value: 0)
     *          - B_0x1: Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). (value: 1)
     */
        /** @brief Channel inputs are taken from pins of the same channel y. */
    constexpr std::uint32_t DFSDM_CH0CFGR1_CHINSEL_B_0x0 = 0;
        /** @brief Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). */
    constexpr std::uint32_t DFSDM_CH0CFGR1_CHINSEL_B_0x1 = 1;

    /** @brief Input data multiplexer for channel y 2:	Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3:	Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH0CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. (value: 0)
     *          - B_0x1: Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. (value: 1)
     */
        /** @brief Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. */
    constexpr std::uint32_t DFSDM_CH0CFGR1_DATMPX_B_0x0 = 0;
        /** @brief Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. */
    constexpr std::uint32_t DFSDM_CH0CFGR1_DATMPX_B_0x1 = 1;

    /** @brief Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH0CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. (value: 0)
     *          - B_0x1: Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: (value: 1)
     */
        /** @brief Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. */
    constexpr std::uint32_t DFSDM_CH0CFGR1_DATPACK_B_0x0 = 0;
        /** @brief Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: */
    constexpr std::uint32_t DFSDM_CH0CFGR1_DATPACK_B_0x1 = 1;

    /** @brief Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2- */
    using DFSDM_CH0CFGR1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output clock generation is disabled (CKOUT signal is set to low state) (value: 0)
     */
        /** @brief Output clock generation is disabled (CKOUT signal is set to low state) */
    constexpr std::uint32_t DFSDM_CH0CFGR1_CKOUTDIV_B_0x0 = 0;

    /** @brief Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH0CFGR1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Source for output clock is from system clock (value: 0)
     *          - B_0x1: Source for output clock is from audio clock (value: 1)
     */
        /** @brief Source for output clock is from system clock */
    constexpr std::uint32_t DFSDM_CH0CFGR1_CKOUTSRC_B_0x0 = 0;
        /** @brief Source for output clock is from audio clock */
    constexpr std::uint32_t DFSDM_CH0CFGR1_CKOUTSRC_B_0x1 = 1;

    /** @brief Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH0CFGR1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM interface disabled (value: 0)
     *          - B_0x1: DFSDM interface enabled (value: 1)
     */
        /** @brief DFSDM interface disabled */
    constexpr std::uint32_t DFSDM_CH0CFGR1_DFSDMEN_B_0x0 = 0;
        /** @brief DFSDM interface enabled */
    constexpr std::uint32_t DFSDM_CH0CFGR1_DFSDMEN_B_0x1 = 1;

    /** @brief DFSDM channel 0 configuration register */
    using DFSDM_CH0CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right */
    using DFSDM_CH0CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software. */
    using DFSDM_CH0CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 0 analog watchdog and short-circuit detector register */
    using DFSDM_CH0AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel. */
    using DFSDM_CH0AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y */
    using DFSDM_CH0AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is */
    using DFSDM_CH0AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH0AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_CH0AWSCDR_AWFORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_CH0AWSCDR_AWFORD_B_0x1 = 1;

    /** @brief DFSDM channel 0 watchdog filter data register */
    using DFSDM_CH0WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3). */
    using DFSDM_CH0WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 0 data input register */
    using DFSDM_CH0DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format. */
    using DFSDM_CH0DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format. */
    using DFSDM_CH0DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_CH0DLYR register */
    using DFSDM_CH0DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pulses to skip for input data skipping function immediately after writing to this field. Reading of PLSSKP[5:0] returns current value of pulses which will be skipped. If PLSSKP[5:0]=0 then all required data samples were already skipped. Note: User can update PLSSKP[5:0] also when PLSSKP[5:0] is not zero. 0-63: Defines the number of serial input samples that will be skipped. Skipping is applied */
    using DFSDM_CH0DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 1 configuration register */
    using DFSDM_CH1CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH1CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI with rising edge to strobe data (value: 0)
     *          - B_0x1: SPI with falling edge to strobe data (value: 1)
     *          - B_0x2: Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief SPI with rising edge to strobe data */
    constexpr std::uint32_t DFSDM_CH1CFGR1_SITP_B_0x0 = 0;
        /** @brief SPI with falling edge to strobe data */
    constexpr std::uint32_t DFSDM_CH1CFGR1_SITP_B_0x1 = 1;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t DFSDM_CH1CFGR1_SITP_B_0x2 = 2;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t DFSDM_CH1CFGR1_SITP_B_0x3 = 3;

    /** @brief SPI clock select for channel y 2:	clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3:	clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH1CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock coming from external CKINy input - sampling point according SITP[1:0] (value: 0)
     *          - B_0x1: clock coming from internal CKOUT output - sampling point according SITP[1:0] (value: 1)
     */
        /** @brief clock coming from external CKINy input - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH1CFGR1_SPICKSEL_B_0x0 = 0;
        /** @brief clock coming from internal CKOUT output - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH1CFGR1_SPICKSEL_B_0x1 = 1;

    /** @brief Short-circuit detector enable on channel y */
    using DFSDM_CH1CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel y will not be guarded by the short-circuit detector (value: 0)
     *          - B_0x1: Input channel y will be continuously guarded by the short-circuit detector (value: 1)
     */
        /** @brief Input channel y will not be guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH1CFGR1_SCDEN_B_0x0 = 0;
        /** @brief Input channel y will be continuously guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH1CFGR1_SCDEN_B_0x1 = 1;

    /** @brief Clock absence detector enable on channel y */
    using DFSDM_CH1CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence detector disabled on channel y (value: 0)
     *          - B_0x1: Clock absence detector enabled on channel y (value: 1)
     */
        /** @brief Clock absence detector disabled on channel y */
    constexpr std::uint32_t DFSDM_CH1CFGR1_CKABEN_B_0x0 = 0;
        /** @brief Clock absence detector enabled on channel y */
    constexpr std::uint32_t DFSDM_CH1CFGR1_CKABEN_B_0x1 = 1;

    /** @brief Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting. */
    using DFSDM_CH1CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel y disabled (value: 0)
     *          - B_0x1: Channel y enabled (value: 1)
     */
        /** @brief Channel y disabled */
    constexpr std::uint32_t DFSDM_CH1CFGR1_CHEN_B_0x0 = 0;
        /** @brief Channel y enabled */
    constexpr std::uint32_t DFSDM_CH1CFGR1_CHEN_B_0x1 = 1;

    /** @brief Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH1CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel inputs are taken from pins of the same channel y. (value: 0)
     *          - B_0x1: Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). (value: 1)
     */
        /** @brief Channel inputs are taken from pins of the same channel y. */
    constexpr std::uint32_t DFSDM_CH1CFGR1_CHINSEL_B_0x0 = 0;
        /** @brief Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). */
    constexpr std::uint32_t DFSDM_CH1CFGR1_CHINSEL_B_0x1 = 1;

    /** @brief Input data multiplexer for channel y 2:	Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3:	Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH1CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. (value: 0)
     *          - B_0x1: Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. (value: 1)
     */
        /** @brief Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. */
    constexpr std::uint32_t DFSDM_CH1CFGR1_DATMPX_B_0x0 = 0;
        /** @brief Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. */
    constexpr std::uint32_t DFSDM_CH1CFGR1_DATMPX_B_0x1 = 1;

    /** @brief Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH1CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. (value: 0)
     *          - B_0x1: Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: (value: 1)
     */
        /** @brief Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. */
    constexpr std::uint32_t DFSDM_CH1CFGR1_DATPACK_B_0x0 = 0;
        /** @brief Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: */
    constexpr std::uint32_t DFSDM_CH1CFGR1_DATPACK_B_0x1 = 1;

    /** @brief Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2- */
    using DFSDM_CH1CFGR1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output clock generation is disabled (CKOUT signal is set to low state) (value: 0)
     */
        /** @brief Output clock generation is disabled (CKOUT signal is set to low state) */
    constexpr std::uint32_t DFSDM_CH1CFGR1_CKOUTDIV_B_0x0 = 0;

    /** @brief Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH1CFGR1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Source for output clock is from system clock (value: 0)
     *          - B_0x1: Source for output clock is from audio clock (value: 1)
     */
        /** @brief Source for output clock is from system clock */
    constexpr std::uint32_t DFSDM_CH1CFGR1_CKOUTSRC_B_0x0 = 0;
        /** @brief Source for output clock is from audio clock */
    constexpr std::uint32_t DFSDM_CH1CFGR1_CKOUTSRC_B_0x1 = 1;

    /** @brief Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH1CFGR1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM interface disabled (value: 0)
     *          - B_0x1: DFSDM interface enabled (value: 1)
     */
        /** @brief DFSDM interface disabled */
    constexpr std::uint32_t DFSDM_CH1CFGR1_DFSDMEN_B_0x0 = 0;
        /** @brief DFSDM interface enabled */
    constexpr std::uint32_t DFSDM_CH1CFGR1_DFSDMEN_B_0x1 = 1;

    /** @brief DFSDM channel 1 configuration register */
    using DFSDM_CH1CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right */
    using DFSDM_CH1CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software. */
    using DFSDM_CH1CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 1 analog watchdog and short-circuit detector register */
    using DFSDM_CH1AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel. */
    using DFSDM_CH1AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y */
    using DFSDM_CH1AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is */
    using DFSDM_CH1AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH1AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_CH1AWSCDR_AWFORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_CH1AWSCDR_AWFORD_B_0x1 = 1;

    /** @brief DFSDM channel 1 watchdog filter data register */
    using DFSDM_CH1WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3). */
    using DFSDM_CH1WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 1 data input register */
    using DFSDM_CH1DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format. */
    using DFSDM_CH1DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format. */
    using DFSDM_CH1DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_CH1DLYR register */
    using DFSDM_CH1DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pulses to skip for input data skipping function immediately after writing to this field. Reading of PLSSKP[5:0] returns current value of pulses which will be skipped. If PLSSKP[5:0]=0 then all required data samples were already skipped. Note: User can update PLSSKP[5:0] also when PLSSKP[5:0] is not zero. 0-63: Defines the number of serial input samples that will be skipped. Skipping is applied */
    using DFSDM_CH1DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 2 configuration register */
    using DFSDM_CH2CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH2CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI with rising edge to strobe data (value: 0)
     *          - B_0x1: SPI with falling edge to strobe data (value: 1)
     *          - B_0x2: Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief SPI with rising edge to strobe data */
    constexpr std::uint32_t DFSDM_CH2CFGR1_SITP_B_0x0 = 0;
        /** @brief SPI with falling edge to strobe data */
    constexpr std::uint32_t DFSDM_CH2CFGR1_SITP_B_0x1 = 1;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t DFSDM_CH2CFGR1_SITP_B_0x2 = 2;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t DFSDM_CH2CFGR1_SITP_B_0x3 = 3;

    /** @brief SPI clock select for channel y 2:	clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3:	clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH2CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock coming from external CKINy input - sampling point according SITP[1:0] (value: 0)
     *          - B_0x1: clock coming from internal CKOUT output - sampling point according SITP[1:0] (value: 1)
     */
        /** @brief clock coming from external CKINy input - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH2CFGR1_SPICKSEL_B_0x0 = 0;
        /** @brief clock coming from internal CKOUT output - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH2CFGR1_SPICKSEL_B_0x1 = 1;

    /** @brief Short-circuit detector enable on channel y */
    using DFSDM_CH2CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel y will not be guarded by the short-circuit detector (value: 0)
     *          - B_0x1: Input channel y will be continuously guarded by the short-circuit detector (value: 1)
     */
        /** @brief Input channel y will not be guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH2CFGR1_SCDEN_B_0x0 = 0;
        /** @brief Input channel y will be continuously guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH2CFGR1_SCDEN_B_0x1 = 1;

    /** @brief Clock absence detector enable on channel y */
    using DFSDM_CH2CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence detector disabled on channel y (value: 0)
     *          - B_0x1: Clock absence detector enabled on channel y (value: 1)
     */
        /** @brief Clock absence detector disabled on channel y */
    constexpr std::uint32_t DFSDM_CH2CFGR1_CKABEN_B_0x0 = 0;
        /** @brief Clock absence detector enabled on channel y */
    constexpr std::uint32_t DFSDM_CH2CFGR1_CKABEN_B_0x1 = 1;

    /** @brief Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting. */
    using DFSDM_CH2CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel y disabled (value: 0)
     *          - B_0x1: Channel y enabled (value: 1)
     */
        /** @brief Channel y disabled */
    constexpr std::uint32_t DFSDM_CH2CFGR1_CHEN_B_0x0 = 0;
        /** @brief Channel y enabled */
    constexpr std::uint32_t DFSDM_CH2CFGR1_CHEN_B_0x1 = 1;

    /** @brief Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH2CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel inputs are taken from pins of the same channel y. (value: 0)
     *          - B_0x1: Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). (value: 1)
     */
        /** @brief Channel inputs are taken from pins of the same channel y. */
    constexpr std::uint32_t DFSDM_CH2CFGR1_CHINSEL_B_0x0 = 0;
        /** @brief Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). */
    constexpr std::uint32_t DFSDM_CH2CFGR1_CHINSEL_B_0x1 = 1;

    /** @brief Input data multiplexer for channel y 2:	Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3:	Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH2CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. (value: 0)
     *          - B_0x1: Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. (value: 1)
     */
        /** @brief Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. */
    constexpr std::uint32_t DFSDM_CH2CFGR1_DATMPX_B_0x0 = 0;
        /** @brief Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. */
    constexpr std::uint32_t DFSDM_CH2CFGR1_DATMPX_B_0x1 = 1;

    /** @brief Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH2CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. (value: 0)
     *          - B_0x1: Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: (value: 1)
     */
        /** @brief Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. */
    constexpr std::uint32_t DFSDM_CH2CFGR1_DATPACK_B_0x0 = 0;
        /** @brief Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: */
    constexpr std::uint32_t DFSDM_CH2CFGR1_DATPACK_B_0x1 = 1;

    /** @brief Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2- */
    using DFSDM_CH2CFGR1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output clock generation is disabled (CKOUT signal is set to low state) (value: 0)
     */
        /** @brief Output clock generation is disabled (CKOUT signal is set to low state) */
    constexpr std::uint32_t DFSDM_CH2CFGR1_CKOUTDIV_B_0x0 = 0;

    /** @brief Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH2CFGR1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Source for output clock is from system clock (value: 0)
     *          - B_0x1: Source for output clock is from audio clock (value: 1)
     */
        /** @brief Source for output clock is from system clock */
    constexpr std::uint32_t DFSDM_CH2CFGR1_CKOUTSRC_B_0x0 = 0;
        /** @brief Source for output clock is from audio clock */
    constexpr std::uint32_t DFSDM_CH2CFGR1_CKOUTSRC_B_0x1 = 1;

    /** @brief Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH2CFGR1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM interface disabled (value: 0)
     *          - B_0x1: DFSDM interface enabled (value: 1)
     */
        /** @brief DFSDM interface disabled */
    constexpr std::uint32_t DFSDM_CH2CFGR1_DFSDMEN_B_0x0 = 0;
        /** @brief DFSDM interface enabled */
    constexpr std::uint32_t DFSDM_CH2CFGR1_DFSDMEN_B_0x1 = 1;

    /** @brief DFSDM channel 2 configuration register */
    using DFSDM_CH2CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right */
    using DFSDM_CH2CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software. */
    using DFSDM_CH2CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 2 analog watchdog and short-circuit detector register */
    using DFSDM_CH2AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel. */
    using DFSDM_CH2AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y */
    using DFSDM_CH2AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is */
    using DFSDM_CH2AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH2AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_CH2AWSCDR_AWFORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_CH2AWSCDR_AWFORD_B_0x1 = 1;

    /** @brief DFSDM channel 2 watchdog filter data register */
    using DFSDM_CH2WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3). */
    using DFSDM_CH2WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 2 data input register */
    using DFSDM_CH2DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format. */
    using DFSDM_CH2DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format. */
    using DFSDM_CH2DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_CH2DLYR register */
    using DFSDM_CH2DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pulses to skip for input data skipping function immediately after writing to this field. Reading of PLSSKP[5:0] returns current value of pulses which will be skipped. If PLSSKP[5:0]=0 then all required data samples were already skipped. Note: User can update PLSSKP[5:0] also when PLSSKP[5:0] is not zero. 0-63: Defines the number of serial input samples that will be skipped. Skipping is applied */
    using DFSDM_CH2DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 3 configuration register */
    using DFSDM_CH3CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH3CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI with rising edge to strobe data (value: 0)
     *          - B_0x1: SPI with falling edge to strobe data (value: 1)
     *          - B_0x2: Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief SPI with rising edge to strobe data */
    constexpr std::uint32_t DFSDM_CH3CFGR1_SITP_B_0x0 = 0;
        /** @brief SPI with falling edge to strobe data */
    constexpr std::uint32_t DFSDM_CH3CFGR1_SITP_B_0x1 = 1;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t DFSDM_CH3CFGR1_SITP_B_0x2 = 2;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t DFSDM_CH3CFGR1_SITP_B_0x3 = 3;

    /** @brief SPI clock select for channel y 2:	clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3:	clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH3CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock coming from external CKINy input - sampling point according SITP[1:0] (value: 0)
     *          - B_0x1: clock coming from internal CKOUT output - sampling point according SITP[1:0] (value: 1)
     */
        /** @brief clock coming from external CKINy input - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH3CFGR1_SPICKSEL_B_0x0 = 0;
        /** @brief clock coming from internal CKOUT output - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH3CFGR1_SPICKSEL_B_0x1 = 1;

    /** @brief Short-circuit detector enable on channel y */
    using DFSDM_CH3CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel y will not be guarded by the short-circuit detector (value: 0)
     *          - B_0x1: Input channel y will be continuously guarded by the short-circuit detector (value: 1)
     */
        /** @brief Input channel y will not be guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH3CFGR1_SCDEN_B_0x0 = 0;
        /** @brief Input channel y will be continuously guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH3CFGR1_SCDEN_B_0x1 = 1;

    /** @brief Clock absence detector enable on channel y */
    using DFSDM_CH3CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence detector disabled on channel y (value: 0)
     *          - B_0x1: Clock absence detector enabled on channel y (value: 1)
     */
        /** @brief Clock absence detector disabled on channel y */
    constexpr std::uint32_t DFSDM_CH3CFGR1_CKABEN_B_0x0 = 0;
        /** @brief Clock absence detector enabled on channel y */
    constexpr std::uint32_t DFSDM_CH3CFGR1_CKABEN_B_0x1 = 1;

    /** @brief Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting. */
    using DFSDM_CH3CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel y disabled (value: 0)
     *          - B_0x1: Channel y enabled (value: 1)
     */
        /** @brief Channel y disabled */
    constexpr std::uint32_t DFSDM_CH3CFGR1_CHEN_B_0x0 = 0;
        /** @brief Channel y enabled */
    constexpr std::uint32_t DFSDM_CH3CFGR1_CHEN_B_0x1 = 1;

    /** @brief Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH3CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel inputs are taken from pins of the same channel y. (value: 0)
     *          - B_0x1: Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). (value: 1)
     */
        /** @brief Channel inputs are taken from pins of the same channel y. */
    constexpr std::uint32_t DFSDM_CH3CFGR1_CHINSEL_B_0x0 = 0;
        /** @brief Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). */
    constexpr std::uint32_t DFSDM_CH3CFGR1_CHINSEL_B_0x1 = 1;

    /** @brief Input data multiplexer for channel y 2:	Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3:	Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH3CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. (value: 0)
     *          - B_0x1: Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. (value: 1)
     */
        /** @brief Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. */
    constexpr std::uint32_t DFSDM_CH3CFGR1_DATMPX_B_0x0 = 0;
        /** @brief Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. */
    constexpr std::uint32_t DFSDM_CH3CFGR1_DATMPX_B_0x1 = 1;

    /** @brief Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH3CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. (value: 0)
     *          - B_0x1: Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: (value: 1)
     */
        /** @brief Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. */
    constexpr std::uint32_t DFSDM_CH3CFGR1_DATPACK_B_0x0 = 0;
        /** @brief Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: */
    constexpr std::uint32_t DFSDM_CH3CFGR1_DATPACK_B_0x1 = 1;

    /** @brief Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2- */
    using DFSDM_CH3CFGR1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output clock generation is disabled (CKOUT signal is set to low state) (value: 0)
     */
        /** @brief Output clock generation is disabled (CKOUT signal is set to low state) */
    constexpr std::uint32_t DFSDM_CH3CFGR1_CKOUTDIV_B_0x0 = 0;

    /** @brief Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH3CFGR1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Source for output clock is from system clock (value: 0)
     *          - B_0x1: Source for output clock is from audio clock (value: 1)
     */
        /** @brief Source for output clock is from system clock */
    constexpr std::uint32_t DFSDM_CH3CFGR1_CKOUTSRC_B_0x0 = 0;
        /** @brief Source for output clock is from audio clock */
    constexpr std::uint32_t DFSDM_CH3CFGR1_CKOUTSRC_B_0x1 = 1;

    /** @brief Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH3CFGR1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM interface disabled (value: 0)
     *          - B_0x1: DFSDM interface enabled (value: 1)
     */
        /** @brief DFSDM interface disabled */
    constexpr std::uint32_t DFSDM_CH3CFGR1_DFSDMEN_B_0x0 = 0;
        /** @brief DFSDM interface enabled */
    constexpr std::uint32_t DFSDM_CH3CFGR1_DFSDMEN_B_0x1 = 1;

    /** @brief DFSDM channel 3 configuration register */
    using DFSDM_CH3CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right */
    using DFSDM_CH3CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software. */
    using DFSDM_CH3CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 3 analog watchdog and short-circuit detector register */
    using DFSDM_CH3AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel. */
    using DFSDM_CH3AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y */
    using DFSDM_CH3AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is */
    using DFSDM_CH3AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH3AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_CH3AWSCDR_AWFORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_CH3AWSCDR_AWFORD_B_0x1 = 1;

    /** @brief DFSDM channel 3 watchdog filter data register */
    using DFSDM_CH3WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3). */
    using DFSDM_CH3WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 3 data input register */
    using DFSDM_CH3DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format. */
    using DFSDM_CH3DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format. */
    using DFSDM_CH3DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_CH3DLYR register */
    using DFSDM_CH3DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pulses to skip for input data skipping function immediately after writing to this field. Reading of PLSSKP[5:0] returns current value of pulses which will be skipped. If PLSSKP[5:0]=0 then all required data samples were already skipped. Note: User can update PLSSKP[5:0] also when PLSSKP[5:0] is not zero. 0-63: Defines the number of serial input samples that will be skipped. Skipping is applied */
    using DFSDM_CH3DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 4 configuration register */
    using DFSDM_CH4CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH4CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI with rising edge to strobe data (value: 0)
     *          - B_0x1: SPI with falling edge to strobe data (value: 1)
     *          - B_0x2: Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief SPI with rising edge to strobe data */
    constexpr std::uint32_t DFSDM_CH4CFGR1_SITP_B_0x0 = 0;
        /** @brief SPI with falling edge to strobe data */
    constexpr std::uint32_t DFSDM_CH4CFGR1_SITP_B_0x1 = 1;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t DFSDM_CH4CFGR1_SITP_B_0x2 = 2;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t DFSDM_CH4CFGR1_SITP_B_0x3 = 3;

    /** @brief SPI clock select for channel y 2:	clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3:	clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH4CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock coming from external CKINy input - sampling point according SITP[1:0] (value: 0)
     *          - B_0x1: clock coming from internal CKOUT output - sampling point according SITP[1:0] (value: 1)
     */
        /** @brief clock coming from external CKINy input - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH4CFGR1_SPICKSEL_B_0x0 = 0;
        /** @brief clock coming from internal CKOUT output - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH4CFGR1_SPICKSEL_B_0x1 = 1;

    /** @brief Short-circuit detector enable on channel y */
    using DFSDM_CH4CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel y will not be guarded by the short-circuit detector (value: 0)
     *          - B_0x1: Input channel y will be continuously guarded by the short-circuit detector (value: 1)
     */
        /** @brief Input channel y will not be guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH4CFGR1_SCDEN_B_0x0 = 0;
        /** @brief Input channel y will be continuously guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH4CFGR1_SCDEN_B_0x1 = 1;

    /** @brief Clock absence detector enable on channel y */
    using DFSDM_CH4CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence detector disabled on channel y (value: 0)
     *          - B_0x1: Clock absence detector enabled on channel y (value: 1)
     */
        /** @brief Clock absence detector disabled on channel y */
    constexpr std::uint32_t DFSDM_CH4CFGR1_CKABEN_B_0x0 = 0;
        /** @brief Clock absence detector enabled on channel y */
    constexpr std::uint32_t DFSDM_CH4CFGR1_CKABEN_B_0x1 = 1;

    /** @brief Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting. */
    using DFSDM_CH4CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel y disabled (value: 0)
     *          - B_0x1: Channel y enabled (value: 1)
     */
        /** @brief Channel y disabled */
    constexpr std::uint32_t DFSDM_CH4CFGR1_CHEN_B_0x0 = 0;
        /** @brief Channel y enabled */
    constexpr std::uint32_t DFSDM_CH4CFGR1_CHEN_B_0x1 = 1;

    /** @brief Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH4CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel inputs are taken from pins of the same channel y. (value: 0)
     *          - B_0x1: Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). (value: 1)
     */
        /** @brief Channel inputs are taken from pins of the same channel y. */
    constexpr std::uint32_t DFSDM_CH4CFGR1_CHINSEL_B_0x0 = 0;
        /** @brief Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). */
    constexpr std::uint32_t DFSDM_CH4CFGR1_CHINSEL_B_0x1 = 1;

    /** @brief Input data multiplexer for channel y 2:	Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3:	Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH4CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. (value: 0)
     *          - B_0x1: Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. (value: 1)
     */
        /** @brief Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. */
    constexpr std::uint32_t DFSDM_CH4CFGR1_DATMPX_B_0x0 = 0;
        /** @brief Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. */
    constexpr std::uint32_t DFSDM_CH4CFGR1_DATMPX_B_0x1 = 1;

    /** @brief Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH4CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. (value: 0)
     *          - B_0x1: Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: (value: 1)
     */
        /** @brief Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. */
    constexpr std::uint32_t DFSDM_CH4CFGR1_DATPACK_B_0x0 = 0;
        /** @brief Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: */
    constexpr std::uint32_t DFSDM_CH4CFGR1_DATPACK_B_0x1 = 1;

    /** @brief Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2- */
    using DFSDM_CH4CFGR1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output clock generation is disabled (CKOUT signal is set to low state) (value: 0)
     */
        /** @brief Output clock generation is disabled (CKOUT signal is set to low state) */
    constexpr std::uint32_t DFSDM_CH4CFGR1_CKOUTDIV_B_0x0 = 0;

    /** @brief Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH4CFGR1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Source for output clock is from system clock (value: 0)
     *          - B_0x1: Source for output clock is from audio clock (value: 1)
     */
        /** @brief Source for output clock is from system clock */
    constexpr std::uint32_t DFSDM_CH4CFGR1_CKOUTSRC_B_0x0 = 0;
        /** @brief Source for output clock is from audio clock */
    constexpr std::uint32_t DFSDM_CH4CFGR1_CKOUTSRC_B_0x1 = 1;

    /** @brief Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH4CFGR1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM interface disabled (value: 0)
     *          - B_0x1: DFSDM interface enabled (value: 1)
     */
        /** @brief DFSDM interface disabled */
    constexpr std::uint32_t DFSDM_CH4CFGR1_DFSDMEN_B_0x0 = 0;
        /** @brief DFSDM interface enabled */
    constexpr std::uint32_t DFSDM_CH4CFGR1_DFSDMEN_B_0x1 = 1;

    /** @brief DFSDM channel 4 configuration register */
    using DFSDM_CH4CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right */
    using DFSDM_CH4CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software. */
    using DFSDM_CH4CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 4 analog watchdog and short-circuit detector register */
    using DFSDM_CH4AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel. */
    using DFSDM_CH4AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y */
    using DFSDM_CH4AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is */
    using DFSDM_CH4AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH4AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_CH4AWSCDR_AWFORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_CH4AWSCDR_AWFORD_B_0x1 = 1;

    /** @brief DFSDM channel 4 watchdog filter data register */
    using DFSDM_CH4WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3). */
    using DFSDM_CH4WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 4 data input register */
    using DFSDM_CH4DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format. */
    using DFSDM_CH4DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format. */
    using DFSDM_CH4DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_CH4DLYR register */
    using DFSDM_CH4DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pulses to skip for input data skipping function immediately after writing to this field. Reading of PLSSKP[5:0] returns current value of pulses which will be skipped. If PLSSKP[5:0]=0 then all required data samples were already skipped. Note: User can update PLSSKP[5:0] also when PLSSKP[5:0] is not zero. 0-63: Defines the number of serial input samples that will be skipped. Skipping is applied */
    using DFSDM_CH4DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 5 configuration register */
    using DFSDM_CH5CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH5CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI with rising edge to strobe data (value: 0)
     *          - B_0x1: SPI with falling edge to strobe data (value: 1)
     *          - B_0x2: Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief SPI with rising edge to strobe data */
    constexpr std::uint32_t DFSDM_CH5CFGR1_SITP_B_0x0 = 0;
        /** @brief SPI with falling edge to strobe data */
    constexpr std::uint32_t DFSDM_CH5CFGR1_SITP_B_0x1 = 1;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t DFSDM_CH5CFGR1_SITP_B_0x2 = 2;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t DFSDM_CH5CFGR1_SITP_B_0x3 = 3;

    /** @brief SPI clock select for channel y 2:	clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3:	clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH5CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock coming from external CKINy input - sampling point according SITP[1:0] (value: 0)
     *          - B_0x1: clock coming from internal CKOUT output - sampling point according SITP[1:0] (value: 1)
     */
        /** @brief clock coming from external CKINy input - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH5CFGR1_SPICKSEL_B_0x0 = 0;
        /** @brief clock coming from internal CKOUT output - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH5CFGR1_SPICKSEL_B_0x1 = 1;

    /** @brief Short-circuit detector enable on channel y */
    using DFSDM_CH5CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel y will not be guarded by the short-circuit detector (value: 0)
     *          - B_0x1: Input channel y will be continuously guarded by the short-circuit detector (value: 1)
     */
        /** @brief Input channel y will not be guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH5CFGR1_SCDEN_B_0x0 = 0;
        /** @brief Input channel y will be continuously guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH5CFGR1_SCDEN_B_0x1 = 1;

    /** @brief Clock absence detector enable on channel y */
    using DFSDM_CH5CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence detector disabled on channel y (value: 0)
     *          - B_0x1: Clock absence detector enabled on channel y (value: 1)
     */
        /** @brief Clock absence detector disabled on channel y */
    constexpr std::uint32_t DFSDM_CH5CFGR1_CKABEN_B_0x0 = 0;
        /** @brief Clock absence detector enabled on channel y */
    constexpr std::uint32_t DFSDM_CH5CFGR1_CKABEN_B_0x1 = 1;

    /** @brief Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting. */
    using DFSDM_CH5CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel y disabled (value: 0)
     *          - B_0x1: Channel y enabled (value: 1)
     */
        /** @brief Channel y disabled */
    constexpr std::uint32_t DFSDM_CH5CFGR1_CHEN_B_0x0 = 0;
        /** @brief Channel y enabled */
    constexpr std::uint32_t DFSDM_CH5CFGR1_CHEN_B_0x1 = 1;

    /** @brief Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH5CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel inputs are taken from pins of the same channel y. (value: 0)
     *          - B_0x1: Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). (value: 1)
     */
        /** @brief Channel inputs are taken from pins of the same channel y. */
    constexpr std::uint32_t DFSDM_CH5CFGR1_CHINSEL_B_0x0 = 0;
        /** @brief Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). */
    constexpr std::uint32_t DFSDM_CH5CFGR1_CHINSEL_B_0x1 = 1;

    /** @brief Input data multiplexer for channel y 2:	Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3:	Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH5CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. (value: 0)
     *          - B_0x1: Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. (value: 1)
     */
        /** @brief Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. */
    constexpr std::uint32_t DFSDM_CH5CFGR1_DATMPX_B_0x0 = 0;
        /** @brief Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. */
    constexpr std::uint32_t DFSDM_CH5CFGR1_DATMPX_B_0x1 = 1;

    /** @brief Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH5CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. (value: 0)
     *          - B_0x1: Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: (value: 1)
     */
        /** @brief Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. */
    constexpr std::uint32_t DFSDM_CH5CFGR1_DATPACK_B_0x0 = 0;
        /** @brief Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: */
    constexpr std::uint32_t DFSDM_CH5CFGR1_DATPACK_B_0x1 = 1;

    /** @brief Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2- */
    using DFSDM_CH5CFGR1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output clock generation is disabled (CKOUT signal is set to low state) (value: 0)
     */
        /** @brief Output clock generation is disabled (CKOUT signal is set to low state) */
    constexpr std::uint32_t DFSDM_CH5CFGR1_CKOUTDIV_B_0x0 = 0;

    /** @brief Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH5CFGR1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Source for output clock is from system clock (value: 0)
     *          - B_0x1: Source for output clock is from audio clock (value: 1)
     */
        /** @brief Source for output clock is from system clock */
    constexpr std::uint32_t DFSDM_CH5CFGR1_CKOUTSRC_B_0x0 = 0;
        /** @brief Source for output clock is from audio clock */
    constexpr std::uint32_t DFSDM_CH5CFGR1_CKOUTSRC_B_0x1 = 1;

    /** @brief Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH5CFGR1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM interface disabled (value: 0)
     *          - B_0x1: DFSDM interface enabled (value: 1)
     */
        /** @brief DFSDM interface disabled */
    constexpr std::uint32_t DFSDM_CH5CFGR1_DFSDMEN_B_0x0 = 0;
        /** @brief DFSDM interface enabled */
    constexpr std::uint32_t DFSDM_CH5CFGR1_DFSDMEN_B_0x1 = 1;

    /** @brief DFSDM channel 5 configuration register */
    using DFSDM_CH5CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right */
    using DFSDM_CH5CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software. */
    using DFSDM_CH5CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 5 analog watchdog and short-circuit detector register */
    using DFSDM_CH5AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel. */
    using DFSDM_CH5AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y */
    using DFSDM_CH5AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is */
    using DFSDM_CH5AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH5AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_CH5AWSCDR_AWFORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_CH5AWSCDR_AWFORD_B_0x1 = 1;

    /** @brief DFSDM channel 5 watchdog filter data register */
    using DFSDM_CH5WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3). */
    using DFSDM_CH5WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 5 data input register */
    using DFSDM_CH5DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format. */
    using DFSDM_CH5DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format. */
    using DFSDM_CH5DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_CH5DLYR register */
    using DFSDM_CH5DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pulses to skip for input data skipping function immediately after writing to this field. Reading of PLSSKP[5:0] returns current value of pulses which will be skipped. If PLSSKP[5:0]=0 then all required data samples were already skipped. Note: User can update PLSSKP[5:0] also when PLSSKP[5:0] is not zero. 0-63: Defines the number of serial input samples that will be skipped. Skipping is applied */
    using DFSDM_CH5DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 6 configuration register */
    using DFSDM_CH6CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH6CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI with rising edge to strobe data (value: 0)
     *          - B_0x1: SPI with falling edge to strobe data (value: 1)
     *          - B_0x2: Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief SPI with rising edge to strobe data */
    constexpr std::uint32_t DFSDM_CH6CFGR1_SITP_B_0x0 = 0;
        /** @brief SPI with falling edge to strobe data */
    constexpr std::uint32_t DFSDM_CH6CFGR1_SITP_B_0x1 = 1;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t DFSDM_CH6CFGR1_SITP_B_0x2 = 2;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t DFSDM_CH6CFGR1_SITP_B_0x3 = 3;

    /** @brief SPI clock select for channel y 2:	clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3:	clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH6CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock coming from external CKINy input - sampling point according SITP[1:0] (value: 0)
     *          - B_0x1: clock coming from internal CKOUT output - sampling point according SITP[1:0] (value: 1)
     */
        /** @brief clock coming from external CKINy input - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH6CFGR1_SPICKSEL_B_0x0 = 0;
        /** @brief clock coming from internal CKOUT output - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH6CFGR1_SPICKSEL_B_0x1 = 1;

    /** @brief Short-circuit detector enable on channel y */
    using DFSDM_CH6CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel y will not be guarded by the short-circuit detector (value: 0)
     *          - B_0x1: Input channel y will be continuously guarded by the short-circuit detector (value: 1)
     */
        /** @brief Input channel y will not be guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH6CFGR1_SCDEN_B_0x0 = 0;
        /** @brief Input channel y will be continuously guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH6CFGR1_SCDEN_B_0x1 = 1;

    /** @brief Clock absence detector enable on channel y */
    using DFSDM_CH6CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence detector disabled on channel y (value: 0)
     *          - B_0x1: Clock absence detector enabled on channel y (value: 1)
     */
        /** @brief Clock absence detector disabled on channel y */
    constexpr std::uint32_t DFSDM_CH6CFGR1_CKABEN_B_0x0 = 0;
        /** @brief Clock absence detector enabled on channel y */
    constexpr std::uint32_t DFSDM_CH6CFGR1_CKABEN_B_0x1 = 1;

    /** @brief Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting. */
    using DFSDM_CH6CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel y disabled (value: 0)
     *          - B_0x1: Channel y enabled (value: 1)
     */
        /** @brief Channel y disabled */
    constexpr std::uint32_t DFSDM_CH6CFGR1_CHEN_B_0x0 = 0;
        /** @brief Channel y enabled */
    constexpr std::uint32_t DFSDM_CH6CFGR1_CHEN_B_0x1 = 1;

    /** @brief Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH6CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel inputs are taken from pins of the same channel y. (value: 0)
     *          - B_0x1: Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). (value: 1)
     */
        /** @brief Channel inputs are taken from pins of the same channel y. */
    constexpr std::uint32_t DFSDM_CH6CFGR1_CHINSEL_B_0x0 = 0;
        /** @brief Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). */
    constexpr std::uint32_t DFSDM_CH6CFGR1_CHINSEL_B_0x1 = 1;

    /** @brief Input data multiplexer for channel y 2:	Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3:	Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH6CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. (value: 0)
     *          - B_0x1: Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. (value: 1)
     */
        /** @brief Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. */
    constexpr std::uint32_t DFSDM_CH6CFGR1_DATMPX_B_0x0 = 0;
        /** @brief Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. */
    constexpr std::uint32_t DFSDM_CH6CFGR1_DATMPX_B_0x1 = 1;

    /** @brief Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH6CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. (value: 0)
     *          - B_0x1: Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: (value: 1)
     */
        /** @brief Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. */
    constexpr std::uint32_t DFSDM_CH6CFGR1_DATPACK_B_0x0 = 0;
        /** @brief Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: */
    constexpr std::uint32_t DFSDM_CH6CFGR1_DATPACK_B_0x1 = 1;

    /** @brief Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2- */
    using DFSDM_CH6CFGR1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output clock generation is disabled (CKOUT signal is set to low state) (value: 0)
     */
        /** @brief Output clock generation is disabled (CKOUT signal is set to low state) */
    constexpr std::uint32_t DFSDM_CH6CFGR1_CKOUTDIV_B_0x0 = 0;

    /** @brief Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH6CFGR1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Source for output clock is from system clock (value: 0)
     *          - B_0x1: Source for output clock is from audio clock (value: 1)
     */
        /** @brief Source for output clock is from system clock */
    constexpr std::uint32_t DFSDM_CH6CFGR1_CKOUTSRC_B_0x0 = 0;
        /** @brief Source for output clock is from audio clock */
    constexpr std::uint32_t DFSDM_CH6CFGR1_CKOUTSRC_B_0x1 = 1;

    /** @brief Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH6CFGR1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM interface disabled (value: 0)
     *          - B_0x1: DFSDM interface enabled (value: 1)
     */
        /** @brief DFSDM interface disabled */
    constexpr std::uint32_t DFSDM_CH6CFGR1_DFSDMEN_B_0x0 = 0;
        /** @brief DFSDM interface enabled */
    constexpr std::uint32_t DFSDM_CH6CFGR1_DFSDMEN_B_0x1 = 1;

    /** @brief DFSDM channel 6 configuration register */
    using DFSDM_CH6CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right */
    using DFSDM_CH6CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software. */
    using DFSDM_CH6CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 6 analog watchdog and short-circuit detector register */
    using DFSDM_CH6AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel. */
    using DFSDM_CH6AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y */
    using DFSDM_CH6AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is */
    using DFSDM_CH6AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH6AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_CH6AWSCDR_AWFORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_CH6AWSCDR_AWFORD_B_0x1 = 1;

    /** @brief DFSDM channel 6 watchdog filter data register */
    using DFSDM_CH6WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3). */
    using DFSDM_CH6WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 6 data input register */
    using DFSDM_CH6DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format. */
    using DFSDM_CH6DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format. */
    using DFSDM_CH6DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_CH6DLYR register */
    using DFSDM_CH6DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pulses to skip for input data skipping function immediately after writing to this field. Reading of PLSSKP[5:0] returns current value of pulses which will be skipped. If PLSSKP[5:0]=0 then all required data samples were already skipped. Note: User can update PLSSKP[5:0] also when PLSSKP[5:0] is not zero. 0-63: Defines the number of serial input samples that will be skipped. Skipping is applied */
    using DFSDM_CH6DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 7 configuration register */
    using DFSDM_CH7CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH7CFGR1_SITP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI with rising edge to strobe data (value: 0)
     *          - B_0x1: SPI with falling edge to strobe data (value: 1)
     *          - B_0x2: Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief SPI with rising edge to strobe data */
    constexpr std::uint32_t DFSDM_CH7CFGR1_SITP_B_0x0 = 0;
        /** @brief SPI with falling edge to strobe data */
    constexpr std::uint32_t DFSDM_CH7CFGR1_SITP_B_0x1 = 1;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t DFSDM_CH7CFGR1_SITP_B_0x2 = 2;
        /** @brief Manchester coded input on DATINy pin: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t DFSDM_CH7CFGR1_SITP_B_0x3 = 3;

    /** @brief SPI clock select for channel y 2:	clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3:	clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH7CFGR1_SPICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock coming from external CKINy input - sampling point according SITP[1:0] (value: 0)
     *          - B_0x1: clock coming from internal CKOUT output - sampling point according SITP[1:0] (value: 1)
     */
        /** @brief clock coming from external CKINy input - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH7CFGR1_SPICKSEL_B_0x0 = 0;
        /** @brief clock coming from internal CKOUT output - sampling point according SITP[1:0] */
    constexpr std::uint32_t DFSDM_CH7CFGR1_SPICKSEL_B_0x1 = 1;

    /** @brief Short-circuit detector enable on channel y */
    using DFSDM_CH7CFGR1_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel y will not be guarded by the short-circuit detector (value: 0)
     *          - B_0x1: Input channel y will be continuously guarded by the short-circuit detector (value: 1)
     */
        /** @brief Input channel y will not be guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH7CFGR1_SCDEN_B_0x0 = 0;
        /** @brief Input channel y will be continuously guarded by the short-circuit detector */
    constexpr std::uint32_t DFSDM_CH7CFGR1_SCDEN_B_0x1 = 1;

    /** @brief Clock absence detector enable on channel y */
    using DFSDM_CH7CFGR1_CKABEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence detector disabled on channel y (value: 0)
     *          - B_0x1: Clock absence detector enabled on channel y (value: 1)
     */
        /** @brief Clock absence detector disabled on channel y */
    constexpr std::uint32_t DFSDM_CH7CFGR1_CKABEN_B_0x0 = 0;
        /** @brief Clock absence detector enabled on channel y */
    constexpr std::uint32_t DFSDM_CH7CFGR1_CKABEN_B_0x1 = 1;

    /** @brief Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting. */
    using DFSDM_CH7CFGR1_CHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel y disabled (value: 0)
     *          - B_0x1: Channel y enabled (value: 1)
     */
        /** @brief Channel y disabled */
    constexpr std::uint32_t DFSDM_CH7CFGR1_CHEN_B_0x0 = 0;
        /** @brief Channel y enabled */
    constexpr std::uint32_t DFSDM_CH7CFGR1_CHEN_B_0x1 = 1;

    /** @brief Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH7CFGR1_CHINSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel inputs are taken from pins of the same channel y. (value: 0)
     *          - B_0x1: Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). (value: 1)
     */
        /** @brief Channel inputs are taken from pins of the same channel y. */
    constexpr std::uint32_t DFSDM_CH7CFGR1_CHINSEL_B_0x0 = 0;
        /** @brief Channel inputs are taken from pins of the following channel (channel (y+1) modulo 8). */
    constexpr std::uint32_t DFSDM_CH7CFGR1_CHINSEL_B_0x1 = 1;

    /** @brief Input data multiplexer for channel y 2:	Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3:	Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH7CFGR1_DATMPX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. (value: 0)
     *          - B_0x1: Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. (value: 1)
     */
        /** @brief Data to channel y are taken from external serial inputs as 1-bit values. DFSDM_CHyDATINR register is write protected. */
    constexpr std::uint32_t DFSDM_CH7CFGR1_DATMPX_B_0x0 = 0;
        /** @brief Data to channel y are taken from internal analog to digital converter ADCy+1 output register update as 16-bit values (if ADCy+1 is available). Data from ADCs are written into INDAT0[15:0] part of DFSDM_CHyDATINR register. */
    constexpr std::uint32_t DFSDM_CH7CFGR1_DATMPX_B_0x1 = 1;

    /** @brief Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH7CFGR1_DATPACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. (value: 0)
     *          - B_0x1: Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: (value: 1)
     */
        /** @brief Standard: input data in DFSDM_CHyDATINR register are stored only in INDAT0[15:0]. To empty DFSDM_CHyDATINR register one sample must be read by the DFSDM filter from channel y. */
    constexpr std::uint32_t DFSDM_CH7CFGR1_DATPACK_B_0x0 = 0;
        /** @brief Interleaved: input data in DFSDM_CHyDATINR register are stored as two samples: */
    constexpr std::uint32_t DFSDM_CH7CFGR1_DATPACK_B_0x1 = 1;

    /** @brief Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2- */
    using DFSDM_CH7CFGR1_CKOUTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output clock generation is disabled (CKOUT signal is set to low state) (value: 0)
     */
        /** @brief Output clock generation is disabled (CKOUT signal is set to low state) */
    constexpr std::uint32_t DFSDM_CH7CFGR1_CKOUTDIV_B_0x0 = 0;

    /** @brief Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH7CFGR1_CKOUTSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Source for output clock is from system clock (value: 0)
     *          - B_0x1: Source for output clock is from audio clock (value: 1)
     */
        /** @brief Source for output clock is from system clock */
    constexpr std::uint32_t DFSDM_CH7CFGR1_CKOUTSRC_B_0x0 = 0;
        /** @brief Source for output clock is from audio clock */
    constexpr std::uint32_t DFSDM_CH7CFGR1_CKOUTSRC_B_0x1 = 1;

    /** @brief Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0) */
    using DFSDM_CH7CFGR1_DFSDMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM interface disabled (value: 0)
     *          - B_0x1: DFSDM interface enabled (value: 1)
     */
        /** @brief DFSDM interface disabled */
    constexpr std::uint32_t DFSDM_CH7CFGR1_DFSDMEN_B_0x0 = 0;
        /** @brief DFSDM interface enabled */
    constexpr std::uint32_t DFSDM_CH7CFGR1_DFSDMEN_B_0x1 = 1;

    /** @brief DFSDM channel 7 configuration register */
    using DFSDM_CH7CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right */
    using DFSDM_CH7CFGR2_DTRBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software. */
    using DFSDM_CH7CFGR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 7 analog watchdog and short-circuit detector register */
    using DFSDM_CH7AWSCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel. */
    using DFSDM_CH7AWSCDR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y */
    using DFSDM_CH7AWSCDR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is */
    using DFSDM_CH7AWSCDR_AWFOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). */
    using DFSDM_CH7AWSCDR_AWFORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_CH7AWSCDR_AWFORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_CH7AWSCDR_AWFORD_B_0x1 = 1;

    /** @brief DFSDM channel 7 watchdog filter data register */
    using DFSDM_CH7WDATR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3). */
    using DFSDM_CH7WDATR_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM channel 7 data input register */
    using DFSDM_CH7DATINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format. */
    using DFSDM_CH7DATINR_INDAT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format. */
    using DFSDM_CH7DATINR_INDAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_CH7DLYR register */
    using DFSDM_CH7DLYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pulses to skip for input data skipping function immediately after writing to this field. Reading of PLSSKP[5:0] returns current value of pulses which will be skipped. If PLSSKP[5:0]=0 then all required data samples were already skipped. Note: User can update PLSSKP[5:0] also when PLSSKP[5:0] is not zero. 0-63: Defines the number of serial input samples that will be skipped. Skipping is applied */
    using DFSDM_CH7DLYR_PLSSKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0CR1 register */
    using DFSDM_FLT0CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLTx enable Data which are cleared by setting DFEN=0: register DFSDM_FLTxISR is set to the reset state register DFSDM_FLTxAWSR is set to the reset state */
    using DFSDM_FLT0CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. (value: 0)
     *          - B_0x1: DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. (value: 1)
     */
        /** @brief DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. */
    constexpr std::uint32_t DFSDM_FLT0CR1_DFEN_B_0x0 = 0;
        /** @brief DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. */
    constexpr std::uint32_t DFSDM_FLT0CR1_DFEN_B_0x1 = 1;

    /** @brief Start a conversion of the injected group of channels This bit is always read as '0'. */
    using DFSDM_FLT0CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect. (value: 0)
     *          - B_0x1: Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect. */
    constexpr std::uint32_t DFSDM_FLT0CR1_JSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT0CR1_JSWSTART_B_0x1 = 1;

    /** @brief Launch an injected conversion synchronously with the DFSDM_FLT0 JSWSTART trigger This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT0CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch an injected conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger (value: 1)
     */
        /** @brief Do not launch an injected conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT0CR1_JSYNC_B_0x0 = 0;
        /** @brief Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger */
    constexpr std::uint32_t DFSDM_FLT0CR1_JSYNC_B_0x1 = 1;

    /** @brief Scanning conversion mode for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Writing JCHG if JSCAN=0 resets the channel selection to the lowest selected channel. */
    using DFSDM_FLT0CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. (value: 0)
     *          - B_0x1: The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. (value: 1)
     */
        /** @brief One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. */
    constexpr std::uint32_t DFSDM_FLT0CR1_JSCAN_B_0x0 = 0;
        /** @brief The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. */
    constexpr std::uint32_t DFSDM_FLT0CR1_JSCAN_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the injected channel group This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT0CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read injected data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read injected data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT0CR1_JDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT0CR1_JDMAEN_B_0x1 = 1;

    /** @brief Trigger signal selection for launching injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Note: synchronous trigger has latency up to one fDFSDMCLK clock cycle (with deterministic jitter), asynchronous trigger has latency 2-3 fDFSDMCLK clock cycles (with jitter up to 1 cycle). DFSDM_FLTx 0x00	dfsdm_jtrg0 0x01	dfsdm_jtrg1 ... 0x1E	dfsdm_jtrg30 0x1F	dfsdm_jtrg31 Refer to . 0x0-0x1F: Trigger inputs selected by the following table (internal or external trigger). */
    using DFSDM_FLT0CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT0CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger detection is disabled (value: 0)
     *          - B_0x1: Each rising edge on the selected trigger makes a request to launch an injected conversion (value: 1)
     *          - B_0x2: Each falling edge on the selected trigger makes a request to launch an injected conversion (value: 2)
     *          - B_0x3: Both rising edges and falling edges on the selected trigger make requests to launch injected conversions (value: 3)
     */
        /** @brief Trigger detection is disabled */
    constexpr std::uint32_t DFSDM_FLT0CR1_JEXTEN_B_0x0 = 0;
        /** @brief Each rising edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT0CR1_JEXTEN_B_0x1 = 1;
        /** @brief Each falling edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT0CR1_JEXTEN_B_0x2 = 2;
        /** @brief Both rising edges and falling edges on the selected trigger make requests to launch injected conversions */
    constexpr std::uint32_t DFSDM_FLT0CR1_JEXTEN_B_0x3 = 3;

    /** @brief Software start of a conversion on the regular channel This bit is always read as '0'. */
    using DFSDM_FLT0CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT0CR1_RSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT0CR1_RSWSTART_B_0x1 = 1;

    /** @brief Continuous mode selection for regular conversions Writing '0' to this bit while a continuous regular conversion is already in progress stops the continuous mode immediately. */
    using DFSDM_FLT0CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The regular channel is converted just once for each conversion request (value: 0)
     *          - B_0x1: The regular channel is converted repeatedly after each conversion request (value: 1)
     */
        /** @brief The regular channel is converted just once for each conversion request */
    constexpr std::uint32_t DFSDM_FLT0CR1_RCONT_B_0x0 = 0;
        /** @brief The regular channel is converted repeatedly after each conversion request */
    constexpr std::uint32_t DFSDM_FLT0CR1_RCONT_B_0x1 = 1;

    /** @brief Launch regular conversion synchronously with DFSDM_FLT0 This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT0CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch a regular conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 (value: 1)
     */
        /** @brief Do not launch a regular conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT0CR1_RSYNC_B_0x0 = 0;
        /** @brief Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT0CR1_RSYNC_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the regular conversion This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT0CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read regular data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read regular data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT0CR1_RDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT0CR1_RDMAEN_B_0x1 = 1;

    /** @brief Regular channel selection ... 7: Channel 7 is selected as the regular channel Writing these bits when RCIP=1 takes effect when the next regular conversion begins. This is especially useful in continuous mode (when RCONT=1). It also affects regular conversions which are pending (due to ongoing injected conversion). */
    using DFSDM_FLT0CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel 0 is selected as the regular channel (value: 0)
     *          - B_0x1: Channel 1 is selected as the regular channel (value: 1)
     */
        /** @brief Channel 0 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT0CR1_RCH_B_0x0 = 0;
        /** @brief Channel 1 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT0CR1_RCH_B_0x1 = 1;

    /** @brief Fast conversion mode selection for regular conversions When converting a regular conversion in continuous mode, having enabled the fast mode causes each conversion (except the first) to execute faster than in standard mode. This bit has no effect on conversions which are not continuous. This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): t = IOSR / fCKIN (... but CNVCNT=0) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input. */
    using DFSDM_FLT0CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast conversion mode disabled (value: 0)
     *          - B_0x1: Fast conversion mode enabled (value: 1)
     */
        /** @brief Fast conversion mode disabled */
    constexpr std::uint32_t DFSDM_FLT0CR1_FAST_B_0x0 = 0;
        /** @brief Fast conversion mode enabled */
    constexpr std::uint32_t DFSDM_FLT0CR1_FAST_B_0x1 = 1;

    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT0CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift (value: 0)
     *          - B_0x1: Analog watchdog on channel transceivers value (after watchdog filter) (value: 1)
     */
        /** @brief Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift */
    constexpr std::uint32_t DFSDM_FLT0CR1_AWFSEL_B_0x0 = 0;
        /** @brief Analog watchdog on channel transceivers value (after watchdog filter) */
    constexpr std::uint32_t DFSDM_FLT0CR1_AWFSEL_B_0x1 = 1;

    /** @brief DFSDM_FLT0CR2 register */
    using DFSDM_FLT0CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable Please see the explanation of JEOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT0CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Injected end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Injected end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_JEOCIE_B_0x0 = 0;
        /** @brief Injected end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_JEOCIE_B_0x1 = 1;

    /** @brief Regular end of conversion interrupt enable Please see the explanation of REOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT0CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Regular end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Regular end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_REOCIE_B_0x0 = 0;
        /** @brief Regular end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_REOCIE_B_0x1 = 1;

    /** @brief Injected data overrun interrupt enable Please see the explanation of JOVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT0CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Injected data overrun interrupt is enabled (value: 1)
     */
        /** @brief Injected data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_JOVRIE_B_0x0 = 0;
        /** @brief Injected data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_JOVRIE_B_0x1 = 1;

    /** @brief Regular data overrun interrupt enable Please see the explanation of ROVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT0CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Regular data overrun interrupt is enabled (value: 1)
     */
        /** @brief Regular data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_ROVRIE_B_0x0 = 0;
        /** @brief Regular data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_ROVRIE_B_0x1 = 1;

    /** @brief Analog watchdog interrupt enable Please see the explanation of AWDF in DFSDM_FLTxISR. */
    using DFSDM_FLT0CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt is disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt is enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_AWDIE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_AWDIE_B_0x1 = 1;

    /** @brief Short-circuit detector interrupt enable Please see the explanation of SCDF[7:0] in DFSDM_FLTxISR. Note: SCDIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT0CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: short-circuit detector interrupt is disabled (value: 0)
     *          - B_0x1: short-circuit detector interrupt is enabled (value: 1)
     */
        /** @brief short-circuit detector interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_SCDIE_B_0x0 = 0;
        /** @brief short-circuit detector interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_SCDIE_B_0x1 = 1;

    /** @brief Clock absence interrupt enable Please see the explanation of CKABF[7:0] in DFSDM_FLTxISR. Note: CKABIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT0CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection of channel input clock absence interrupt is disabled (value: 0)
     *          - B_0x1: Detection of channel input clock absence interrupt is enabled (value: 1)
     */
        /** @brief Detection of channel input clock absence interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_CKABIE_B_0x0 = 0;
        /** @brief Detection of channel input clock absence interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT0CR2_CKABIE_B_0x1 = 1;

    /** @brief Extremes detector channel selection These bits select the input channels to be taken by the Extremes detector. EXCH[y] = 0: Extremes detector does not accept data from channel y EXCH[y] = 1: Extremes detector accepts data from channel y */
    using DFSDM_FLT0CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection These bits select the input channel to be guarded continuously by the analog watchdog. AWDCH[y] = 0: Analog watchdog is disabled on channel y AWDCH[y] = 1: Analog watchdog is enabled on channel y */
    using DFSDM_FLT0CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0ISR register */
    using DFSDM_FLT0ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxJDATAR. */
    using DFSDM_FLT0ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion has completed (value: 0)
     *          - B_0x1: An injected conversion has completed and its data may be read (value: 1)
     */
        /** @brief No injected conversion has completed */
    constexpr std::uint32_t DFSDM_FLT0ISR_JEOCF_B_0x0 = 0;
        /** @brief An injected conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT0ISR_JEOCF_B_0x1 = 1;

    /** @brief End of regular conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxRDATAR. */
    using DFSDM_FLT0ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion has completed (value: 0)
     *          - B_0x1: A regular conversion has completed and its data may be read (value: 1)
     */
        /** @brief No regular conversion has completed */
    constexpr std::uint32_t DFSDM_FLT0ISR_REOCF_B_0x0 = 0;
        /** @brief A regular conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT0ISR_REOCF_B_0x1 = 1;

    /** @brief Injected conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRJOVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT0ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion overrun has occurred (value: 0)
     *          - B_0x1: An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns (value: 1)
     */
        /** @brief No injected conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT0ISR_JOVRF_B_0x0 = 0;
        /** @brief An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT0ISR_JOVRF_B_0x1 = 1;

    /** @brief Regular conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRROVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT0ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion overrun has occurred (value: 0)
     *          - B_0x1: A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns (value: 1)
     */
        /** @brief No regular conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT0ISR_ROVRF_B_0x0 = 0;
        /** @brief A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT0ISR_ROVRF_B_0x1 = 1;

    /** @brief Analog watchdog This bit is set by hardware. It is cleared by software by clearing all source flag bits AWHTF[7:0] and AWLTF[7:0] in DFSDM_FLTxAWSR register (by writing '1' into the clear bits in DFSDM_FLTxAWCFR register). */
    using DFSDM_FLT0ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Analog watchdog event occurred (value: 0)
     *          - B_0x1: The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. (value: 1)
     */
        /** @brief No Analog watchdog event occurred */
    constexpr std::uint32_t DFSDM_FLT0ISR_AWDF_B_0x0 = 0;
        /** @brief The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. */
    constexpr std::uint32_t DFSDM_FLT0ISR_AWDF_B_0x1 = 1;

    /** @brief Injected conversion in progress status A request to start an injected conversion is ignored when JCIP=1. */
    using DFSDM_FLT0ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the injected channel group (neither by software nor by trigger) has been issued (value: 0)
     *          - B_0x1: The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection (value: 1)
     */
        /** @brief No request to convert the injected channel group (neither by software nor by trigger) has been issued */
    constexpr std::uint32_t DFSDM_FLT0ISR_JCIP_B_0x0 = 0;
        /** @brief The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection */
    constexpr std::uint32_t DFSDM_FLT0ISR_JCIP_B_0x1 = 1;

    /** @brief Regular conversion in progress status A request to start a regular conversion is ignored when RCIP=1. */
    using DFSDM_FLT0ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the regular channel has been issued (value: 0)
     *          - B_0x1: The conversion of the regular channel is in progress or a request for a regular conversion is pending (value: 1)
     */
        /** @brief No request to convert the regular channel has been issued */
    constexpr std::uint32_t DFSDM_FLT0ISR_RCIP_B_0x0 = 0;
        /** @brief The conversion of the regular channel is in progress or a request for a regular conversion is pending */
    constexpr std::uint32_t DFSDM_FLT0ISR_RCIP_B_0x1 = 1;

    /** @brief Clock absence flag CKABF[y]=0: Clock signal on channel y is present. CKABF[y]=1: Clock signal on channel y is not present. Given y bit is set by hardware when clock absence is detected on channel y. It is held at CKABF[y]=1 state by hardware when CHEN=0 (see DFSDM_CHyCFGR1 register). It is held at CKABF[y]=1 state by hardware when the transceiver is not yet synchronized.It can be cleared by software using the corresponding CLRCKABF[y] bit in the DFSDM_FLTxICR register. Note: CKABF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT0ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag SDCF[y]=0: No short-circuit detector event occurred on channel y SDCF[y]=1: The short-circuit detector counter reaches, on channel y, the value programmed in the DFSDM_CHyAWSCDR registers This bit is set by hardware. It can be cleared by software using the corresponding CLRSCDF[y] bit in the DFSDM_FLTxICR register. SCDF[y] is cleared also by hardware when CHEN[y] = 0 (given channel is disabled). Note: SCDF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT0ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0ICR register */
    using DFSDM_FLT0ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT0ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT0ICR_CLRJOVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT0ICR_CLRJOVRF_B_0x1 = 1;

    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT0ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT0ICR_CLRROVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT0ICR_CLRROVRF_B_0x1 = 1;

    /** @brief Clear the clock absence flag CLRCKABF[y]=0: Writing '0' has no effect CLRCKABF[y]=1: Writing '1' to position y clears the corresponding CKABF[y] bit in the DFSDM_FLTxISR register. When the transceiver is not yet synchronized, the clock absence flag is set and cannot be cleared by CLRCKABF[y]. Note: CLRCKABF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT0ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag CLRSCDF[y]=0: Writing '0' has no effect CLRSCDF[y]=1: Writing '1' to position y clears the corresponding SCDF[y] bit in the DFSDM_FLTxISR register Note: CLRSCDF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT0ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0JCHGR register */
    using DFSDM_FLT0JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection JCHG[y]=0: channel y is not part of the injected group JCHG[y]=1: channel y is part of the injected group If JSCAN=1, each of the selected channels is converted, one after another. The lowest channel (channel 0, if selected) is converted first and the sequence ends at the highest selected channel. If JSCAN=0, then only one channel is converted from the selected channels, and the channel selection is moved to the next channel. Writing JCHG, if JSCAN=0, resets the channel selection to the lowest selected channel. At least one channel must always be selected for the injected group. Writes causing all JCHG bits to be zero are ignored. */
    using DFSDM_FLT0JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0FCR register */
    using DFSDM_FLT0FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) from Sinc filter will be summed into one output data sample from the integrator. The output data rate from the integrator will be decreased by this number (additional data decimation ratio). This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If IOSR = 0, then the Integrator has no effect (Integrator bypass). 0- 255: The length of the Integrator in the range 1 - 256 (IOSR + 1). Defines how many samples */
    using DFSDM_FLT0FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) number is also the decimation ratio of the output data rate from filter. This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If FOSR = 0, then the filter has no effect (filter bypass). 0 - 1023: Defines the length of the Sinc type filter in the range 1 - 1024 (FOSR = FOSR[9:0] +1). This */
    using DFSDM_FLT0FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order 2: Sinc2 filter type 3: Sinc3 filter type 4: Sinc4 filter type 5: Sinc5 filter type 6-7: Reserved Sincx filter type transfer function: FastSinc filter type transfer function: This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT0FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_FLT0FCR_FORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_FLT0FCR_FORD_B_0x1 = 1;

    /** @brief DFSDM_FLT0JDATAR register */
    using DFSDM_FLT0JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted When each conversion of a channel in the injected group finishes, JDATACH[2:0] is updated to indicate which channel was converted. Thus, JDATA[23:0] holds the data that corresponds to the channel indicated by JDATACH[2:0]. */
    using DFSDM_FLT0JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data When each conversion of a channel in the injected group finishes, its resulting data is stored in this field. The data is valid when JEOCF=1. Reading this register clears the corresponding JEOCF. */
    using DFSDM_FLT0JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0RDATAR register */
    using DFSDM_FLT0RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted When each regular conversion finishes, RDATACH[2:0] is updated to indicate which channel was converted (because regular channel selection RCH[2:0] in DFSDM_FLTxCR1 register can be updated during regular conversion). Thus RDATA[23:0] holds the data that corresponds to the channel indicated by RDATACH[2:0]. */
    using DFSDM_FLT0RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data Regular data in RDATA[23:0] was delayed due to an injected channel trigger during the conversion */
    using DFSDM_FLT0RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data When each regular conversion finishes, its data is stored in this register. The data is valid when REOCF=1. Reading this register clears the corresponding REOCF. */
    using DFSDM_FLT0RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0AWHTR register */
    using DFSDM_FLT0AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event BKAWH[i] = 0: Break i signal is not assigned to an analog watchdog high threshold event BKAWH[i] = 1: Break i signal is assigned to an analog watchdog high threshold event */
    using DFSDM_FLT0AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold These bits are written by software to define the high threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), the higher 16 bits (AWHT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWHT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT0AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0AWLTR register */
    using DFSDM_FLT0AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event BKAWL[i] = 0: Break i signal is not assigned to an analog watchdog low threshold event BKAWL[i] = 1: Break i signal is assigned to an analog watchdog low threshold event */
    using DFSDM_FLT0AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold These bits are written by software to define the low threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), only the higher 16 bits (AWLT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWLT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT0AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0AWSR register */
    using DFSDM_FLT0AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag AWLTF[y]=1 indicates a low threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWLTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT0AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag AWHTF[y]=1 indicates a high threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWHTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT0AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0AWCFR register */
    using DFSDM_FLT0AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag CLRAWLTF[y]=0: Writing '0' has no effect CLRAWLTF[y]=1: Writing '1' to position y clears the corresponding AWLTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT0AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag CLRAWHTF[y]=0: Writing '0' has no effect CLRAWHTF[y]=1: Writing '1' to position y clears the corresponding AWHTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT0AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0EXMAX register */
    using DFSDM_FLT0EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel. These bits contains information about the channel on which the data is stored into EXMAX[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT0EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value These bits are set by hardware and indicate the highest value converted by DFSDM_FLTx. EXMAX[23:0] bits are reset to value (0x800000) by reading of this register. */
    using DFSDM_FLT0EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0EXMIN register */
    using DFSDM_FLT0EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel These bits contain information about the channel on which the data is stored into EXMIN[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT0EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value These bits are set by hardware and indicate the lowest value converted by DFSDM_FLTx. EXMIN[23:0] bits are reset to value (0x7FFFFF) by reading of this register. */
    using DFSDM_FLT0EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT0CNVTIMR register */
    using DFSDM_FLT0CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDMCLK The timer has an input clock from DFSDM clock (system clock fDFSDMCLK). Conversion time measurement is started on each conversion start and stopped when conversion finishes (interval between first and last serial sample). Only in case of filter bypass (FOSR[9:0] = 0) is the conversion time measurement stopped and CNVCNT[27:0] = 0. The counted time is: if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): CNVCNT = 0 (counting is stopped, conversion time: t = IOSR / fCKIN) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input (from internal ADC or from CPU/DMA write) Note: When conversion is interrupted (e.g. by disable/enable selected channel) the timer counts also this interruption time. */
    using DFSDM_FLT0CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1CR1 register */
    using DFSDM_FLT1CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLTx enable Data which are cleared by setting DFEN=0: register DFSDM_FLTxISR is set to the reset state register DFSDM_FLTxAWSR is set to the reset state */
    using DFSDM_FLT1CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. (value: 0)
     *          - B_0x1: DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. (value: 1)
     */
        /** @brief DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. */
    constexpr std::uint32_t DFSDM_FLT1CR1_DFEN_B_0x0 = 0;
        /** @brief DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. */
    constexpr std::uint32_t DFSDM_FLT1CR1_DFEN_B_0x1 = 1;

    /** @brief Start a conversion of the injected group of channels This bit is always read as '0'. */
    using DFSDM_FLT1CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect. (value: 0)
     *          - B_0x1: Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect. */
    constexpr std::uint32_t DFSDM_FLT1CR1_JSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT1CR1_JSWSTART_B_0x1 = 1;

    /** @brief Launch an injected conversion synchronously with the DFSDM_FLT0 JSWSTART trigger This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT1CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch an injected conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger (value: 1)
     */
        /** @brief Do not launch an injected conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT1CR1_JSYNC_B_0x0 = 0;
        /** @brief Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger */
    constexpr std::uint32_t DFSDM_FLT1CR1_JSYNC_B_0x1 = 1;

    /** @brief Scanning conversion mode for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Writing JCHG if JSCAN=0 resets the channel selection to the lowest selected channel. */
    using DFSDM_FLT1CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. (value: 0)
     *          - B_0x1: The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. (value: 1)
     */
        /** @brief One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. */
    constexpr std::uint32_t DFSDM_FLT1CR1_JSCAN_B_0x0 = 0;
        /** @brief The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. */
    constexpr std::uint32_t DFSDM_FLT1CR1_JSCAN_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the injected channel group This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT1CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read injected data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read injected data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT1CR1_JDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT1CR1_JDMAEN_B_0x1 = 1;

    /** @brief Trigger signal selection for launching injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Note: synchronous trigger has latency up to one fDFSDMCLK clock cycle (with deterministic jitter), asynchronous trigger has latency 2-3 fDFSDMCLK clock cycles (with jitter up to 1 cycle). DFSDM_FLTx 0x00	dfsdm_jtrg0 0x01	dfsdm_jtrg1 ... 0x1E	dfsdm_jtrg30 0x1F	dfsdm_jtrg31 Refer to . 0x0-0x1F: Trigger inputs selected by the following table (internal or external trigger). */
    using DFSDM_FLT1CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT1CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger detection is disabled (value: 0)
     *          - B_0x1: Each rising edge on the selected trigger makes a request to launch an injected conversion (value: 1)
     *          - B_0x2: Each falling edge on the selected trigger makes a request to launch an injected conversion (value: 2)
     *          - B_0x3: Both rising edges and falling edges on the selected trigger make requests to launch injected conversions (value: 3)
     */
        /** @brief Trigger detection is disabled */
    constexpr std::uint32_t DFSDM_FLT1CR1_JEXTEN_B_0x0 = 0;
        /** @brief Each rising edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT1CR1_JEXTEN_B_0x1 = 1;
        /** @brief Each falling edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT1CR1_JEXTEN_B_0x2 = 2;
        /** @brief Both rising edges and falling edges on the selected trigger make requests to launch injected conversions */
    constexpr std::uint32_t DFSDM_FLT1CR1_JEXTEN_B_0x3 = 3;

    /** @brief Software start of a conversion on the regular channel This bit is always read as '0'. */
    using DFSDM_FLT1CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT1CR1_RSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT1CR1_RSWSTART_B_0x1 = 1;

    /** @brief Continuous mode selection for regular conversions Writing '0' to this bit while a continuous regular conversion is already in progress stops the continuous mode immediately. */
    using DFSDM_FLT1CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The regular channel is converted just once for each conversion request (value: 0)
     *          - B_0x1: The regular channel is converted repeatedly after each conversion request (value: 1)
     */
        /** @brief The regular channel is converted just once for each conversion request */
    constexpr std::uint32_t DFSDM_FLT1CR1_RCONT_B_0x0 = 0;
        /** @brief The regular channel is converted repeatedly after each conversion request */
    constexpr std::uint32_t DFSDM_FLT1CR1_RCONT_B_0x1 = 1;

    /** @brief Launch regular conversion synchronously with DFSDM_FLT0 This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT1CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch a regular conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 (value: 1)
     */
        /** @brief Do not launch a regular conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT1CR1_RSYNC_B_0x0 = 0;
        /** @brief Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT1CR1_RSYNC_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the regular conversion This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT1CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read regular data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read regular data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT1CR1_RDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT1CR1_RDMAEN_B_0x1 = 1;

    /** @brief Regular channel selection ... 7: Channel 7 is selected as the regular channel Writing these bits when RCIP=1 takes effect when the next regular conversion begins. This is especially useful in continuous mode (when RCONT=1). It also affects regular conversions which are pending (due to ongoing injected conversion). */
    using DFSDM_FLT1CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel 0 is selected as the regular channel (value: 0)
     *          - B_0x1: Channel 1 is selected as the regular channel (value: 1)
     */
        /** @brief Channel 0 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT1CR1_RCH_B_0x0 = 0;
        /** @brief Channel 1 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT1CR1_RCH_B_0x1 = 1;

    /** @brief Fast conversion mode selection for regular conversions When converting a regular conversion in continuous mode, having enabled the fast mode causes each conversion (except the first) to execute faster than in standard mode. This bit has no effect on conversions which are not continuous. This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): t = IOSR / fCKIN (... but CNVCNT=0) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input. */
    using DFSDM_FLT1CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast conversion mode disabled (value: 0)
     *          - B_0x1: Fast conversion mode enabled (value: 1)
     */
        /** @brief Fast conversion mode disabled */
    constexpr std::uint32_t DFSDM_FLT1CR1_FAST_B_0x0 = 0;
        /** @brief Fast conversion mode enabled */
    constexpr std::uint32_t DFSDM_FLT1CR1_FAST_B_0x1 = 1;

    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT1CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift (value: 0)
     *          - B_0x1: Analog watchdog on channel transceivers value (after watchdog filter) (value: 1)
     */
        /** @brief Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift */
    constexpr std::uint32_t DFSDM_FLT1CR1_AWFSEL_B_0x0 = 0;
        /** @brief Analog watchdog on channel transceivers value (after watchdog filter) */
    constexpr std::uint32_t DFSDM_FLT1CR1_AWFSEL_B_0x1 = 1;

    /** @brief DFSDM_FLT1CR2 register */
    using DFSDM_FLT1CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable Please see the explanation of JEOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT1CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Injected end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Injected end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_JEOCIE_B_0x0 = 0;
        /** @brief Injected end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_JEOCIE_B_0x1 = 1;

    /** @brief Regular end of conversion interrupt enable Please see the explanation of REOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT1CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Regular end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Regular end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_REOCIE_B_0x0 = 0;
        /** @brief Regular end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_REOCIE_B_0x1 = 1;

    /** @brief Injected data overrun interrupt enable Please see the explanation of JOVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT1CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Injected data overrun interrupt is enabled (value: 1)
     */
        /** @brief Injected data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_JOVRIE_B_0x0 = 0;
        /** @brief Injected data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_JOVRIE_B_0x1 = 1;

    /** @brief Regular data overrun interrupt enable Please see the explanation of ROVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT1CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Regular data overrun interrupt is enabled (value: 1)
     */
        /** @brief Regular data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_ROVRIE_B_0x0 = 0;
        /** @brief Regular data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_ROVRIE_B_0x1 = 1;

    /** @brief Analog watchdog interrupt enable Please see the explanation of AWDF in DFSDM_FLTxISR. */
    using DFSDM_FLT1CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt is disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt is enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_AWDIE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_AWDIE_B_0x1 = 1;

    /** @brief Short-circuit detector interrupt enable Please see the explanation of SCDF[7:0] in DFSDM_FLTxISR. Note: SCDIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT1CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: short-circuit detector interrupt is disabled (value: 0)
     *          - B_0x1: short-circuit detector interrupt is enabled (value: 1)
     */
        /** @brief short-circuit detector interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_SCDIE_B_0x0 = 0;
        /** @brief short-circuit detector interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_SCDIE_B_0x1 = 1;

    /** @brief Clock absence interrupt enable Please see the explanation of CKABF[7:0] in DFSDM_FLTxISR. Note: CKABIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT1CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection of channel input clock absence interrupt is disabled (value: 0)
     *          - B_0x1: Detection of channel input clock absence interrupt is enabled (value: 1)
     */
        /** @brief Detection of channel input clock absence interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_CKABIE_B_0x0 = 0;
        /** @brief Detection of channel input clock absence interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT1CR2_CKABIE_B_0x1 = 1;

    /** @brief Extremes detector channel selection These bits select the input channels to be taken by the Extremes detector. EXCH[y] = 0: Extremes detector does not accept data from channel y EXCH[y] = 1: Extremes detector accepts data from channel y */
    using DFSDM_FLT1CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection These bits select the input channel to be guarded continuously by the analog watchdog. AWDCH[y] = 0: Analog watchdog is disabled on channel y AWDCH[y] = 1: Analog watchdog is enabled on channel y */
    using DFSDM_FLT1CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1ISR register */
    using DFSDM_FLT1ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxJDATAR. */
    using DFSDM_FLT1ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion has completed (value: 0)
     *          - B_0x1: An injected conversion has completed and its data may be read (value: 1)
     */
        /** @brief No injected conversion has completed */
    constexpr std::uint32_t DFSDM_FLT1ISR_JEOCF_B_0x0 = 0;
        /** @brief An injected conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT1ISR_JEOCF_B_0x1 = 1;

    /** @brief End of regular conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxRDATAR. */
    using DFSDM_FLT1ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion has completed (value: 0)
     *          - B_0x1: A regular conversion has completed and its data may be read (value: 1)
     */
        /** @brief No regular conversion has completed */
    constexpr std::uint32_t DFSDM_FLT1ISR_REOCF_B_0x0 = 0;
        /** @brief A regular conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT1ISR_REOCF_B_0x1 = 1;

    /** @brief Injected conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRJOVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT1ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion overrun has occurred (value: 0)
     *          - B_0x1: An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns (value: 1)
     */
        /** @brief No injected conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT1ISR_JOVRF_B_0x0 = 0;
        /** @brief An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT1ISR_JOVRF_B_0x1 = 1;

    /** @brief Regular conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRROVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT1ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion overrun has occurred (value: 0)
     *          - B_0x1: A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns (value: 1)
     */
        /** @brief No regular conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT1ISR_ROVRF_B_0x0 = 0;
        /** @brief A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT1ISR_ROVRF_B_0x1 = 1;

    /** @brief Analog watchdog This bit is set by hardware. It is cleared by software by clearing all source flag bits AWHTF[7:0] and AWLTF[7:0] in DFSDM_FLTxAWSR register (by writing '1' into the clear bits in DFSDM_FLTxAWCFR register). */
    using DFSDM_FLT1ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Analog watchdog event occurred (value: 0)
     *          - B_0x1: The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. (value: 1)
     */
        /** @brief No Analog watchdog event occurred */
    constexpr std::uint32_t DFSDM_FLT1ISR_AWDF_B_0x0 = 0;
        /** @brief The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. */
    constexpr std::uint32_t DFSDM_FLT1ISR_AWDF_B_0x1 = 1;

    /** @brief Injected conversion in progress status A request to start an injected conversion is ignored when JCIP=1. */
    using DFSDM_FLT1ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the injected channel group (neither by software nor by trigger) has been issued (value: 0)
     *          - B_0x1: The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection (value: 1)
     */
        /** @brief No request to convert the injected channel group (neither by software nor by trigger) has been issued */
    constexpr std::uint32_t DFSDM_FLT1ISR_JCIP_B_0x0 = 0;
        /** @brief The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection */
    constexpr std::uint32_t DFSDM_FLT1ISR_JCIP_B_0x1 = 1;

    /** @brief Regular conversion in progress status A request to start a regular conversion is ignored when RCIP=1. */
    using DFSDM_FLT1ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the regular channel has been issued (value: 0)
     *          - B_0x1: The conversion of the regular channel is in progress or a request for a regular conversion is pending (value: 1)
     */
        /** @brief No request to convert the regular channel has been issued */
    constexpr std::uint32_t DFSDM_FLT1ISR_RCIP_B_0x0 = 0;
        /** @brief The conversion of the regular channel is in progress or a request for a regular conversion is pending */
    constexpr std::uint32_t DFSDM_FLT1ISR_RCIP_B_0x1 = 1;

    /** @brief Clock absence flag CKABF[y]=0: Clock signal on channel y is present. CKABF[y]=1: Clock signal on channel y is not present. Given y bit is set by hardware when clock absence is detected on channel y. It is held at CKABF[y]=1 state by hardware when CHEN=0 (see DFSDM_CHyCFGR1 register). It is held at CKABF[y]=1 state by hardware when the transceiver is not yet synchronized.It can be cleared by software using the corresponding CLRCKABF[y] bit in the DFSDM_FLTxICR register. Note: CKABF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT1ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag SDCF[y]=0: No short-circuit detector event occurred on channel y SDCF[y]=1: The short-circuit detector counter reaches, on channel y, the value programmed in the DFSDM_CHyAWSCDR registers This bit is set by hardware. It can be cleared by software using the corresponding CLRSCDF[y] bit in the DFSDM_FLTxICR register. SCDF[y] is cleared also by hardware when CHEN[y] = 0 (given channel is disabled). Note: SCDF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT1ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1ICR register */
    using DFSDM_FLT1ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT1ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT1ICR_CLRJOVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT1ICR_CLRJOVRF_B_0x1 = 1;

    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT1ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT1ICR_CLRROVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT1ICR_CLRROVRF_B_0x1 = 1;

    /** @brief Clear the clock absence flag CLRCKABF[y]=0: Writing '0' has no effect CLRCKABF[y]=1: Writing '1' to position y clears the corresponding CKABF[y] bit in the DFSDM_FLTxISR register. When the transceiver is not yet synchronized, the clock absence flag is set and cannot be cleared by CLRCKABF[y]. Note: CLRCKABF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT1ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag CLRSCDF[y]=0: Writing '0' has no effect CLRSCDF[y]=1: Writing '1' to position y clears the corresponding SCDF[y] bit in the DFSDM_FLTxISR register Note: CLRSCDF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT1ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1JCHGR register */
    using DFSDM_FLT1JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection JCHG[y]=0: channel y is not part of the injected group JCHG[y]=1: channel y is part of the injected group If JSCAN=1, each of the selected channels is converted, one after another. The lowest channel (channel 0, if selected) is converted first and the sequence ends at the highest selected channel. If JSCAN=0, then only one channel is converted from the selected channels, and the channel selection is moved to the next channel. Writing JCHG, if JSCAN=0, resets the channel selection to the lowest selected channel. At least one channel must always be selected for the injected group. Writes causing all JCHG bits to be zero are ignored. */
    using DFSDM_FLT1JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1FCR register */
    using DFSDM_FLT1FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) from Sinc filter will be summed into one output data sample from the integrator. The output data rate from the integrator will be decreased by this number (additional data decimation ratio). This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If IOSR = 0, then the Integrator has no effect (Integrator bypass). 0- 255: The length of the Integrator in the range 1 - 256 (IOSR + 1). Defines how many samples */
    using DFSDM_FLT1FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) number is also the decimation ratio of the output data rate from filter. This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If FOSR = 0, then the filter has no effect (filter bypass). 0 - 1023: Defines the length of the Sinc type filter in the range 1 - 1024 (FOSR = FOSR[9:0] +1). This */
    using DFSDM_FLT1FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order 2: Sinc2 filter type 3: Sinc3 filter type 4: Sinc4 filter type 5: Sinc5 filter type 6-7: Reserved Sincx filter type transfer function: FastSinc filter type transfer function: This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT1FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_FLT1FCR_FORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_FLT1FCR_FORD_B_0x1 = 1;

    /** @brief DFSDM_FLT1JDATAR register */
    using DFSDM_FLT1JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted When each conversion of a channel in the injected group finishes, JDATACH[2:0] is updated to indicate which channel was converted. Thus, JDATA[23:0] holds the data that corresponds to the channel indicated by JDATACH[2:0]. */
    using DFSDM_FLT1JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data When each conversion of a channel in the injected group finishes, its resulting data is stored in this field. The data is valid when JEOCF=1. Reading this register clears the corresponding JEOCF. */
    using DFSDM_FLT1JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1RDATAR register */
    using DFSDM_FLT1RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted When each regular conversion finishes, RDATACH[2:0] is updated to indicate which channel was converted (because regular channel selection RCH[2:0] in DFSDM_FLTxCR1 register can be updated during regular conversion). Thus RDATA[23:0] holds the data that corresponds to the channel indicated by RDATACH[2:0]. */
    using DFSDM_FLT1RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data Regular data in RDATA[23:0] was delayed due to an injected channel trigger during the conversion */
    using DFSDM_FLT1RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data When each regular conversion finishes, its data is stored in this register. The data is valid when REOCF=1. Reading this register clears the corresponding REOCF. */
    using DFSDM_FLT1RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1AWHTR register */
    using DFSDM_FLT1AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event BKAWH[i] = 0: Break i signal is not assigned to an analog watchdog high threshold event BKAWH[i] = 1: Break i signal is assigned to an analog watchdog high threshold event */
    using DFSDM_FLT1AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold These bits are written by software to define the high threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), the higher 16 bits (AWHT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWHT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT1AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1AWLTR register */
    using DFSDM_FLT1AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event BKAWL[i] = 0: Break i signal is not assigned to an analog watchdog low threshold event BKAWL[i] = 1: Break i signal is assigned to an analog watchdog low threshold event */
    using DFSDM_FLT1AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold These bits are written by software to define the low threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), only the higher 16 bits (AWLT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWLT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT1AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1AWSR register */
    using DFSDM_FLT1AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag AWLTF[y]=1 indicates a low threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWLTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT1AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag AWHTF[y]=1 indicates a high threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWHTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT1AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1AWCFR register */
    using DFSDM_FLT1AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag CLRAWLTF[y]=0: Writing '0' has no effect CLRAWLTF[y]=1: Writing '1' to position y clears the corresponding AWLTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT1AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag CLRAWHTF[y]=0: Writing '0' has no effect CLRAWHTF[y]=1: Writing '1' to position y clears the corresponding AWHTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT1AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1EXMAX register */
    using DFSDM_FLT1EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel. These bits contains information about the channel on which the data is stored into EXMAX[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT1EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value These bits are set by hardware and indicate the highest value converted by DFSDM_FLTx. EXMAX[23:0] bits are reset to value (0x800000) by reading of this register. */
    using DFSDM_FLT1EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1EXMIN register */
    using DFSDM_FLT1EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel These bits contain information about the channel on which the data is stored into EXMIN[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT1EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value These bits are set by hardware and indicate the lowest value converted by DFSDM_FLTx. EXMIN[23:0] bits are reset to value (0x7FFFFF) by reading of this register. */
    using DFSDM_FLT1EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT1CNVTIMR register */
    using DFSDM_FLT1CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDMCLK The timer has an input clock from DFSDM clock (system clock fDFSDMCLK). Conversion time measurement is started on each conversion start and stopped when conversion finishes (interval between first and last serial sample). Only in case of filter bypass (FOSR[9:0] = 0) is the conversion time measurement stopped and CNVCNT[27:0] = 0. The counted time is: if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): CNVCNT = 0 (counting is stopped, conversion time: t = IOSR / fCKIN) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input (from internal ADC or from CPU/DMA write) Note: When conversion is interrupted (e.g. by disable/enable selected channel) the timer counts also this interruption time. */
    using DFSDM_FLT1CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2CR1 register */
    using DFSDM_FLT2CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLTx enable Data which are cleared by setting DFEN=0: register DFSDM_FLTxISR is set to the reset state register DFSDM_FLTxAWSR is set to the reset state */
    using DFSDM_FLT2CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. (value: 0)
     *          - B_0x1: DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. (value: 1)
     */
        /** @brief DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. */
    constexpr std::uint32_t DFSDM_FLT2CR1_DFEN_B_0x0 = 0;
        /** @brief DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. */
    constexpr std::uint32_t DFSDM_FLT2CR1_DFEN_B_0x1 = 1;

    /** @brief Start a conversion of the injected group of channels This bit is always read as '0'. */
    using DFSDM_FLT2CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect. (value: 0)
     *          - B_0x1: Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect. */
    constexpr std::uint32_t DFSDM_FLT2CR1_JSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT2CR1_JSWSTART_B_0x1 = 1;

    /** @brief Launch an injected conversion synchronously with the DFSDM_FLT0 JSWSTART trigger This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT2CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch an injected conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger (value: 1)
     */
        /** @brief Do not launch an injected conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT2CR1_JSYNC_B_0x0 = 0;
        /** @brief Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger */
    constexpr std::uint32_t DFSDM_FLT2CR1_JSYNC_B_0x1 = 1;

    /** @brief Scanning conversion mode for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Writing JCHG if JSCAN=0 resets the channel selection to the lowest selected channel. */
    using DFSDM_FLT2CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. (value: 0)
     *          - B_0x1: The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. (value: 1)
     */
        /** @brief One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. */
    constexpr std::uint32_t DFSDM_FLT2CR1_JSCAN_B_0x0 = 0;
        /** @brief The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. */
    constexpr std::uint32_t DFSDM_FLT2CR1_JSCAN_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the injected channel group This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT2CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read injected data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read injected data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT2CR1_JDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT2CR1_JDMAEN_B_0x1 = 1;

    /** @brief Trigger signal selection for launching injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Note: synchronous trigger has latency up to one fDFSDMCLK clock cycle (with deterministic jitter), asynchronous trigger has latency 2-3 fDFSDMCLK clock cycles (with jitter up to 1 cycle). DFSDM_FLTx 0x00	dfsdm_jtrg0 0x01	dfsdm_jtrg1 ... 0x1E	dfsdm_jtrg30 0x1F	dfsdm_jtrg31 Refer to . 0x0-0x1F: Trigger inputs selected by the following table (internal or external trigger). */
    using DFSDM_FLT2CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT2CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger detection is disabled (value: 0)
     *          - B_0x1: Each rising edge on the selected trigger makes a request to launch an injected conversion (value: 1)
     *          - B_0x2: Each falling edge on the selected trigger makes a request to launch an injected conversion (value: 2)
     *          - B_0x3: Both rising edges and falling edges on the selected trigger make requests to launch injected conversions (value: 3)
     */
        /** @brief Trigger detection is disabled */
    constexpr std::uint32_t DFSDM_FLT2CR1_JEXTEN_B_0x0 = 0;
        /** @brief Each rising edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT2CR1_JEXTEN_B_0x1 = 1;
        /** @brief Each falling edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT2CR1_JEXTEN_B_0x2 = 2;
        /** @brief Both rising edges and falling edges on the selected trigger make requests to launch injected conversions */
    constexpr std::uint32_t DFSDM_FLT2CR1_JEXTEN_B_0x3 = 3;

    /** @brief Software start of a conversion on the regular channel This bit is always read as '0'. */
    using DFSDM_FLT2CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT2CR1_RSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT2CR1_RSWSTART_B_0x1 = 1;

    /** @brief Continuous mode selection for regular conversions Writing '0' to this bit while a continuous regular conversion is already in progress stops the continuous mode immediately. */
    using DFSDM_FLT2CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The regular channel is converted just once for each conversion request (value: 0)
     *          - B_0x1: The regular channel is converted repeatedly after each conversion request (value: 1)
     */
        /** @brief The regular channel is converted just once for each conversion request */
    constexpr std::uint32_t DFSDM_FLT2CR1_RCONT_B_0x0 = 0;
        /** @brief The regular channel is converted repeatedly after each conversion request */
    constexpr std::uint32_t DFSDM_FLT2CR1_RCONT_B_0x1 = 1;

    /** @brief Launch regular conversion synchronously with DFSDM_FLT0 This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT2CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch a regular conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 (value: 1)
     */
        /** @brief Do not launch a regular conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT2CR1_RSYNC_B_0x0 = 0;
        /** @brief Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT2CR1_RSYNC_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the regular conversion This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT2CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read regular data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read regular data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT2CR1_RDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT2CR1_RDMAEN_B_0x1 = 1;

    /** @brief Regular channel selection ... 7: Channel 7 is selected as the regular channel Writing these bits when RCIP=1 takes effect when the next regular conversion begins. This is especially useful in continuous mode (when RCONT=1). It also affects regular conversions which are pending (due to ongoing injected conversion). */
    using DFSDM_FLT2CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel 0 is selected as the regular channel (value: 0)
     *          - B_0x1: Channel 1 is selected as the regular channel (value: 1)
     */
        /** @brief Channel 0 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT2CR1_RCH_B_0x0 = 0;
        /** @brief Channel 1 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT2CR1_RCH_B_0x1 = 1;

    /** @brief Fast conversion mode selection for regular conversions When converting a regular conversion in continuous mode, having enabled the fast mode causes each conversion (except the first) to execute faster than in standard mode. This bit has no effect on conversions which are not continuous. This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): t = IOSR / fCKIN (... but CNVCNT=0) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input. */
    using DFSDM_FLT2CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast conversion mode disabled (value: 0)
     *          - B_0x1: Fast conversion mode enabled (value: 1)
     */
        /** @brief Fast conversion mode disabled */
    constexpr std::uint32_t DFSDM_FLT2CR1_FAST_B_0x0 = 0;
        /** @brief Fast conversion mode enabled */
    constexpr std::uint32_t DFSDM_FLT2CR1_FAST_B_0x1 = 1;

    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT2CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift (value: 0)
     *          - B_0x1: Analog watchdog on channel transceivers value (after watchdog filter) (value: 1)
     */
        /** @brief Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift */
    constexpr std::uint32_t DFSDM_FLT2CR1_AWFSEL_B_0x0 = 0;
        /** @brief Analog watchdog on channel transceivers value (after watchdog filter) */
    constexpr std::uint32_t DFSDM_FLT2CR1_AWFSEL_B_0x1 = 1;

    /** @brief DFSDM_FLT2CR2 register */
    using DFSDM_FLT2CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable Please see the explanation of JEOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT2CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Injected end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Injected end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_JEOCIE_B_0x0 = 0;
        /** @brief Injected end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_JEOCIE_B_0x1 = 1;

    /** @brief Regular end of conversion interrupt enable Please see the explanation of REOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT2CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Regular end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Regular end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_REOCIE_B_0x0 = 0;
        /** @brief Regular end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_REOCIE_B_0x1 = 1;

    /** @brief Injected data overrun interrupt enable Please see the explanation of JOVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT2CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Injected data overrun interrupt is enabled (value: 1)
     */
        /** @brief Injected data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_JOVRIE_B_0x0 = 0;
        /** @brief Injected data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_JOVRIE_B_0x1 = 1;

    /** @brief Regular data overrun interrupt enable Please see the explanation of ROVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT2CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Regular data overrun interrupt is enabled (value: 1)
     */
        /** @brief Regular data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_ROVRIE_B_0x0 = 0;
        /** @brief Regular data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_ROVRIE_B_0x1 = 1;

    /** @brief Analog watchdog interrupt enable Please see the explanation of AWDF in DFSDM_FLTxISR. */
    using DFSDM_FLT2CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt is disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt is enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_AWDIE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_AWDIE_B_0x1 = 1;

    /** @brief Short-circuit detector interrupt enable Please see the explanation of SCDF[7:0] in DFSDM_FLTxISR. Note: SCDIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT2CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: short-circuit detector interrupt is disabled (value: 0)
     *          - B_0x1: short-circuit detector interrupt is enabled (value: 1)
     */
        /** @brief short-circuit detector interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_SCDIE_B_0x0 = 0;
        /** @brief short-circuit detector interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_SCDIE_B_0x1 = 1;

    /** @brief Clock absence interrupt enable Please see the explanation of CKABF[7:0] in DFSDM_FLTxISR. Note: CKABIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT2CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection of channel input clock absence interrupt is disabled (value: 0)
     *          - B_0x1: Detection of channel input clock absence interrupt is enabled (value: 1)
     */
        /** @brief Detection of channel input clock absence interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_CKABIE_B_0x0 = 0;
        /** @brief Detection of channel input clock absence interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT2CR2_CKABIE_B_0x1 = 1;

    /** @brief Extremes detector channel selection These bits select the input channels to be taken by the Extremes detector. EXCH[y] = 0: Extremes detector does not accept data from channel y EXCH[y] = 1: Extremes detector accepts data from channel y */
    using DFSDM_FLT2CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection These bits select the input channel to be guarded continuously by the analog watchdog. AWDCH[y] = 0: Analog watchdog is disabled on channel y AWDCH[y] = 1: Analog watchdog is enabled on channel y */
    using DFSDM_FLT2CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2ISR register */
    using DFSDM_FLT2ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxJDATAR. */
    using DFSDM_FLT2ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion has completed (value: 0)
     *          - B_0x1: An injected conversion has completed and its data may be read (value: 1)
     */
        /** @brief No injected conversion has completed */
    constexpr std::uint32_t DFSDM_FLT2ISR_JEOCF_B_0x0 = 0;
        /** @brief An injected conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT2ISR_JEOCF_B_0x1 = 1;

    /** @brief End of regular conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxRDATAR. */
    using DFSDM_FLT2ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion has completed (value: 0)
     *          - B_0x1: A regular conversion has completed and its data may be read (value: 1)
     */
        /** @brief No regular conversion has completed */
    constexpr std::uint32_t DFSDM_FLT2ISR_REOCF_B_0x0 = 0;
        /** @brief A regular conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT2ISR_REOCF_B_0x1 = 1;

    /** @brief Injected conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRJOVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT2ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion overrun has occurred (value: 0)
     *          - B_0x1: An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns (value: 1)
     */
        /** @brief No injected conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT2ISR_JOVRF_B_0x0 = 0;
        /** @brief An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT2ISR_JOVRF_B_0x1 = 1;

    /** @brief Regular conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRROVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT2ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion overrun has occurred (value: 0)
     *          - B_0x1: A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns (value: 1)
     */
        /** @brief No regular conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT2ISR_ROVRF_B_0x0 = 0;
        /** @brief A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT2ISR_ROVRF_B_0x1 = 1;

    /** @brief Analog watchdog This bit is set by hardware. It is cleared by software by clearing all source flag bits AWHTF[7:0] and AWLTF[7:0] in DFSDM_FLTxAWSR register (by writing '1' into the clear bits in DFSDM_FLTxAWCFR register). */
    using DFSDM_FLT2ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Analog watchdog event occurred (value: 0)
     *          - B_0x1: The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. (value: 1)
     */
        /** @brief No Analog watchdog event occurred */
    constexpr std::uint32_t DFSDM_FLT2ISR_AWDF_B_0x0 = 0;
        /** @brief The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. */
    constexpr std::uint32_t DFSDM_FLT2ISR_AWDF_B_0x1 = 1;

    /** @brief Injected conversion in progress status A request to start an injected conversion is ignored when JCIP=1. */
    using DFSDM_FLT2ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the injected channel group (neither by software nor by trigger) has been issued (value: 0)
     *          - B_0x1: The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection (value: 1)
     */
        /** @brief No request to convert the injected channel group (neither by software nor by trigger) has been issued */
    constexpr std::uint32_t DFSDM_FLT2ISR_JCIP_B_0x0 = 0;
        /** @brief The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection */
    constexpr std::uint32_t DFSDM_FLT2ISR_JCIP_B_0x1 = 1;

    /** @brief Regular conversion in progress status A request to start a regular conversion is ignored when RCIP=1. */
    using DFSDM_FLT2ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the regular channel has been issued (value: 0)
     *          - B_0x1: The conversion of the regular channel is in progress or a request for a regular conversion is pending (value: 1)
     */
        /** @brief No request to convert the regular channel has been issued */
    constexpr std::uint32_t DFSDM_FLT2ISR_RCIP_B_0x0 = 0;
        /** @brief The conversion of the regular channel is in progress or a request for a regular conversion is pending */
    constexpr std::uint32_t DFSDM_FLT2ISR_RCIP_B_0x1 = 1;

    /** @brief Clock absence flag CKABF[y]=0: Clock signal on channel y is present. CKABF[y]=1: Clock signal on channel y is not present. Given y bit is set by hardware when clock absence is detected on channel y. It is held at CKABF[y]=1 state by hardware when CHEN=0 (see DFSDM_CHyCFGR1 register). It is held at CKABF[y]=1 state by hardware when the transceiver is not yet synchronized.It can be cleared by software using the corresponding CLRCKABF[y] bit in the DFSDM_FLTxICR register. Note: CKABF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT2ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag SDCF[y]=0: No short-circuit detector event occurred on channel y SDCF[y]=1: The short-circuit detector counter reaches, on channel y, the value programmed in the DFSDM_CHyAWSCDR registers This bit is set by hardware. It can be cleared by software using the corresponding CLRSCDF[y] bit in the DFSDM_FLTxICR register. SCDF[y] is cleared also by hardware when CHEN[y] = 0 (given channel is disabled). Note: SCDF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT2ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2ICR register */
    using DFSDM_FLT2ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT2ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT2ICR_CLRJOVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT2ICR_CLRJOVRF_B_0x1 = 1;

    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT2ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT2ICR_CLRROVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT2ICR_CLRROVRF_B_0x1 = 1;

    /** @brief Clear the clock absence flag CLRCKABF[y]=0: Writing '0' has no effect CLRCKABF[y]=1: Writing '1' to position y clears the corresponding CKABF[y] bit in the DFSDM_FLTxISR register. When the transceiver is not yet synchronized, the clock absence flag is set and cannot be cleared by CLRCKABF[y]. Note: CLRCKABF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT2ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag CLRSCDF[y]=0: Writing '0' has no effect CLRSCDF[y]=1: Writing '1' to position y clears the corresponding SCDF[y] bit in the DFSDM_FLTxISR register Note: CLRSCDF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT2ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2JCHGR register */
    using DFSDM_FLT2JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection JCHG[y]=0: channel y is not part of the injected group JCHG[y]=1: channel y is part of the injected group If JSCAN=1, each of the selected channels is converted, one after another. The lowest channel (channel 0, if selected) is converted first and the sequence ends at the highest selected channel. If JSCAN=0, then only one channel is converted from the selected channels, and the channel selection is moved to the next channel. Writing JCHG, if JSCAN=0, resets the channel selection to the lowest selected channel. At least one channel must always be selected for the injected group. Writes causing all JCHG bits to be zero are ignored. */
    using DFSDM_FLT2JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2FCR register */
    using DFSDM_FLT2FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) from Sinc filter will be summed into one output data sample from the integrator. The output data rate from the integrator will be decreased by this number (additional data decimation ratio). This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If IOSR = 0, then the Integrator has no effect (Integrator bypass). 0- 255: The length of the Integrator in the range 1 - 256 (IOSR + 1). Defines how many samples */
    using DFSDM_FLT2FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) number is also the decimation ratio of the output data rate from filter. This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If FOSR = 0, then the filter has no effect (filter bypass). 0 - 1023: Defines the length of the Sinc type filter in the range 1 - 1024 (FOSR = FOSR[9:0] +1). This */
    using DFSDM_FLT2FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order 2: Sinc2 filter type 3: Sinc3 filter type 4: Sinc4 filter type 5: Sinc5 filter type 6-7: Reserved Sincx filter type transfer function: FastSinc filter type transfer function: This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT2FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_FLT2FCR_FORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_FLT2FCR_FORD_B_0x1 = 1;

    /** @brief DFSDM_FLT2JDATAR register */
    using DFSDM_FLT2JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted When each conversion of a channel in the injected group finishes, JDATACH[2:0] is updated to indicate which channel was converted. Thus, JDATA[23:0] holds the data that corresponds to the channel indicated by JDATACH[2:0]. */
    using DFSDM_FLT2JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data When each conversion of a channel in the injected group finishes, its resulting data is stored in this field. The data is valid when JEOCF=1. Reading this register clears the corresponding JEOCF. */
    using DFSDM_FLT2JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2RDATAR register */
    using DFSDM_FLT2RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted When each regular conversion finishes, RDATACH[2:0] is updated to indicate which channel was converted (because regular channel selection RCH[2:0] in DFSDM_FLTxCR1 register can be updated during regular conversion). Thus RDATA[23:0] holds the data that corresponds to the channel indicated by RDATACH[2:0]. */
    using DFSDM_FLT2RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data Regular data in RDATA[23:0] was delayed due to an injected channel trigger during the conversion */
    using DFSDM_FLT2RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data When each regular conversion finishes, its data is stored in this register. The data is valid when REOCF=1. Reading this register clears the corresponding REOCF. */
    using DFSDM_FLT2RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2AWHTR register */
    using DFSDM_FLT2AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event BKAWH[i] = 0: Break i signal is not assigned to an analog watchdog high threshold event BKAWH[i] = 1: Break i signal is assigned to an analog watchdog high threshold event */
    using DFSDM_FLT2AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold These bits are written by software to define the high threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), the higher 16 bits (AWHT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWHT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT2AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2AWLTR register */
    using DFSDM_FLT2AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event BKAWL[i] = 0: Break i signal is not assigned to an analog watchdog low threshold event BKAWL[i] = 1: Break i signal is assigned to an analog watchdog low threshold event */
    using DFSDM_FLT2AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold These bits are written by software to define the low threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), only the higher 16 bits (AWLT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWLT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT2AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2AWSR register */
    using DFSDM_FLT2AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag AWLTF[y]=1 indicates a low threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWLTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT2AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag AWHTF[y]=1 indicates a high threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWHTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT2AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2AWCFR register */
    using DFSDM_FLT2AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag CLRAWLTF[y]=0: Writing '0' has no effect CLRAWLTF[y]=1: Writing '1' to position y clears the corresponding AWLTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT2AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag CLRAWHTF[y]=0: Writing '0' has no effect CLRAWHTF[y]=1: Writing '1' to position y clears the corresponding AWHTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT2AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2EXMAX register */
    using DFSDM_FLT2EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel. These bits contains information about the channel on which the data is stored into EXMAX[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT2EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value These bits are set by hardware and indicate the highest value converted by DFSDM_FLTx. EXMAX[23:0] bits are reset to value (0x800000) by reading of this register. */
    using DFSDM_FLT2EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2EXMIN register */
    using DFSDM_FLT2EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel These bits contain information about the channel on which the data is stored into EXMIN[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT2EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value These bits are set by hardware and indicate the lowest value converted by DFSDM_FLTx. EXMIN[23:0] bits are reset to value (0x7FFFFF) by reading of this register. */
    using DFSDM_FLT2EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT2CNVTIMR register */
    using DFSDM_FLT2CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDMCLK The timer has an input clock from DFSDM clock (system clock fDFSDMCLK). Conversion time measurement is started on each conversion start and stopped when conversion finishes (interval between first and last serial sample). Only in case of filter bypass (FOSR[9:0] = 0) is the conversion time measurement stopped and CNVCNT[27:0] = 0. The counted time is: if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): CNVCNT = 0 (counting is stopped, conversion time: t = IOSR / fCKIN) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input (from internal ADC or from CPU/DMA write) Note: When conversion is interrupted (e.g. by disable/enable selected channel) the timer counts also this interruption time. */
    using DFSDM_FLT2CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3CR1 register */
    using DFSDM_FLT3CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLTx enable Data which are cleared by setting DFEN=0: register DFSDM_FLTxISR is set to the reset state register DFSDM_FLTxAWSR is set to the reset state */
    using DFSDM_FLT3CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. (value: 0)
     *          - B_0x1: DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. (value: 1)
     */
        /** @brief DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. */
    constexpr std::uint32_t DFSDM_FLT3CR1_DFEN_B_0x0 = 0;
        /** @brief DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. */
    constexpr std::uint32_t DFSDM_FLT3CR1_DFEN_B_0x1 = 1;

    /** @brief Start a conversion of the injected group of channels This bit is always read as '0'. */
    using DFSDM_FLT3CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect. (value: 0)
     *          - B_0x1: Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect. */
    constexpr std::uint32_t DFSDM_FLT3CR1_JSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT3CR1_JSWSTART_B_0x1 = 1;

    /** @brief Launch an injected conversion synchronously with the DFSDM_FLT0 JSWSTART trigger This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT3CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch an injected conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger (value: 1)
     */
        /** @brief Do not launch an injected conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT3CR1_JSYNC_B_0x0 = 0;
        /** @brief Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger */
    constexpr std::uint32_t DFSDM_FLT3CR1_JSYNC_B_0x1 = 1;

    /** @brief Scanning conversion mode for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Writing JCHG if JSCAN=0 resets the channel selection to the lowest selected channel. */
    using DFSDM_FLT3CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. (value: 0)
     *          - B_0x1: The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. (value: 1)
     */
        /** @brief One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. */
    constexpr std::uint32_t DFSDM_FLT3CR1_JSCAN_B_0x0 = 0;
        /** @brief The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. */
    constexpr std::uint32_t DFSDM_FLT3CR1_JSCAN_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the injected channel group This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT3CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read injected data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read injected data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT3CR1_JDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT3CR1_JDMAEN_B_0x1 = 1;

    /** @brief Trigger signal selection for launching injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Note: synchronous trigger has latency up to one fDFSDMCLK clock cycle (with deterministic jitter), asynchronous trigger has latency 2-3 fDFSDMCLK clock cycles (with jitter up to 1 cycle). DFSDM_FLTx 0x00	dfsdm_jtrg0 0x01	dfsdm_jtrg1 ... 0x1E	dfsdm_jtrg30 0x1F	dfsdm_jtrg31 Refer to . 0x0-0x1F: Trigger inputs selected by the following table (internal or external trigger). */
    using DFSDM_FLT3CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT3CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger detection is disabled (value: 0)
     *          - B_0x1: Each rising edge on the selected trigger makes a request to launch an injected conversion (value: 1)
     *          - B_0x2: Each falling edge on the selected trigger makes a request to launch an injected conversion (value: 2)
     *          - B_0x3: Both rising edges and falling edges on the selected trigger make requests to launch injected conversions (value: 3)
     */
        /** @brief Trigger detection is disabled */
    constexpr std::uint32_t DFSDM_FLT3CR1_JEXTEN_B_0x0 = 0;
        /** @brief Each rising edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT3CR1_JEXTEN_B_0x1 = 1;
        /** @brief Each falling edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT3CR1_JEXTEN_B_0x2 = 2;
        /** @brief Both rising edges and falling edges on the selected trigger make requests to launch injected conversions */
    constexpr std::uint32_t DFSDM_FLT3CR1_JEXTEN_B_0x3 = 3;

    /** @brief Software start of a conversion on the regular channel This bit is always read as '0'. */
    using DFSDM_FLT3CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT3CR1_RSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT3CR1_RSWSTART_B_0x1 = 1;

    /** @brief Continuous mode selection for regular conversions Writing '0' to this bit while a continuous regular conversion is already in progress stops the continuous mode immediately. */
    using DFSDM_FLT3CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The regular channel is converted just once for each conversion request (value: 0)
     *          - B_0x1: The regular channel is converted repeatedly after each conversion request (value: 1)
     */
        /** @brief The regular channel is converted just once for each conversion request */
    constexpr std::uint32_t DFSDM_FLT3CR1_RCONT_B_0x0 = 0;
        /** @brief The regular channel is converted repeatedly after each conversion request */
    constexpr std::uint32_t DFSDM_FLT3CR1_RCONT_B_0x1 = 1;

    /** @brief Launch regular conversion synchronously with DFSDM_FLT0 This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT3CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch a regular conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 (value: 1)
     */
        /** @brief Do not launch a regular conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT3CR1_RSYNC_B_0x0 = 0;
        /** @brief Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT3CR1_RSYNC_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the regular conversion This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT3CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read regular data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read regular data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT3CR1_RDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT3CR1_RDMAEN_B_0x1 = 1;

    /** @brief Regular channel selection ... 7: Channel 7 is selected as the regular channel Writing these bits when RCIP=1 takes effect when the next regular conversion begins. This is especially useful in continuous mode (when RCONT=1). It also affects regular conversions which are pending (due to ongoing injected conversion). */
    using DFSDM_FLT3CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel 0 is selected as the regular channel (value: 0)
     *          - B_0x1: Channel 1 is selected as the regular channel (value: 1)
     */
        /** @brief Channel 0 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT3CR1_RCH_B_0x0 = 0;
        /** @brief Channel 1 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT3CR1_RCH_B_0x1 = 1;

    /** @brief Fast conversion mode selection for regular conversions When converting a regular conversion in continuous mode, having enabled the fast mode causes each conversion (except the first) to execute faster than in standard mode. This bit has no effect on conversions which are not continuous. This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): t = IOSR / fCKIN (... but CNVCNT=0) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input. */
    using DFSDM_FLT3CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast conversion mode disabled (value: 0)
     *          - B_0x1: Fast conversion mode enabled (value: 1)
     */
        /** @brief Fast conversion mode disabled */
    constexpr std::uint32_t DFSDM_FLT3CR1_FAST_B_0x0 = 0;
        /** @brief Fast conversion mode enabled */
    constexpr std::uint32_t DFSDM_FLT3CR1_FAST_B_0x1 = 1;

    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT3CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift (value: 0)
     *          - B_0x1: Analog watchdog on channel transceivers value (after watchdog filter) (value: 1)
     */
        /** @brief Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift */
    constexpr std::uint32_t DFSDM_FLT3CR1_AWFSEL_B_0x0 = 0;
        /** @brief Analog watchdog on channel transceivers value (after watchdog filter) */
    constexpr std::uint32_t DFSDM_FLT3CR1_AWFSEL_B_0x1 = 1;

    /** @brief DFSDM_FLT3CR2 register */
    using DFSDM_FLT3CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable Please see the explanation of JEOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT3CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Injected end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Injected end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_JEOCIE_B_0x0 = 0;
        /** @brief Injected end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_JEOCIE_B_0x1 = 1;

    /** @brief Regular end of conversion interrupt enable Please see the explanation of REOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT3CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Regular end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Regular end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_REOCIE_B_0x0 = 0;
        /** @brief Regular end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_REOCIE_B_0x1 = 1;

    /** @brief Injected data overrun interrupt enable Please see the explanation of JOVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT3CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Injected data overrun interrupt is enabled (value: 1)
     */
        /** @brief Injected data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_JOVRIE_B_0x0 = 0;
        /** @brief Injected data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_JOVRIE_B_0x1 = 1;

    /** @brief Regular data overrun interrupt enable Please see the explanation of ROVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT3CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Regular data overrun interrupt is enabled (value: 1)
     */
        /** @brief Regular data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_ROVRIE_B_0x0 = 0;
        /** @brief Regular data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_ROVRIE_B_0x1 = 1;

    /** @brief Analog watchdog interrupt enable Please see the explanation of AWDF in DFSDM_FLTxISR. */
    using DFSDM_FLT3CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt is disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt is enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_AWDIE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_AWDIE_B_0x1 = 1;

    /** @brief Short-circuit detector interrupt enable Please see the explanation of SCDF[7:0] in DFSDM_FLTxISR. Note: SCDIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT3CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: short-circuit detector interrupt is disabled (value: 0)
     *          - B_0x1: short-circuit detector interrupt is enabled (value: 1)
     */
        /** @brief short-circuit detector interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_SCDIE_B_0x0 = 0;
        /** @brief short-circuit detector interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_SCDIE_B_0x1 = 1;

    /** @brief Clock absence interrupt enable Please see the explanation of CKABF[7:0] in DFSDM_FLTxISR. Note: CKABIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT3CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection of channel input clock absence interrupt is disabled (value: 0)
     *          - B_0x1: Detection of channel input clock absence interrupt is enabled (value: 1)
     */
        /** @brief Detection of channel input clock absence interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_CKABIE_B_0x0 = 0;
        /** @brief Detection of channel input clock absence interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT3CR2_CKABIE_B_0x1 = 1;

    /** @brief Extremes detector channel selection These bits select the input channels to be taken by the Extremes detector. EXCH[y] = 0: Extremes detector does not accept data from channel y EXCH[y] = 1: Extremes detector accepts data from channel y */
    using DFSDM_FLT3CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection These bits select the input channel to be guarded continuously by the analog watchdog. AWDCH[y] = 0: Analog watchdog is disabled on channel y AWDCH[y] = 1: Analog watchdog is enabled on channel y */
    using DFSDM_FLT3CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3ISR register */
    using DFSDM_FLT3ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxJDATAR. */
    using DFSDM_FLT3ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion has completed (value: 0)
     *          - B_0x1: An injected conversion has completed and its data may be read (value: 1)
     */
        /** @brief No injected conversion has completed */
    constexpr std::uint32_t DFSDM_FLT3ISR_JEOCF_B_0x0 = 0;
        /** @brief An injected conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT3ISR_JEOCF_B_0x1 = 1;

    /** @brief End of regular conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxRDATAR. */
    using DFSDM_FLT3ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion has completed (value: 0)
     *          - B_0x1: A regular conversion has completed and its data may be read (value: 1)
     */
        /** @brief No regular conversion has completed */
    constexpr std::uint32_t DFSDM_FLT3ISR_REOCF_B_0x0 = 0;
        /** @brief A regular conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT3ISR_REOCF_B_0x1 = 1;

    /** @brief Injected conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRJOVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT3ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion overrun has occurred (value: 0)
     *          - B_0x1: An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns (value: 1)
     */
        /** @brief No injected conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT3ISR_JOVRF_B_0x0 = 0;
        /** @brief An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT3ISR_JOVRF_B_0x1 = 1;

    /** @brief Regular conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRROVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT3ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion overrun has occurred (value: 0)
     *          - B_0x1: A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns (value: 1)
     */
        /** @brief No regular conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT3ISR_ROVRF_B_0x0 = 0;
        /** @brief A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT3ISR_ROVRF_B_0x1 = 1;

    /** @brief Analog watchdog This bit is set by hardware. It is cleared by software by clearing all source flag bits AWHTF[7:0] and AWLTF[7:0] in DFSDM_FLTxAWSR register (by writing '1' into the clear bits in DFSDM_FLTxAWCFR register). */
    using DFSDM_FLT3ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Analog watchdog event occurred (value: 0)
     *          - B_0x1: The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. (value: 1)
     */
        /** @brief No Analog watchdog event occurred */
    constexpr std::uint32_t DFSDM_FLT3ISR_AWDF_B_0x0 = 0;
        /** @brief The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. */
    constexpr std::uint32_t DFSDM_FLT3ISR_AWDF_B_0x1 = 1;

    /** @brief Injected conversion in progress status A request to start an injected conversion is ignored when JCIP=1. */
    using DFSDM_FLT3ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the injected channel group (neither by software nor by trigger) has been issued (value: 0)
     *          - B_0x1: The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection (value: 1)
     */
        /** @brief No request to convert the injected channel group (neither by software nor by trigger) has been issued */
    constexpr std::uint32_t DFSDM_FLT3ISR_JCIP_B_0x0 = 0;
        /** @brief The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection */
    constexpr std::uint32_t DFSDM_FLT3ISR_JCIP_B_0x1 = 1;

    /** @brief Regular conversion in progress status A request to start a regular conversion is ignored when RCIP=1. */
    using DFSDM_FLT3ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the regular channel has been issued (value: 0)
     *          - B_0x1: The conversion of the regular channel is in progress or a request for a regular conversion is pending (value: 1)
     */
        /** @brief No request to convert the regular channel has been issued */
    constexpr std::uint32_t DFSDM_FLT3ISR_RCIP_B_0x0 = 0;
        /** @brief The conversion of the regular channel is in progress or a request for a regular conversion is pending */
    constexpr std::uint32_t DFSDM_FLT3ISR_RCIP_B_0x1 = 1;

    /** @brief Clock absence flag CKABF[y]=0: Clock signal on channel y is present. CKABF[y]=1: Clock signal on channel y is not present. Given y bit is set by hardware when clock absence is detected on channel y. It is held at CKABF[y]=1 state by hardware when CHEN=0 (see DFSDM_CHyCFGR1 register). It is held at CKABF[y]=1 state by hardware when the transceiver is not yet synchronized.It can be cleared by software using the corresponding CLRCKABF[y] bit in the DFSDM_FLTxICR register. Note: CKABF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT3ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag SDCF[y]=0: No short-circuit detector event occurred on channel y SDCF[y]=1: The short-circuit detector counter reaches, on channel y, the value programmed in the DFSDM_CHyAWSCDR registers This bit is set by hardware. It can be cleared by software using the corresponding CLRSCDF[y] bit in the DFSDM_FLTxICR register. SCDF[y] is cleared also by hardware when CHEN[y] = 0 (given channel is disabled). Note: SCDF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT3ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3ICR register */
    using DFSDM_FLT3ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT3ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT3ICR_CLRJOVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT3ICR_CLRJOVRF_B_0x1 = 1;

    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT3ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT3ICR_CLRROVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT3ICR_CLRROVRF_B_0x1 = 1;

    /** @brief Clear the clock absence flag CLRCKABF[y]=0: Writing '0' has no effect CLRCKABF[y]=1: Writing '1' to position y clears the corresponding CKABF[y] bit in the DFSDM_FLTxISR register. When the transceiver is not yet synchronized, the clock absence flag is set and cannot be cleared by CLRCKABF[y]. Note: CLRCKABF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT3ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag CLRSCDF[y]=0: Writing '0' has no effect CLRSCDF[y]=1: Writing '1' to position y clears the corresponding SCDF[y] bit in the DFSDM_FLTxISR register Note: CLRSCDF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT3ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3JCHGR register */
    using DFSDM_FLT3JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection JCHG[y]=0: channel y is not part of the injected group JCHG[y]=1: channel y is part of the injected group If JSCAN=1, each of the selected channels is converted, one after another. The lowest channel (channel 0, if selected) is converted first and the sequence ends at the highest selected channel. If JSCAN=0, then only one channel is converted from the selected channels, and the channel selection is moved to the next channel. Writing JCHG, if JSCAN=0, resets the channel selection to the lowest selected channel. At least one channel must always be selected for the injected group. Writes causing all JCHG bits to be zero are ignored. */
    using DFSDM_FLT3JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3FCR register */
    using DFSDM_FLT3FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) from Sinc filter will be summed into one output data sample from the integrator. The output data rate from the integrator will be decreased by this number (additional data decimation ratio). This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If IOSR = 0, then the Integrator has no effect (Integrator bypass). 0- 255: The length of the Integrator in the range 1 - 256 (IOSR + 1). Defines how many samples */
    using DFSDM_FLT3FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) number is also the decimation ratio of the output data rate from filter. This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If FOSR = 0, then the filter has no effect (filter bypass). 0 - 1023: Defines the length of the Sinc type filter in the range 1 - 1024 (FOSR = FOSR[9:0] +1). This */
    using DFSDM_FLT3FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order 2: Sinc2 filter type 3: Sinc3 filter type 4: Sinc4 filter type 5: Sinc5 filter type 6-7: Reserved Sincx filter type transfer function: FastSinc filter type transfer function: This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT3FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_FLT3FCR_FORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_FLT3FCR_FORD_B_0x1 = 1;

    /** @brief DFSDM_FLT3JDATAR register */
    using DFSDM_FLT3JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted When each conversion of a channel in the injected group finishes, JDATACH[2:0] is updated to indicate which channel was converted. Thus, JDATA[23:0] holds the data that corresponds to the channel indicated by JDATACH[2:0]. */
    using DFSDM_FLT3JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data When each conversion of a channel in the injected group finishes, its resulting data is stored in this field. The data is valid when JEOCF=1. Reading this register clears the corresponding JEOCF. */
    using DFSDM_FLT3JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3RDATAR register */
    using DFSDM_FLT3RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted When each regular conversion finishes, RDATACH[2:0] is updated to indicate which channel was converted (because regular channel selection RCH[2:0] in DFSDM_FLTxCR1 register can be updated during regular conversion). Thus RDATA[23:0] holds the data that corresponds to the channel indicated by RDATACH[2:0]. */
    using DFSDM_FLT3RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data Regular data in RDATA[23:0] was delayed due to an injected channel trigger during the conversion */
    using DFSDM_FLT3RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data When each regular conversion finishes, its data is stored in this register. The data is valid when REOCF=1. Reading this register clears the corresponding REOCF. */
    using DFSDM_FLT3RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3AWHTR register */
    using DFSDM_FLT3AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event BKAWH[i] = 0: Break i signal is not assigned to an analog watchdog high threshold event BKAWH[i] = 1: Break i signal is assigned to an analog watchdog high threshold event */
    using DFSDM_FLT3AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold These bits are written by software to define the high threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), the higher 16 bits (AWHT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWHT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT3AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3AWLTR register */
    using DFSDM_FLT3AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event BKAWL[i] = 0: Break i signal is not assigned to an analog watchdog low threshold event BKAWL[i] = 1: Break i signal is assigned to an analog watchdog low threshold event */
    using DFSDM_FLT3AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold These bits are written by software to define the low threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), only the higher 16 bits (AWLT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWLT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT3AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3AWSR register */
    using DFSDM_FLT3AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag AWLTF[y]=1 indicates a low threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWLTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT3AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag AWHTF[y]=1 indicates a high threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWHTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT3AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3AWCFR register */
    using DFSDM_FLT3AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag CLRAWLTF[y]=0: Writing '0' has no effect CLRAWLTF[y]=1: Writing '1' to position y clears the corresponding AWLTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT3AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag CLRAWHTF[y]=0: Writing '0' has no effect CLRAWHTF[y]=1: Writing '1' to position y clears the corresponding AWHTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT3AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3EXMAX register */
    using DFSDM_FLT3EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel. These bits contains information about the channel on which the data is stored into EXMAX[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT3EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value These bits are set by hardware and indicate the highest value converted by DFSDM_FLTx. EXMAX[23:0] bits are reset to value (0x800000) by reading of this register. */
    using DFSDM_FLT3EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3EXMIN register */
    using DFSDM_FLT3EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel These bits contain information about the channel on which the data is stored into EXMIN[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT3EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value These bits are set by hardware and indicate the lowest value converted by DFSDM_FLTx. EXMIN[23:0] bits are reset to value (0x7FFFFF) by reading of this register. */
    using DFSDM_FLT3EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT3CNVTIMR register */
    using DFSDM_FLT3CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDMCLK The timer has an input clock from DFSDM clock (system clock fDFSDMCLK). Conversion time measurement is started on each conversion start and stopped when conversion finishes (interval between first and last serial sample). Only in case of filter bypass (FOSR[9:0] = 0) is the conversion time measurement stopped and CNVCNT[27:0] = 0. The counted time is: if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): CNVCNT = 0 (counting is stopped, conversion time: t = IOSR / fCKIN) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input (from internal ADC or from CPU/DMA write) Note: When conversion is interrupted (e.g. by disable/enable selected channel) the timer counts also this interruption time. */
    using DFSDM_FLT3CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4CR1 register */
    using DFSDM_FLT4CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLTx enable Data which are cleared by setting DFEN=0: register DFSDM_FLTxISR is set to the reset state register DFSDM_FLTxAWSR is set to the reset state */
    using DFSDM_FLT4CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. (value: 0)
     *          - B_0x1: DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. (value: 1)
     */
        /** @brief DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. */
    constexpr std::uint32_t DFSDM_FLT4CR1_DFEN_B_0x0 = 0;
        /** @brief DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. */
    constexpr std::uint32_t DFSDM_FLT4CR1_DFEN_B_0x1 = 1;

    /** @brief Start a conversion of the injected group of channels This bit is always read as '0'. */
    using DFSDM_FLT4CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect. (value: 0)
     *          - B_0x1: Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect. */
    constexpr std::uint32_t DFSDM_FLT4CR1_JSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT4CR1_JSWSTART_B_0x1 = 1;

    /** @brief Launch an injected conversion synchronously with the DFSDM_FLT0 JSWSTART trigger This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT4CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch an injected conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger (value: 1)
     */
        /** @brief Do not launch an injected conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT4CR1_JSYNC_B_0x0 = 0;
        /** @brief Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger */
    constexpr std::uint32_t DFSDM_FLT4CR1_JSYNC_B_0x1 = 1;

    /** @brief Scanning conversion mode for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Writing JCHG if JSCAN=0 resets the channel selection to the lowest selected channel. */
    using DFSDM_FLT4CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. (value: 0)
     *          - B_0x1: The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. (value: 1)
     */
        /** @brief One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. */
    constexpr std::uint32_t DFSDM_FLT4CR1_JSCAN_B_0x0 = 0;
        /** @brief The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. */
    constexpr std::uint32_t DFSDM_FLT4CR1_JSCAN_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the injected channel group This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT4CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read injected data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read injected data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT4CR1_JDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT4CR1_JDMAEN_B_0x1 = 1;

    /** @brief Trigger signal selection for launching injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Note: synchronous trigger has latency up to one fDFSDMCLK clock cycle (with deterministic jitter), asynchronous trigger has latency 2-3 fDFSDMCLK clock cycles (with jitter up to 1 cycle). DFSDM_FLTx 0x00	dfsdm_jtrg0 0x01	dfsdm_jtrg1 ... 0x1E	dfsdm_jtrg30 0x1F	dfsdm_jtrg31 Refer to . 0x0-0x1F: Trigger inputs selected by the following table (internal or external trigger). */
    using DFSDM_FLT4CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT4CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger detection is disabled (value: 0)
     *          - B_0x1: Each rising edge on the selected trigger makes a request to launch an injected conversion (value: 1)
     *          - B_0x2: Each falling edge on the selected trigger makes a request to launch an injected conversion (value: 2)
     *          - B_0x3: Both rising edges and falling edges on the selected trigger make requests to launch injected conversions (value: 3)
     */
        /** @brief Trigger detection is disabled */
    constexpr std::uint32_t DFSDM_FLT4CR1_JEXTEN_B_0x0 = 0;
        /** @brief Each rising edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT4CR1_JEXTEN_B_0x1 = 1;
        /** @brief Each falling edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT4CR1_JEXTEN_B_0x2 = 2;
        /** @brief Both rising edges and falling edges on the selected trigger make requests to launch injected conversions */
    constexpr std::uint32_t DFSDM_FLT4CR1_JEXTEN_B_0x3 = 3;

    /** @brief Software start of a conversion on the regular channel This bit is always read as '0'. */
    using DFSDM_FLT4CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT4CR1_RSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT4CR1_RSWSTART_B_0x1 = 1;

    /** @brief Continuous mode selection for regular conversions Writing '0' to this bit while a continuous regular conversion is already in progress stops the continuous mode immediately. */
    using DFSDM_FLT4CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The regular channel is converted just once for each conversion request (value: 0)
     *          - B_0x1: The regular channel is converted repeatedly after each conversion request (value: 1)
     */
        /** @brief The regular channel is converted just once for each conversion request */
    constexpr std::uint32_t DFSDM_FLT4CR1_RCONT_B_0x0 = 0;
        /** @brief The regular channel is converted repeatedly after each conversion request */
    constexpr std::uint32_t DFSDM_FLT4CR1_RCONT_B_0x1 = 1;

    /** @brief Launch regular conversion synchronously with DFSDM_FLT0 This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT4CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch a regular conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 (value: 1)
     */
        /** @brief Do not launch a regular conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT4CR1_RSYNC_B_0x0 = 0;
        /** @brief Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT4CR1_RSYNC_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the regular conversion This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT4CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read regular data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read regular data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT4CR1_RDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT4CR1_RDMAEN_B_0x1 = 1;

    /** @brief Regular channel selection ... 7: Channel 7 is selected as the regular channel Writing these bits when RCIP=1 takes effect when the next regular conversion begins. This is especially useful in continuous mode (when RCONT=1). It also affects regular conversions which are pending (due to ongoing injected conversion). */
    using DFSDM_FLT4CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel 0 is selected as the regular channel (value: 0)
     *          - B_0x1: Channel 1 is selected as the regular channel (value: 1)
     */
        /** @brief Channel 0 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT4CR1_RCH_B_0x0 = 0;
        /** @brief Channel 1 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT4CR1_RCH_B_0x1 = 1;

    /** @brief Fast conversion mode selection for regular conversions When converting a regular conversion in continuous mode, having enabled the fast mode causes each conversion (except the first) to execute faster than in standard mode. This bit has no effect on conversions which are not continuous. This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): t = IOSR / fCKIN (... but CNVCNT=0) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input. */
    using DFSDM_FLT4CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast conversion mode disabled (value: 0)
     *          - B_0x1: Fast conversion mode enabled (value: 1)
     */
        /** @brief Fast conversion mode disabled */
    constexpr std::uint32_t DFSDM_FLT4CR1_FAST_B_0x0 = 0;
        /** @brief Fast conversion mode enabled */
    constexpr std::uint32_t DFSDM_FLT4CR1_FAST_B_0x1 = 1;

    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT4CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift (value: 0)
     *          - B_0x1: Analog watchdog on channel transceivers value (after watchdog filter) (value: 1)
     */
        /** @brief Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift */
    constexpr std::uint32_t DFSDM_FLT4CR1_AWFSEL_B_0x0 = 0;
        /** @brief Analog watchdog on channel transceivers value (after watchdog filter) */
    constexpr std::uint32_t DFSDM_FLT4CR1_AWFSEL_B_0x1 = 1;

    /** @brief DFSDM_FLT4CR2 register */
    using DFSDM_FLT4CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable Please see the explanation of JEOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT4CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Injected end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Injected end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_JEOCIE_B_0x0 = 0;
        /** @brief Injected end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_JEOCIE_B_0x1 = 1;

    /** @brief Regular end of conversion interrupt enable Please see the explanation of REOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT4CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Regular end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Regular end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_REOCIE_B_0x0 = 0;
        /** @brief Regular end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_REOCIE_B_0x1 = 1;

    /** @brief Injected data overrun interrupt enable Please see the explanation of JOVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT4CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Injected data overrun interrupt is enabled (value: 1)
     */
        /** @brief Injected data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_JOVRIE_B_0x0 = 0;
        /** @brief Injected data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_JOVRIE_B_0x1 = 1;

    /** @brief Regular data overrun interrupt enable Please see the explanation of ROVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT4CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Regular data overrun interrupt is enabled (value: 1)
     */
        /** @brief Regular data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_ROVRIE_B_0x0 = 0;
        /** @brief Regular data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_ROVRIE_B_0x1 = 1;

    /** @brief Analog watchdog interrupt enable Please see the explanation of AWDF in DFSDM_FLTxISR. */
    using DFSDM_FLT4CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt is disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt is enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_AWDIE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_AWDIE_B_0x1 = 1;

    /** @brief Short-circuit detector interrupt enable Please see the explanation of SCDF[7:0] in DFSDM_FLTxISR. Note: SCDIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT4CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: short-circuit detector interrupt is disabled (value: 0)
     *          - B_0x1: short-circuit detector interrupt is enabled (value: 1)
     */
        /** @brief short-circuit detector interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_SCDIE_B_0x0 = 0;
        /** @brief short-circuit detector interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_SCDIE_B_0x1 = 1;

    /** @brief Clock absence interrupt enable Please see the explanation of CKABF[7:0] in DFSDM_FLTxISR. Note: CKABIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT4CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection of channel input clock absence interrupt is disabled (value: 0)
     *          - B_0x1: Detection of channel input clock absence interrupt is enabled (value: 1)
     */
        /** @brief Detection of channel input clock absence interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_CKABIE_B_0x0 = 0;
        /** @brief Detection of channel input clock absence interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT4CR2_CKABIE_B_0x1 = 1;

    /** @brief Extremes detector channel selection These bits select the input channels to be taken by the Extremes detector. EXCH[y] = 0: Extremes detector does not accept data from channel y EXCH[y] = 1: Extremes detector accepts data from channel y */
    using DFSDM_FLT4CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection These bits select the input channel to be guarded continuously by the analog watchdog. AWDCH[y] = 0: Analog watchdog is disabled on channel y AWDCH[y] = 1: Analog watchdog is enabled on channel y */
    using DFSDM_FLT4CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4ISR register */
    using DFSDM_FLT4ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxJDATAR. */
    using DFSDM_FLT4ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion has completed (value: 0)
     *          - B_0x1: An injected conversion has completed and its data may be read (value: 1)
     */
        /** @brief No injected conversion has completed */
    constexpr std::uint32_t DFSDM_FLT4ISR_JEOCF_B_0x0 = 0;
        /** @brief An injected conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT4ISR_JEOCF_B_0x1 = 1;

    /** @brief End of regular conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxRDATAR. */
    using DFSDM_FLT4ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion has completed (value: 0)
     *          - B_0x1: A regular conversion has completed and its data may be read (value: 1)
     */
        /** @brief No regular conversion has completed */
    constexpr std::uint32_t DFSDM_FLT4ISR_REOCF_B_0x0 = 0;
        /** @brief A regular conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT4ISR_REOCF_B_0x1 = 1;

    /** @brief Injected conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRJOVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT4ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion overrun has occurred (value: 0)
     *          - B_0x1: An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns (value: 1)
     */
        /** @brief No injected conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT4ISR_JOVRF_B_0x0 = 0;
        /** @brief An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT4ISR_JOVRF_B_0x1 = 1;

    /** @brief Regular conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRROVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT4ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion overrun has occurred (value: 0)
     *          - B_0x1: A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns (value: 1)
     */
        /** @brief No regular conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT4ISR_ROVRF_B_0x0 = 0;
        /** @brief A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT4ISR_ROVRF_B_0x1 = 1;

    /** @brief Analog watchdog This bit is set by hardware. It is cleared by software by clearing all source flag bits AWHTF[7:0] and AWLTF[7:0] in DFSDM_FLTxAWSR register (by writing '1' into the clear bits in DFSDM_FLTxAWCFR register). */
    using DFSDM_FLT4ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Analog watchdog event occurred (value: 0)
     *          - B_0x1: The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. (value: 1)
     */
        /** @brief No Analog watchdog event occurred */
    constexpr std::uint32_t DFSDM_FLT4ISR_AWDF_B_0x0 = 0;
        /** @brief The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. */
    constexpr std::uint32_t DFSDM_FLT4ISR_AWDF_B_0x1 = 1;

    /** @brief Injected conversion in progress status A request to start an injected conversion is ignored when JCIP=1. */
    using DFSDM_FLT4ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the injected channel group (neither by software nor by trigger) has been issued (value: 0)
     *          - B_0x1: The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection (value: 1)
     */
        /** @brief No request to convert the injected channel group (neither by software nor by trigger) has been issued */
    constexpr std::uint32_t DFSDM_FLT4ISR_JCIP_B_0x0 = 0;
        /** @brief The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection */
    constexpr std::uint32_t DFSDM_FLT4ISR_JCIP_B_0x1 = 1;

    /** @brief Regular conversion in progress status A request to start a regular conversion is ignored when RCIP=1. */
    using DFSDM_FLT4ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the regular channel has been issued (value: 0)
     *          - B_0x1: The conversion of the regular channel is in progress or a request for a regular conversion is pending (value: 1)
     */
        /** @brief No request to convert the regular channel has been issued */
    constexpr std::uint32_t DFSDM_FLT4ISR_RCIP_B_0x0 = 0;
        /** @brief The conversion of the regular channel is in progress or a request for a regular conversion is pending */
    constexpr std::uint32_t DFSDM_FLT4ISR_RCIP_B_0x1 = 1;

    /** @brief Clock absence flag CKABF[y]=0: Clock signal on channel y is present. CKABF[y]=1: Clock signal on channel y is not present. Given y bit is set by hardware when clock absence is detected on channel y. It is held at CKABF[y]=1 state by hardware when CHEN=0 (see DFSDM_CHyCFGR1 register). It is held at CKABF[y]=1 state by hardware when the transceiver is not yet synchronized.It can be cleared by software using the corresponding CLRCKABF[y] bit in the DFSDM_FLTxICR register. Note: CKABF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT4ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag SDCF[y]=0: No short-circuit detector event occurred on channel y SDCF[y]=1: The short-circuit detector counter reaches, on channel y, the value programmed in the DFSDM_CHyAWSCDR registers This bit is set by hardware. It can be cleared by software using the corresponding CLRSCDF[y] bit in the DFSDM_FLTxICR register. SCDF[y] is cleared also by hardware when CHEN[y] = 0 (given channel is disabled). Note: SCDF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT4ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4ICR register */
    using DFSDM_FLT4ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT4ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT4ICR_CLRJOVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT4ICR_CLRJOVRF_B_0x1 = 1;

    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT4ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT4ICR_CLRROVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT4ICR_CLRROVRF_B_0x1 = 1;

    /** @brief Clear the clock absence flag CLRCKABF[y]=0: Writing '0' has no effect CLRCKABF[y]=1: Writing '1' to position y clears the corresponding CKABF[y] bit in the DFSDM_FLTxISR register. When the transceiver is not yet synchronized, the clock absence flag is set and cannot be cleared by CLRCKABF[y]. Note: CLRCKABF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT4ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag CLRSCDF[y]=0: Writing '0' has no effect CLRSCDF[y]=1: Writing '1' to position y clears the corresponding SCDF[y] bit in the DFSDM_FLTxISR register Note: CLRSCDF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT4ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4JCHGR register */
    using DFSDM_FLT4JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection JCHG[y]=0: channel y is not part of the injected group JCHG[y]=1: channel y is part of the injected group If JSCAN=1, each of the selected channels is converted, one after another. The lowest channel (channel 0, if selected) is converted first and the sequence ends at the highest selected channel. If JSCAN=0, then only one channel is converted from the selected channels, and the channel selection is moved to the next channel. Writing JCHG, if JSCAN=0, resets the channel selection to the lowest selected channel. At least one channel must always be selected for the injected group. Writes causing all JCHG bits to be zero are ignored. */
    using DFSDM_FLT4JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4FCR register */
    using DFSDM_FLT4FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) from Sinc filter will be summed into one output data sample from the integrator. The output data rate from the integrator will be decreased by this number (additional data decimation ratio). This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If IOSR = 0, then the Integrator has no effect (Integrator bypass). 0- 255: The length of the Integrator in the range 1 - 256 (IOSR + 1). Defines how many samples */
    using DFSDM_FLT4FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) number is also the decimation ratio of the output data rate from filter. This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If FOSR = 0, then the filter has no effect (filter bypass). 0 - 1023: Defines the length of the Sinc type filter in the range 1 - 1024 (FOSR = FOSR[9:0] +1). This */
    using DFSDM_FLT4FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order 2: Sinc2 filter type 3: Sinc3 filter type 4: Sinc4 filter type 5: Sinc5 filter type 6-7: Reserved Sincx filter type transfer function: FastSinc filter type transfer function: This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT4FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_FLT4FCR_FORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_FLT4FCR_FORD_B_0x1 = 1;

    /** @brief DFSDM_FLT4JDATAR register */
    using DFSDM_FLT4JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted When each conversion of a channel in the injected group finishes, JDATACH[2:0] is updated to indicate which channel was converted. Thus, JDATA[23:0] holds the data that corresponds to the channel indicated by JDATACH[2:0]. */
    using DFSDM_FLT4JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data When each conversion of a channel in the injected group finishes, its resulting data is stored in this field. The data is valid when JEOCF=1. Reading this register clears the corresponding JEOCF. */
    using DFSDM_FLT4JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4RDATAR register */
    using DFSDM_FLT4RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted When each regular conversion finishes, RDATACH[2:0] is updated to indicate which channel was converted (because regular channel selection RCH[2:0] in DFSDM_FLTxCR1 register can be updated during regular conversion). Thus RDATA[23:0] holds the data that corresponds to the channel indicated by RDATACH[2:0]. */
    using DFSDM_FLT4RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data Regular data in RDATA[23:0] was delayed due to an injected channel trigger during the conversion */
    using DFSDM_FLT4RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data When each regular conversion finishes, its data is stored in this register. The data is valid when REOCF=1. Reading this register clears the corresponding REOCF. */
    using DFSDM_FLT4RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4AWHTR register */
    using DFSDM_FLT4AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event BKAWH[i] = 0: Break i signal is not assigned to an analog watchdog high threshold event BKAWH[i] = 1: Break i signal is assigned to an analog watchdog high threshold event */
    using DFSDM_FLT4AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold These bits are written by software to define the high threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), the higher 16 bits (AWHT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWHT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT4AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4AWLTR register */
    using DFSDM_FLT4AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x324, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event BKAWL[i] = 0: Break i signal is not assigned to an analog watchdog low threshold event BKAWL[i] = 1: Break i signal is assigned to an analog watchdog low threshold event */
    using DFSDM_FLT4AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold These bits are written by software to define the low threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), only the higher 16 bits (AWLT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWLT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT4AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4AWSR register */
    using DFSDM_FLT4AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x328, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag AWLTF[y]=1 indicates a low threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWLTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT4AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag AWHTF[y]=1 indicates a high threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWHTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT4AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4AWCFR register */
    using DFSDM_FLT4AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x32C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag CLRAWLTF[y]=0: Writing '0' has no effect CLRAWLTF[y]=1: Writing '1' to position y clears the corresponding AWLTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT4AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag CLRAWHTF[y]=0: Writing '0' has no effect CLRAWHTF[y]=1: Writing '1' to position y clears the corresponding AWHTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT4AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4EXMAX register */
    using DFSDM_FLT4EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x330, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel. These bits contains information about the channel on which the data is stored into EXMAX[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT4EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value These bits are set by hardware and indicate the highest value converted by DFSDM_FLTx. EXMAX[23:0] bits are reset to value (0x800000) by reading of this register. */
    using DFSDM_FLT4EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4EXMIN register */
    using DFSDM_FLT4EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x334, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel These bits contain information about the channel on which the data is stored into EXMIN[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT4EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value These bits are set by hardware and indicate the lowest value converted by DFSDM_FLTx. EXMIN[23:0] bits are reset to value (0x7FFFFF) by reading of this register. */
    using DFSDM_FLT4EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT4CNVTIMR register */
    using DFSDM_FLT4CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x338, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDMCLK The timer has an input clock from DFSDM clock (system clock fDFSDMCLK). Conversion time measurement is started on each conversion start and stopped when conversion finishes (interval between first and last serial sample). Only in case of filter bypass (FOSR[9:0] = 0) is the conversion time measurement stopped and CNVCNT[27:0] = 0. The counted time is: if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): CNVCNT = 0 (counting is stopped, conversion time: t = IOSR / fCKIN) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input (from internal ADC or from CPU/DMA write) Note: When conversion is interrupted (e.g. by disable/enable selected channel) the timer counts also this interruption time. */
    using DFSDM_FLT4CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5CR1 register */
    using DFSDM_FLT5CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x380, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLTx enable Data which are cleared by setting DFEN=0: register DFSDM_FLTxISR is set to the reset state register DFSDM_FLTxAWSR is set to the reset state */
    using DFSDM_FLT5CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. (value: 0)
     *          - B_0x1: DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. (value: 1)
     */
        /** @brief DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. */
    constexpr std::uint32_t DFSDM_FLT5CR1_DFEN_B_0x0 = 0;
        /** @brief DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. */
    constexpr std::uint32_t DFSDM_FLT5CR1_DFEN_B_0x1 = 1;

    /** @brief Start a conversion of the injected group of channels This bit is always read as '0'. */
    using DFSDM_FLT5CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect. (value: 0)
     *          - B_0x1: Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect. */
    constexpr std::uint32_t DFSDM_FLT5CR1_JSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT5CR1_JSWSTART_B_0x1 = 1;

    /** @brief Launch an injected conversion synchronously with the DFSDM_FLT0 JSWSTART trigger This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT5CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch an injected conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger (value: 1)
     */
        /** @brief Do not launch an injected conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT5CR1_JSYNC_B_0x0 = 0;
        /** @brief Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger */
    constexpr std::uint32_t DFSDM_FLT5CR1_JSYNC_B_0x1 = 1;

    /** @brief Scanning conversion mode for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Writing JCHG if JSCAN=0 resets the channel selection to the lowest selected channel. */
    using DFSDM_FLT5CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. (value: 0)
     *          - B_0x1: The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. (value: 1)
     */
        /** @brief One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. */
    constexpr std::uint32_t DFSDM_FLT5CR1_JSCAN_B_0x0 = 0;
        /** @brief The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. */
    constexpr std::uint32_t DFSDM_FLT5CR1_JSCAN_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the injected channel group This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT5CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read injected data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read injected data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT5CR1_JDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT5CR1_JDMAEN_B_0x1 = 1;

    /** @brief Trigger signal selection for launching injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Note: synchronous trigger has latency up to one fDFSDMCLK clock cycle (with deterministic jitter), asynchronous trigger has latency 2-3 fDFSDMCLK clock cycles (with jitter up to 1 cycle). DFSDM_FLTx 0x00	dfsdm_jtrg0 0x01	dfsdm_jtrg1 ... 0x1E	dfsdm_jtrg30 0x1F	dfsdm_jtrg31 Refer to . 0x0-0x1F: Trigger inputs selected by the following table (internal or external trigger). */
    using DFSDM_FLT5CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT5CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger detection is disabled (value: 0)
     *          - B_0x1: Each rising edge on the selected trigger makes a request to launch an injected conversion (value: 1)
     *          - B_0x2: Each falling edge on the selected trigger makes a request to launch an injected conversion (value: 2)
     *          - B_0x3: Both rising edges and falling edges on the selected trigger make requests to launch injected conversions (value: 3)
     */
        /** @brief Trigger detection is disabled */
    constexpr std::uint32_t DFSDM_FLT5CR1_JEXTEN_B_0x0 = 0;
        /** @brief Each rising edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT5CR1_JEXTEN_B_0x1 = 1;
        /** @brief Each falling edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT5CR1_JEXTEN_B_0x2 = 2;
        /** @brief Both rising edges and falling edges on the selected trigger make requests to launch injected conversions */
    constexpr std::uint32_t DFSDM_FLT5CR1_JEXTEN_B_0x3 = 3;

    /** @brief Software start of a conversion on the regular channel This bit is always read as '0'. */
    using DFSDM_FLT5CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT5CR1_RSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT5CR1_RSWSTART_B_0x1 = 1;

    /** @brief Continuous mode selection for regular conversions Writing '0' to this bit while a continuous regular conversion is already in progress stops the continuous mode immediately. */
    using DFSDM_FLT5CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The regular channel is converted just once for each conversion request (value: 0)
     *          - B_0x1: The regular channel is converted repeatedly after each conversion request (value: 1)
     */
        /** @brief The regular channel is converted just once for each conversion request */
    constexpr std::uint32_t DFSDM_FLT5CR1_RCONT_B_0x0 = 0;
        /** @brief The regular channel is converted repeatedly after each conversion request */
    constexpr std::uint32_t DFSDM_FLT5CR1_RCONT_B_0x1 = 1;

    /** @brief Launch regular conversion synchronously with DFSDM_FLT0 This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT5CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch a regular conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 (value: 1)
     */
        /** @brief Do not launch a regular conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT5CR1_RSYNC_B_0x0 = 0;
        /** @brief Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT5CR1_RSYNC_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the regular conversion This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT5CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read regular data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read regular data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT5CR1_RDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT5CR1_RDMAEN_B_0x1 = 1;

    /** @brief Regular channel selection ... 7: Channel 7 is selected as the regular channel Writing these bits when RCIP=1 takes effect when the next regular conversion begins. This is especially useful in continuous mode (when RCONT=1). It also affects regular conversions which are pending (due to ongoing injected conversion). */
    using DFSDM_FLT5CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel 0 is selected as the regular channel (value: 0)
     *          - B_0x1: Channel 1 is selected as the regular channel (value: 1)
     */
        /** @brief Channel 0 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT5CR1_RCH_B_0x0 = 0;
        /** @brief Channel 1 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT5CR1_RCH_B_0x1 = 1;

    /** @brief Fast conversion mode selection for regular conversions When converting a regular conversion in continuous mode, having enabled the fast mode causes each conversion (except the first) to execute faster than in standard mode. This bit has no effect on conversions which are not continuous. This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): t = IOSR / fCKIN (... but CNVCNT=0) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input. */
    using DFSDM_FLT5CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast conversion mode disabled (value: 0)
     *          - B_0x1: Fast conversion mode enabled (value: 1)
     */
        /** @brief Fast conversion mode disabled */
    constexpr std::uint32_t DFSDM_FLT5CR1_FAST_B_0x0 = 0;
        /** @brief Fast conversion mode enabled */
    constexpr std::uint32_t DFSDM_FLT5CR1_FAST_B_0x1 = 1;

    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT5CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift (value: 0)
     *          - B_0x1: Analog watchdog on channel transceivers value (after watchdog filter) (value: 1)
     */
        /** @brief Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift */
    constexpr std::uint32_t DFSDM_FLT5CR1_AWFSEL_B_0x0 = 0;
        /** @brief Analog watchdog on channel transceivers value (after watchdog filter) */
    constexpr std::uint32_t DFSDM_FLT5CR1_AWFSEL_B_0x1 = 1;

    /** @brief DFSDM_FLT5CR2 register */
    using DFSDM_FLT5CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x384, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable Please see the explanation of JEOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT5CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Injected end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Injected end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_JEOCIE_B_0x0 = 0;
        /** @brief Injected end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_JEOCIE_B_0x1 = 1;

    /** @brief Regular end of conversion interrupt enable Please see the explanation of REOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT5CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Regular end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Regular end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_REOCIE_B_0x0 = 0;
        /** @brief Regular end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_REOCIE_B_0x1 = 1;

    /** @brief Injected data overrun interrupt enable Please see the explanation of JOVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT5CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Injected data overrun interrupt is enabled (value: 1)
     */
        /** @brief Injected data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_JOVRIE_B_0x0 = 0;
        /** @brief Injected data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_JOVRIE_B_0x1 = 1;

    /** @brief Regular data overrun interrupt enable Please see the explanation of ROVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT5CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Regular data overrun interrupt is enabled (value: 1)
     */
        /** @brief Regular data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_ROVRIE_B_0x0 = 0;
        /** @brief Regular data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_ROVRIE_B_0x1 = 1;

    /** @brief Analog watchdog interrupt enable Please see the explanation of AWDF in DFSDM_FLTxISR. */
    using DFSDM_FLT5CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt is disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt is enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_AWDIE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_AWDIE_B_0x1 = 1;

    /** @brief Short-circuit detector interrupt enable Please see the explanation of SCDF[7:0] in DFSDM_FLTxISR. Note: SCDIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT5CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: short-circuit detector interrupt is disabled (value: 0)
     *          - B_0x1: short-circuit detector interrupt is enabled (value: 1)
     */
        /** @brief short-circuit detector interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_SCDIE_B_0x0 = 0;
        /** @brief short-circuit detector interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_SCDIE_B_0x1 = 1;

    /** @brief Clock absence interrupt enable Please see the explanation of CKABF[7:0] in DFSDM_FLTxISR. Note: CKABIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT5CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection of channel input clock absence interrupt is disabled (value: 0)
     *          - B_0x1: Detection of channel input clock absence interrupt is enabled (value: 1)
     */
        /** @brief Detection of channel input clock absence interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_CKABIE_B_0x0 = 0;
        /** @brief Detection of channel input clock absence interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT5CR2_CKABIE_B_0x1 = 1;

    /** @brief Extremes detector channel selection These bits select the input channels to be taken by the Extremes detector. EXCH[y] = 0: Extremes detector does not accept data from channel y EXCH[y] = 1: Extremes detector accepts data from channel y */
    using DFSDM_FLT5CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection These bits select the input channel to be guarded continuously by the analog watchdog. AWDCH[y] = 0: Analog watchdog is disabled on channel y AWDCH[y] = 1: Analog watchdog is enabled on channel y */
    using DFSDM_FLT5CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5ISR register */
    using DFSDM_FLT5ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x388, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxJDATAR. */
    using DFSDM_FLT5ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion has completed (value: 0)
     *          - B_0x1: An injected conversion has completed and its data may be read (value: 1)
     */
        /** @brief No injected conversion has completed */
    constexpr std::uint32_t DFSDM_FLT5ISR_JEOCF_B_0x0 = 0;
        /** @brief An injected conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT5ISR_JEOCF_B_0x1 = 1;

    /** @brief End of regular conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxRDATAR. */
    using DFSDM_FLT5ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion has completed (value: 0)
     *          - B_0x1: A regular conversion has completed and its data may be read (value: 1)
     */
        /** @brief No regular conversion has completed */
    constexpr std::uint32_t DFSDM_FLT5ISR_REOCF_B_0x0 = 0;
        /** @brief A regular conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT5ISR_REOCF_B_0x1 = 1;

    /** @brief Injected conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRJOVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT5ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion overrun has occurred (value: 0)
     *          - B_0x1: An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns (value: 1)
     */
        /** @brief No injected conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT5ISR_JOVRF_B_0x0 = 0;
        /** @brief An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT5ISR_JOVRF_B_0x1 = 1;

    /** @brief Regular conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRROVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT5ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion overrun has occurred (value: 0)
     *          - B_0x1: A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns (value: 1)
     */
        /** @brief No regular conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT5ISR_ROVRF_B_0x0 = 0;
        /** @brief A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT5ISR_ROVRF_B_0x1 = 1;

    /** @brief Analog watchdog This bit is set by hardware. It is cleared by software by clearing all source flag bits AWHTF[7:0] and AWLTF[7:0] in DFSDM_FLTxAWSR register (by writing '1' into the clear bits in DFSDM_FLTxAWCFR register). */
    using DFSDM_FLT5ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Analog watchdog event occurred (value: 0)
     *          - B_0x1: The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. (value: 1)
     */
        /** @brief No Analog watchdog event occurred */
    constexpr std::uint32_t DFSDM_FLT5ISR_AWDF_B_0x0 = 0;
        /** @brief The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. */
    constexpr std::uint32_t DFSDM_FLT5ISR_AWDF_B_0x1 = 1;

    /** @brief Injected conversion in progress status A request to start an injected conversion is ignored when JCIP=1. */
    using DFSDM_FLT5ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the injected channel group (neither by software nor by trigger) has been issued (value: 0)
     *          - B_0x1: The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection (value: 1)
     */
        /** @brief No request to convert the injected channel group (neither by software nor by trigger) has been issued */
    constexpr std::uint32_t DFSDM_FLT5ISR_JCIP_B_0x0 = 0;
        /** @brief The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection */
    constexpr std::uint32_t DFSDM_FLT5ISR_JCIP_B_0x1 = 1;

    /** @brief Regular conversion in progress status A request to start a regular conversion is ignored when RCIP=1. */
    using DFSDM_FLT5ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the regular channel has been issued (value: 0)
     *          - B_0x1: The conversion of the regular channel is in progress or a request for a regular conversion is pending (value: 1)
     */
        /** @brief No request to convert the regular channel has been issued */
    constexpr std::uint32_t DFSDM_FLT5ISR_RCIP_B_0x0 = 0;
        /** @brief The conversion of the regular channel is in progress or a request for a regular conversion is pending */
    constexpr std::uint32_t DFSDM_FLT5ISR_RCIP_B_0x1 = 1;

    /** @brief Clock absence flag CKABF[y]=0: Clock signal on channel y is present. CKABF[y]=1: Clock signal on channel y is not present. Given y bit is set by hardware when clock absence is detected on channel y. It is held at CKABF[y]=1 state by hardware when CHEN=0 (see DFSDM_CHyCFGR1 register). It is held at CKABF[y]=1 state by hardware when the transceiver is not yet synchronized.It can be cleared by software using the corresponding CLRCKABF[y] bit in the DFSDM_FLTxICR register. Note: CKABF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT5ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag SDCF[y]=0: No short-circuit detector event occurred on channel y SDCF[y]=1: The short-circuit detector counter reaches, on channel y, the value programmed in the DFSDM_CHyAWSCDR registers This bit is set by hardware. It can be cleared by software using the corresponding CLRSCDF[y] bit in the DFSDM_FLTxICR register. SCDF[y] is cleared also by hardware when CHEN[y] = 0 (given channel is disabled). Note: SCDF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT5ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5ICR register */
    using DFSDM_FLT5ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT5ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT5ICR_CLRJOVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT5ICR_CLRJOVRF_B_0x1 = 1;

    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT5ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT5ICR_CLRROVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT5ICR_CLRROVRF_B_0x1 = 1;

    /** @brief Clear the clock absence flag CLRCKABF[y]=0: Writing '0' has no effect CLRCKABF[y]=1: Writing '1' to position y clears the corresponding CKABF[y] bit in the DFSDM_FLTxISR register. When the transceiver is not yet synchronized, the clock absence flag is set and cannot be cleared by CLRCKABF[y]. Note: CLRCKABF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT5ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag CLRSCDF[y]=0: Writing '0' has no effect CLRSCDF[y]=1: Writing '1' to position y clears the corresponding SCDF[y] bit in the DFSDM_FLTxISR register Note: CLRSCDF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT5ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5JCHGR register */
    using DFSDM_FLT5JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x390, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection JCHG[y]=0: channel y is not part of the injected group JCHG[y]=1: channel y is part of the injected group If JSCAN=1, each of the selected channels is converted, one after another. The lowest channel (channel 0, if selected) is converted first and the sequence ends at the highest selected channel. If JSCAN=0, then only one channel is converted from the selected channels, and the channel selection is moved to the next channel. Writing JCHG, if JSCAN=0, resets the channel selection to the lowest selected channel. At least one channel must always be selected for the injected group. Writes causing all JCHG bits to be zero are ignored. */
    using DFSDM_FLT5JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5FCR register */
    using DFSDM_FLT5FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x394, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) from Sinc filter will be summed into one output data sample from the integrator. The output data rate from the integrator will be decreased by this number (additional data decimation ratio). This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If IOSR = 0, then the Integrator has no effect (Integrator bypass). 0- 255: The length of the Integrator in the range 1 - 256 (IOSR + 1). Defines how many samples */
    using DFSDM_FLT5FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) number is also the decimation ratio of the output data rate from filter. This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If FOSR = 0, then the filter has no effect (filter bypass). 0 - 1023: Defines the length of the Sinc type filter in the range 1 - 1024 (FOSR = FOSR[9:0] +1). This */
    using DFSDM_FLT5FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order 2: Sinc2 filter type 3: Sinc3 filter type 4: Sinc4 filter type 5: Sinc5 filter type 6-7: Reserved Sincx filter type transfer function: FastSinc filter type transfer function: This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT5FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_FLT5FCR_FORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_FLT5FCR_FORD_B_0x1 = 1;

    /** @brief DFSDM_FLT5JDATAR register */
    using DFSDM_FLT5JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x398, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted When each conversion of a channel in the injected group finishes, JDATACH[2:0] is updated to indicate which channel was converted. Thus, JDATA[23:0] holds the data that corresponds to the channel indicated by JDATACH[2:0]. */
    using DFSDM_FLT5JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data When each conversion of a channel in the injected group finishes, its resulting data is stored in this field. The data is valid when JEOCF=1. Reading this register clears the corresponding JEOCF. */
    using DFSDM_FLT5JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5RDATAR register */
    using DFSDM_FLT5RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x39C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted When each regular conversion finishes, RDATACH[2:0] is updated to indicate which channel was converted (because regular channel selection RCH[2:0] in DFSDM_FLTxCR1 register can be updated during regular conversion). Thus RDATA[23:0] holds the data that corresponds to the channel indicated by RDATACH[2:0]. */
    using DFSDM_FLT5RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data Regular data in RDATA[23:0] was delayed due to an injected channel trigger during the conversion */
    using DFSDM_FLT5RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data When each regular conversion finishes, its data is stored in this register. The data is valid when REOCF=1. Reading this register clears the corresponding REOCF. */
    using DFSDM_FLT5RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5AWHTR register */
    using DFSDM_FLT5AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event BKAWH[i] = 0: Break i signal is not assigned to an analog watchdog high threshold event BKAWH[i] = 1: Break i signal is assigned to an analog watchdog high threshold event */
    using DFSDM_FLT5AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold These bits are written by software to define the high threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), the higher 16 bits (AWHT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWHT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT5AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5AWLTR register */
    using DFSDM_FLT5AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event BKAWL[i] = 0: Break i signal is not assigned to an analog watchdog low threshold event BKAWL[i] = 1: Break i signal is assigned to an analog watchdog low threshold event */
    using DFSDM_FLT5AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold These bits are written by software to define the low threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), only the higher 16 bits (AWLT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWLT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT5AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5AWSR register */
    using DFSDM_FLT5AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag AWLTF[y]=1 indicates a low threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWLTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT5AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag AWHTF[y]=1 indicates a high threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWHTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT5AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5AWCFR register */
    using DFSDM_FLT5AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag CLRAWLTF[y]=0: Writing '0' has no effect CLRAWLTF[y]=1: Writing '1' to position y clears the corresponding AWLTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT5AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag CLRAWHTF[y]=0: Writing '0' has no effect CLRAWHTF[y]=1: Writing '1' to position y clears the corresponding AWHTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT5AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5EXMAX register */
    using DFSDM_FLT5EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel. These bits contains information about the channel on which the data is stored into EXMAX[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT5EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value These bits are set by hardware and indicate the highest value converted by DFSDM_FLTx. EXMAX[23:0] bits are reset to value (0x800000) by reading of this register. */
    using DFSDM_FLT5EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5EXMIN register */
    using DFSDM_FLT5EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel These bits contain information about the channel on which the data is stored into EXMIN[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT5EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value These bits are set by hardware and indicate the lowest value converted by DFSDM_FLTx. EXMIN[23:0] bits are reset to value (0x7FFFFF) by reading of this register. */
    using DFSDM_FLT5EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT5CNVTIMR register */
    using DFSDM_FLT5CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDMCLK The timer has an input clock from DFSDM clock (system clock fDFSDMCLK). Conversion time measurement is started on each conversion start and stopped when conversion finishes (interval between first and last serial sample). Only in case of filter bypass (FOSR[9:0] = 0) is the conversion time measurement stopped and CNVCNT[27:0] = 0. The counted time is: if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): CNVCNT = 0 (counting is stopped, conversion time: t = IOSR / fCKIN) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input (from internal ADC or from CPU/DMA write) Note: When conversion is interrupted (e.g. by disable/enable selected channel) the timer counts also this interruption time. */
    using DFSDM_FLT5CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6CR1 register */
    using DFSDM_FLT6CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLTx enable Data which are cleared by setting DFEN=0: register DFSDM_FLTxISR is set to the reset state register DFSDM_FLTxAWSR is set to the reset state */
    using DFSDM_FLT6CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. (value: 0)
     *          - B_0x1: DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. (value: 1)
     */
        /** @brief DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. */
    constexpr std::uint32_t DFSDM_FLT6CR1_DFEN_B_0x0 = 0;
        /** @brief DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. */
    constexpr std::uint32_t DFSDM_FLT6CR1_DFEN_B_0x1 = 1;

    /** @brief Start a conversion of the injected group of channels This bit is always read as '0'. */
    using DFSDM_FLT6CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect. (value: 0)
     *          - B_0x1: Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect. */
    constexpr std::uint32_t DFSDM_FLT6CR1_JSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT6CR1_JSWSTART_B_0x1 = 1;

    /** @brief Launch an injected conversion synchronously with the DFSDM_FLT0 JSWSTART trigger This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT6CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch an injected conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger (value: 1)
     */
        /** @brief Do not launch an injected conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT6CR1_JSYNC_B_0x0 = 0;
        /** @brief Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger */
    constexpr std::uint32_t DFSDM_FLT6CR1_JSYNC_B_0x1 = 1;

    /** @brief Scanning conversion mode for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Writing JCHG if JSCAN=0 resets the channel selection to the lowest selected channel. */
    using DFSDM_FLT6CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. (value: 0)
     *          - B_0x1: The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. (value: 1)
     */
        /** @brief One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. */
    constexpr std::uint32_t DFSDM_FLT6CR1_JSCAN_B_0x0 = 0;
        /** @brief The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. */
    constexpr std::uint32_t DFSDM_FLT6CR1_JSCAN_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the injected channel group This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT6CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read injected data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read injected data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT6CR1_JDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT6CR1_JDMAEN_B_0x1 = 1;

    /** @brief Trigger signal selection for launching injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Note: synchronous trigger has latency up to one fDFSDMCLK clock cycle (with deterministic jitter), asynchronous trigger has latency 2-3 fDFSDMCLK clock cycles (with jitter up to 1 cycle). DFSDM_FLTx 0x00	dfsdm_jtrg0 0x01	dfsdm_jtrg1 ... 0x1E	dfsdm_jtrg30 0x1F	dfsdm_jtrg31 Refer to . 0x0-0x1F: Trigger inputs selected by the following table (internal or external trigger). */
    using DFSDM_FLT6CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT6CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger detection is disabled (value: 0)
     *          - B_0x1: Each rising edge on the selected trigger makes a request to launch an injected conversion (value: 1)
     *          - B_0x2: Each falling edge on the selected trigger makes a request to launch an injected conversion (value: 2)
     *          - B_0x3: Both rising edges and falling edges on the selected trigger make requests to launch injected conversions (value: 3)
     */
        /** @brief Trigger detection is disabled */
    constexpr std::uint32_t DFSDM_FLT6CR1_JEXTEN_B_0x0 = 0;
        /** @brief Each rising edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT6CR1_JEXTEN_B_0x1 = 1;
        /** @brief Each falling edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT6CR1_JEXTEN_B_0x2 = 2;
        /** @brief Both rising edges and falling edges on the selected trigger make requests to launch injected conversions */
    constexpr std::uint32_t DFSDM_FLT6CR1_JEXTEN_B_0x3 = 3;

    /** @brief Software start of a conversion on the regular channel This bit is always read as '0'. */
    using DFSDM_FLT6CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT6CR1_RSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT6CR1_RSWSTART_B_0x1 = 1;

    /** @brief Continuous mode selection for regular conversions Writing '0' to this bit while a continuous regular conversion is already in progress stops the continuous mode immediately. */
    using DFSDM_FLT6CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The regular channel is converted just once for each conversion request (value: 0)
     *          - B_0x1: The regular channel is converted repeatedly after each conversion request (value: 1)
     */
        /** @brief The regular channel is converted just once for each conversion request */
    constexpr std::uint32_t DFSDM_FLT6CR1_RCONT_B_0x0 = 0;
        /** @brief The regular channel is converted repeatedly after each conversion request */
    constexpr std::uint32_t DFSDM_FLT6CR1_RCONT_B_0x1 = 1;

    /** @brief Launch regular conversion synchronously with DFSDM_FLT0 This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT6CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch a regular conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 (value: 1)
     */
        /** @brief Do not launch a regular conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT6CR1_RSYNC_B_0x0 = 0;
        /** @brief Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT6CR1_RSYNC_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the regular conversion This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT6CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read regular data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read regular data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT6CR1_RDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT6CR1_RDMAEN_B_0x1 = 1;

    /** @brief Regular channel selection ... 7: Channel 7 is selected as the regular channel Writing these bits when RCIP=1 takes effect when the next regular conversion begins. This is especially useful in continuous mode (when RCONT=1). It also affects regular conversions which are pending (due to ongoing injected conversion). */
    using DFSDM_FLT6CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel 0 is selected as the regular channel (value: 0)
     *          - B_0x1: Channel 1 is selected as the regular channel (value: 1)
     */
        /** @brief Channel 0 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT6CR1_RCH_B_0x0 = 0;
        /** @brief Channel 1 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT6CR1_RCH_B_0x1 = 1;

    /** @brief Fast conversion mode selection for regular conversions When converting a regular conversion in continuous mode, having enabled the fast mode causes each conversion (except the first) to execute faster than in standard mode. This bit has no effect on conversions which are not continuous. This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): t = IOSR / fCKIN (... but CNVCNT=0) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input. */
    using DFSDM_FLT6CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast conversion mode disabled (value: 0)
     *          - B_0x1: Fast conversion mode enabled (value: 1)
     */
        /** @brief Fast conversion mode disabled */
    constexpr std::uint32_t DFSDM_FLT6CR1_FAST_B_0x0 = 0;
        /** @brief Fast conversion mode enabled */
    constexpr std::uint32_t DFSDM_FLT6CR1_FAST_B_0x1 = 1;

    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT6CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift (value: 0)
     *          - B_0x1: Analog watchdog on channel transceivers value (after watchdog filter) (value: 1)
     */
        /** @brief Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift */
    constexpr std::uint32_t DFSDM_FLT6CR1_AWFSEL_B_0x0 = 0;
        /** @brief Analog watchdog on channel transceivers value (after watchdog filter) */
    constexpr std::uint32_t DFSDM_FLT6CR1_AWFSEL_B_0x1 = 1;

    /** @brief DFSDM_FLT6CR2 register */
    using DFSDM_FLT6CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable Please see the explanation of JEOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT6CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Injected end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Injected end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_JEOCIE_B_0x0 = 0;
        /** @brief Injected end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_JEOCIE_B_0x1 = 1;

    /** @brief Regular end of conversion interrupt enable Please see the explanation of REOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT6CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Regular end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Regular end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_REOCIE_B_0x0 = 0;
        /** @brief Regular end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_REOCIE_B_0x1 = 1;

    /** @brief Injected data overrun interrupt enable Please see the explanation of JOVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT6CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Injected data overrun interrupt is enabled (value: 1)
     */
        /** @brief Injected data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_JOVRIE_B_0x0 = 0;
        /** @brief Injected data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_JOVRIE_B_0x1 = 1;

    /** @brief Regular data overrun interrupt enable Please see the explanation of ROVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT6CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Regular data overrun interrupt is enabled (value: 1)
     */
        /** @brief Regular data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_ROVRIE_B_0x0 = 0;
        /** @brief Regular data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_ROVRIE_B_0x1 = 1;

    /** @brief Analog watchdog interrupt enable Please see the explanation of AWDF in DFSDM_FLTxISR. */
    using DFSDM_FLT6CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt is disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt is enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_AWDIE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_AWDIE_B_0x1 = 1;

    /** @brief Short-circuit detector interrupt enable Please see the explanation of SCDF[7:0] in DFSDM_FLTxISR. Note: SCDIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT6CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: short-circuit detector interrupt is disabled (value: 0)
     *          - B_0x1: short-circuit detector interrupt is enabled (value: 1)
     */
        /** @brief short-circuit detector interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_SCDIE_B_0x0 = 0;
        /** @brief short-circuit detector interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_SCDIE_B_0x1 = 1;

    /** @brief Clock absence interrupt enable Please see the explanation of CKABF[7:0] in DFSDM_FLTxISR. Note: CKABIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT6CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection of channel input clock absence interrupt is disabled (value: 0)
     *          - B_0x1: Detection of channel input clock absence interrupt is enabled (value: 1)
     */
        /** @brief Detection of channel input clock absence interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_CKABIE_B_0x0 = 0;
        /** @brief Detection of channel input clock absence interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT6CR2_CKABIE_B_0x1 = 1;

    /** @brief Extremes detector channel selection These bits select the input channels to be taken by the Extremes detector. EXCH[y] = 0: Extremes detector does not accept data from channel y EXCH[y] = 1: Extremes detector accepts data from channel y */
    using DFSDM_FLT6CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection These bits select the input channel to be guarded continuously by the analog watchdog. AWDCH[y] = 0: Analog watchdog is disabled on channel y AWDCH[y] = 1: Analog watchdog is enabled on channel y */
    using DFSDM_FLT6CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6ISR register */
    using DFSDM_FLT6ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x408, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxJDATAR. */
    using DFSDM_FLT6ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion has completed (value: 0)
     *          - B_0x1: An injected conversion has completed and its data may be read (value: 1)
     */
        /** @brief No injected conversion has completed */
    constexpr std::uint32_t DFSDM_FLT6ISR_JEOCF_B_0x0 = 0;
        /** @brief An injected conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT6ISR_JEOCF_B_0x1 = 1;

    /** @brief End of regular conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxRDATAR. */
    using DFSDM_FLT6ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion has completed (value: 0)
     *          - B_0x1: A regular conversion has completed and its data may be read (value: 1)
     */
        /** @brief No regular conversion has completed */
    constexpr std::uint32_t DFSDM_FLT6ISR_REOCF_B_0x0 = 0;
        /** @brief A regular conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT6ISR_REOCF_B_0x1 = 1;

    /** @brief Injected conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRJOVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT6ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion overrun has occurred (value: 0)
     *          - B_0x1: An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns (value: 1)
     */
        /** @brief No injected conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT6ISR_JOVRF_B_0x0 = 0;
        /** @brief An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT6ISR_JOVRF_B_0x1 = 1;

    /** @brief Regular conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRROVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT6ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion overrun has occurred (value: 0)
     *          - B_0x1: A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns (value: 1)
     */
        /** @brief No regular conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT6ISR_ROVRF_B_0x0 = 0;
        /** @brief A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT6ISR_ROVRF_B_0x1 = 1;

    /** @brief Analog watchdog This bit is set by hardware. It is cleared by software by clearing all source flag bits AWHTF[7:0] and AWLTF[7:0] in DFSDM_FLTxAWSR register (by writing '1' into the clear bits in DFSDM_FLTxAWCFR register). */
    using DFSDM_FLT6ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Analog watchdog event occurred (value: 0)
     *          - B_0x1: The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. (value: 1)
     */
        /** @brief No Analog watchdog event occurred */
    constexpr std::uint32_t DFSDM_FLT6ISR_AWDF_B_0x0 = 0;
        /** @brief The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. */
    constexpr std::uint32_t DFSDM_FLT6ISR_AWDF_B_0x1 = 1;

    /** @brief Injected conversion in progress status A request to start an injected conversion is ignored when JCIP=1. */
    using DFSDM_FLT6ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the injected channel group (neither by software nor by trigger) has been issued (value: 0)
     *          - B_0x1: The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection (value: 1)
     */
        /** @brief No request to convert the injected channel group (neither by software nor by trigger) has been issued */
    constexpr std::uint32_t DFSDM_FLT6ISR_JCIP_B_0x0 = 0;
        /** @brief The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection */
    constexpr std::uint32_t DFSDM_FLT6ISR_JCIP_B_0x1 = 1;

    /** @brief Regular conversion in progress status A request to start a regular conversion is ignored when RCIP=1. */
    using DFSDM_FLT6ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the regular channel has been issued (value: 0)
     *          - B_0x1: The conversion of the regular channel is in progress or a request for a regular conversion is pending (value: 1)
     */
        /** @brief No request to convert the regular channel has been issued */
    constexpr std::uint32_t DFSDM_FLT6ISR_RCIP_B_0x0 = 0;
        /** @brief The conversion of the regular channel is in progress or a request for a regular conversion is pending */
    constexpr std::uint32_t DFSDM_FLT6ISR_RCIP_B_0x1 = 1;

    /** @brief Clock absence flag CKABF[y]=0: Clock signal on channel y is present. CKABF[y]=1: Clock signal on channel y is not present. Given y bit is set by hardware when clock absence is detected on channel y. It is held at CKABF[y]=1 state by hardware when CHEN=0 (see DFSDM_CHyCFGR1 register). It is held at CKABF[y]=1 state by hardware when the transceiver is not yet synchronized.It can be cleared by software using the corresponding CLRCKABF[y] bit in the DFSDM_FLTxICR register. Note: CKABF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT6ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag SDCF[y]=0: No short-circuit detector event occurred on channel y SDCF[y]=1: The short-circuit detector counter reaches, on channel y, the value programmed in the DFSDM_CHyAWSCDR registers This bit is set by hardware. It can be cleared by software using the corresponding CLRSCDF[y] bit in the DFSDM_FLTxICR register. SCDF[y] is cleared also by hardware when CHEN[y] = 0 (given channel is disabled). Note: SCDF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT6ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6ICR register */
    using DFSDM_FLT6ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT6ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT6ICR_CLRJOVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT6ICR_CLRJOVRF_B_0x1 = 1;

    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT6ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT6ICR_CLRROVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT6ICR_CLRROVRF_B_0x1 = 1;

    /** @brief Clear the clock absence flag CLRCKABF[y]=0: Writing '0' has no effect CLRCKABF[y]=1: Writing '1' to position y clears the corresponding CKABF[y] bit in the DFSDM_FLTxISR register. When the transceiver is not yet synchronized, the clock absence flag is set and cannot be cleared by CLRCKABF[y]. Note: CLRCKABF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT6ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag CLRSCDF[y]=0: Writing '0' has no effect CLRSCDF[y]=1: Writing '1' to position y clears the corresponding SCDF[y] bit in the DFSDM_FLTxISR register Note: CLRSCDF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT6ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6JCHGR register */
    using DFSDM_FLT6JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection JCHG[y]=0: channel y is not part of the injected group JCHG[y]=1: channel y is part of the injected group If JSCAN=1, each of the selected channels is converted, one after another. The lowest channel (channel 0, if selected) is converted first and the sequence ends at the highest selected channel. If JSCAN=0, then only one channel is converted from the selected channels, and the channel selection is moved to the next channel. Writing JCHG, if JSCAN=0, resets the channel selection to the lowest selected channel. At least one channel must always be selected for the injected group. Writes causing all JCHG bits to be zero are ignored. */
    using DFSDM_FLT6JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6FCR register */
    using DFSDM_FLT6FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) from Sinc filter will be summed into one output data sample from the integrator. The output data rate from the integrator will be decreased by this number (additional data decimation ratio). This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If IOSR = 0, then the Integrator has no effect (Integrator bypass). 0- 255: The length of the Integrator in the range 1 - 256 (IOSR + 1). Defines how many samples */
    using DFSDM_FLT6FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) number is also the decimation ratio of the output data rate from filter. This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If FOSR = 0, then the filter has no effect (filter bypass). 0 - 1023: Defines the length of the Sinc type filter in the range 1 - 1024 (FOSR = FOSR[9:0] +1). This */
    using DFSDM_FLT6FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order 2: Sinc2 filter type 3: Sinc3 filter type 4: Sinc4 filter type 5: Sinc5 filter type 6-7: Reserved Sincx filter type transfer function: FastSinc filter type transfer function: This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT6FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_FLT6FCR_FORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_FLT6FCR_FORD_B_0x1 = 1;

    /** @brief DFSDM_FLT6JDATAR register */
    using DFSDM_FLT6JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted When each conversion of a channel in the injected group finishes, JDATACH[2:0] is updated to indicate which channel was converted. Thus, JDATA[23:0] holds the data that corresponds to the channel indicated by JDATACH[2:0]. */
    using DFSDM_FLT6JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data When each conversion of a channel in the injected group finishes, its resulting data is stored in this field. The data is valid when JEOCF=1. Reading this register clears the corresponding JEOCF. */
    using DFSDM_FLT6JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6RDATAR register */
    using DFSDM_FLT6RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted When each regular conversion finishes, RDATACH[2:0] is updated to indicate which channel was converted (because regular channel selection RCH[2:0] in DFSDM_FLTxCR1 register can be updated during regular conversion). Thus RDATA[23:0] holds the data that corresponds to the channel indicated by RDATACH[2:0]. */
    using DFSDM_FLT6RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data Regular data in RDATA[23:0] was delayed due to an injected channel trigger during the conversion */
    using DFSDM_FLT6RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data When each regular conversion finishes, its data is stored in this register. The data is valid when REOCF=1. Reading this register clears the corresponding REOCF. */
    using DFSDM_FLT6RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6AWHTR register */
    using DFSDM_FLT6AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event BKAWH[i] = 0: Break i signal is not assigned to an analog watchdog high threshold event BKAWH[i] = 1: Break i signal is assigned to an analog watchdog high threshold event */
    using DFSDM_FLT6AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold These bits are written by software to define the high threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), the higher 16 bits (AWHT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWHT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT6AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6AWLTR register */
    using DFSDM_FLT6AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x424, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event BKAWL[i] = 0: Break i signal is not assigned to an analog watchdog low threshold event BKAWL[i] = 1: Break i signal is assigned to an analog watchdog low threshold event */
    using DFSDM_FLT6AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold These bits are written by software to define the low threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), only the higher 16 bits (AWLT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWLT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT6AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6AWSR register */
    using DFSDM_FLT6AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x428, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag AWLTF[y]=1 indicates a low threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWLTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT6AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag AWHTF[y]=1 indicates a high threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWHTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT6AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6AWCFR register */
    using DFSDM_FLT6AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag CLRAWLTF[y]=0: Writing '0' has no effect CLRAWLTF[y]=1: Writing '1' to position y clears the corresponding AWLTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT6AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag CLRAWHTF[y]=0: Writing '0' has no effect CLRAWHTF[y]=1: Writing '1' to position y clears the corresponding AWHTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT6AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6EXMAX register */
    using DFSDM_FLT6EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x430, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel. These bits contains information about the channel on which the data is stored into EXMAX[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT6EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value These bits are set by hardware and indicate the highest value converted by DFSDM_FLTx. EXMAX[23:0] bits are reset to value (0x800000) by reading of this register. */
    using DFSDM_FLT6EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6EXMIN register */
    using DFSDM_FLT6EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x434, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel These bits contain information about the channel on which the data is stored into EXMIN[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT6EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value These bits are set by hardware and indicate the lowest value converted by DFSDM_FLTx. EXMIN[23:0] bits are reset to value (0x7FFFFF) by reading of this register. */
    using DFSDM_FLT6EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT6CNVTIMR register */
    using DFSDM_FLT6CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x438, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDMCLK The timer has an input clock from DFSDM clock (system clock fDFSDMCLK). Conversion time measurement is started on each conversion start and stopped when conversion finishes (interval between first and last serial sample). Only in case of filter bypass (FOSR[9:0] = 0) is the conversion time measurement stopped and CNVCNT[27:0] = 0. The counted time is: if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): CNVCNT = 0 (counting is stopped, conversion time: t = IOSR / fCKIN) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input (from internal ADC or from CPU/DMA write) Note: When conversion is interrupted (e.g. by disable/enable selected channel) the timer counts also this interruption time. */
    using DFSDM_FLT6CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7CR1 register */
    using DFSDM_FLT7CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x480, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLTx enable Data which are cleared by setting DFEN=0: register DFSDM_FLTxISR is set to the reset state register DFSDM_FLTxAWSR is set to the reset state */
    using DFSDM_FLT7CR1_DFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. (value: 0)
     *          - B_0x1: DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. (value: 1)
     */
        /** @brief DFSDM_FLTx is disabled. All conversions of given DFSDM_FLTx are stopped immediately and all DFSDM_FLTx functions are stopped. */
    constexpr std::uint32_t DFSDM_FLT7CR1_DFEN_B_0x0 = 0;
        /** @brief DFSDM_FLTx is enabled. If DFSDM_FLTx is enabled, then DFSDM_FLTx starts operating according to its setting. */
    constexpr std::uint32_t DFSDM_FLT7CR1_DFEN_B_0x1 = 1;

    /** @brief Start a conversion of the injected group of channels This bit is always read as '0'. */
    using DFSDM_FLT7CR1_JSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect. (value: 0)
     *          - B_0x1: Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect. */
    constexpr std::uint32_t DFSDM_FLT7CR1_JSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to convert the channels in the injected conversion group, causing JCIP to become '1' at the same time. If JCIP=1 already, then writing to JSWSTART has no effect. Writing '1' has no effect if JSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT7CR1_JSWSTART_B_0x1 = 1;

    /** @brief Launch an injected conversion synchronously with the DFSDM_FLT0 JSWSTART trigger This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT7CR1_JSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch an injected conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger (value: 1)
     */
        /** @brief Do not launch an injected conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT7CR1_JSYNC_B_0x0 = 0;
        /** @brief Launch an injected conversion in this DFSDM_FLTx at the very moment when an injected conversion is launched in DFSDM_FLT0 by its JSWSTART trigger */
    constexpr std::uint32_t DFSDM_FLT7CR1_JSYNC_B_0x1 = 1;

    /** @brief Scanning conversion mode for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Writing JCHG if JSCAN=0 resets the channel selection to the lowest selected channel. */
    using DFSDM_FLT7CR1_JSCAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. (value: 0)
     *          - B_0x1: The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. (value: 1)
     */
        /** @brief One channel conversion is performed from the injected channel group and next the selected channel from this group is selected. */
    constexpr std::uint32_t DFSDM_FLT7CR1_JSCAN_B_0x0 = 0;
        /** @brief The series of conversions for the injected group channels is executed, starting over with the lowest selected channel. */
    constexpr std::uint32_t DFSDM_FLT7CR1_JSCAN_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the injected channel group This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT7CR1_JDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read injected data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read injected data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT7CR1_JDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read injected data */
    constexpr std::uint32_t DFSDM_FLT7CR1_JDMAEN_B_0x1 = 1;

    /** @brief Trigger signal selection for launching injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). Note: synchronous trigger has latency up to one fDFSDMCLK clock cycle (with deterministic jitter), asynchronous trigger has latency 2-3 fDFSDMCLK clock cycles (with jitter up to 1 cycle). DFSDM_FLTx 0x00	dfsdm_jtrg0 0x01	dfsdm_jtrg1 ... 0x1E	dfsdm_jtrg30 0x1F	dfsdm_jtrg31 Refer to . 0x0-0x1F: Trigger inputs selected by the following table (internal or external trigger). */
    using DFSDM_FLT7CR1_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger enable and trigger edge selection for injected conversions This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT7CR1_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger detection is disabled (value: 0)
     *          - B_0x1: Each rising edge on the selected trigger makes a request to launch an injected conversion (value: 1)
     *          - B_0x2: Each falling edge on the selected trigger makes a request to launch an injected conversion (value: 2)
     *          - B_0x3: Both rising edges and falling edges on the selected trigger make requests to launch injected conversions (value: 3)
     */
        /** @brief Trigger detection is disabled */
    constexpr std::uint32_t DFSDM_FLT7CR1_JEXTEN_B_0x0 = 0;
        /** @brief Each rising edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT7CR1_JEXTEN_B_0x1 = 1;
        /** @brief Each falling edge on the selected trigger makes a request to launch an injected conversion */
    constexpr std::uint32_t DFSDM_FLT7CR1_JEXTEN_B_0x2 = 2;
        /** @brief Both rising edges and falling edges on the selected trigger make requests to launch injected conversions */
    constexpr std::uint32_t DFSDM_FLT7CR1_JEXTEN_B_0x3 = 3;

    /** @brief Software start of a conversion on the regular channel This bit is always read as '0'. */
    using DFSDM_FLT7CR1_RSWSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT7CR1_RSWSTART_B_0x0 = 0;
        /** @brief Writing '1' makes a request to start a conversion on the regular channel and causes RCIP to become '1'. If RCIP=1 already, writing to RSWSTART has no effect. Writing '1' has no effect if RSYNC=1. */
    constexpr std::uint32_t DFSDM_FLT7CR1_RSWSTART_B_0x1 = 1;

    /** @brief Continuous mode selection for regular conversions Writing '0' to this bit while a continuous regular conversion is already in progress stops the continuous mode immediately. */
    using DFSDM_FLT7CR1_RCONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The regular channel is converted just once for each conversion request (value: 0)
     *          - B_0x1: The regular channel is converted repeatedly after each conversion request (value: 1)
     */
        /** @brief The regular channel is converted just once for each conversion request */
    constexpr std::uint32_t DFSDM_FLT7CR1_RCONT_B_0x0 = 0;
        /** @brief The regular channel is converted repeatedly after each conversion request */
    constexpr std::uint32_t DFSDM_FLT7CR1_RCONT_B_0x1 = 1;

    /** @brief Launch regular conversion synchronously with DFSDM_FLT0 This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT7CR1_RSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not launch a regular conversion synchronously with DFSDM_FLT0 (value: 0)
     *          - B_0x1: Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 (value: 1)
     */
        /** @brief Do not launch a regular conversion synchronously with DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT7CR1_RSYNC_B_0x0 = 0;
        /** @brief Launch a regular conversion in this DFSDM_FLTx at the very moment when a regular conversion is launched in DFSDM_FLT0 */
    constexpr std::uint32_t DFSDM_FLT7CR1_RSYNC_B_0x1 = 1;

    /** @brief DMA channel enabled to read data for the regular conversion This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT7CR1_RDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The DMA channel is not enabled to read regular data (value: 0)
     *          - B_0x1: The DMA channel is enabled to read regular data (value: 1)
     */
        /** @brief The DMA channel is not enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT7CR1_RDMAEN_B_0x0 = 0;
        /** @brief The DMA channel is enabled to read regular data */
    constexpr std::uint32_t DFSDM_FLT7CR1_RDMAEN_B_0x1 = 1;

    /** @brief Regular channel selection ... 7: Channel 7 is selected as the regular channel Writing these bits when RCIP=1 takes effect when the next regular conversion begins. This is especially useful in continuous mode (when RCONT=1). It also affects regular conversions which are pending (due to ongoing injected conversion). */
    using DFSDM_FLT7CR1_RCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel 0 is selected as the regular channel (value: 0)
     *          - B_0x1: Channel 1 is selected as the regular channel (value: 1)
     */
        /** @brief Channel 0 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT7CR1_RCH_B_0x0 = 0;
        /** @brief Channel 1 is selected as the regular channel */
    constexpr std::uint32_t DFSDM_FLT7CR1_RCH_B_0x1 = 1;

    /** @brief Fast conversion mode selection for regular conversions When converting a regular conversion in continuous mode, having enabled the fast mode causes each conversion (except the first) to execute faster than in standard mode. This bit has no effect on conversions which are not continuous. This bit can be modified only when DFEN=0 (DFSDM_FLTxCR1). if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): t = IOSR / fCKIN (... but CNVCNT=0) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input. */
    using DFSDM_FLT7CR1_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast conversion mode disabled (value: 0)
     *          - B_0x1: Fast conversion mode enabled (value: 1)
     */
        /** @brief Fast conversion mode disabled */
    constexpr std::uint32_t DFSDM_FLT7CR1_FAST_B_0x0 = 0;
        /** @brief Fast conversion mode enabled */
    constexpr std::uint32_t DFSDM_FLT7CR1_FAST_B_0x1 = 1;

    /** @brief Analog watchdog fast mode select */
    using DFSDM_FLT7CR1_AWFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift (value: 0)
     *          - B_0x1: Analog watchdog on channel transceivers value (after watchdog filter) (value: 1)
     */
        /** @brief Analog watchdog on data output value (after the digital filter). The comparison is done after offset correction and shift */
    constexpr std::uint32_t DFSDM_FLT7CR1_AWFSEL_B_0x0 = 0;
        /** @brief Analog watchdog on channel transceivers value (after watchdog filter) */
    constexpr std::uint32_t DFSDM_FLT7CR1_AWFSEL_B_0x1 = 1;

    /** @brief DFSDM_FLT7CR2 register */
    using DFSDM_FLT7CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x484, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected end of conversion interrupt enable Please see the explanation of JEOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT7CR2_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Injected end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Injected end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_JEOCIE_B_0x0 = 0;
        /** @brief Injected end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_JEOCIE_B_0x1 = 1;

    /** @brief Regular end of conversion interrupt enable Please see the explanation of REOCF in DFSDM_FLTxISR. */
    using DFSDM_FLT7CR2_REOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular end of conversion interrupt is disabled (value: 0)
     *          - B_0x1: Regular end of conversion interrupt is enabled (value: 1)
     */
        /** @brief Regular end of conversion interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_REOCIE_B_0x0 = 0;
        /** @brief Regular end of conversion interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_REOCIE_B_0x1 = 1;

    /** @brief Injected data overrun interrupt enable Please see the explanation of JOVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT7CR2_JOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Injected data overrun interrupt is enabled (value: 1)
     */
        /** @brief Injected data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_JOVRIE_B_0x0 = 0;
        /** @brief Injected data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_JOVRIE_B_0x1 = 1;

    /** @brief Regular data overrun interrupt enable Please see the explanation of ROVRF in DFSDM_FLTxISR. */
    using DFSDM_FLT7CR2_ROVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular data overrun interrupt is disabled (value: 0)
     *          - B_0x1: Regular data overrun interrupt is enabled (value: 1)
     */
        /** @brief Regular data overrun interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_ROVRIE_B_0x0 = 0;
        /** @brief Regular data overrun interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_ROVRIE_B_0x1 = 1;

    /** @brief Analog watchdog interrupt enable Please see the explanation of AWDF in DFSDM_FLTxISR. */
    using DFSDM_FLT7CR2_AWDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt is disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt is enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_AWDIE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_AWDIE_B_0x1 = 1;

    /** @brief Short-circuit detector interrupt enable Please see the explanation of SCDF[7:0] in DFSDM_FLTxISR. Note: SCDIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT7CR2_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: short-circuit detector interrupt is disabled (value: 0)
     *          - B_0x1: short-circuit detector interrupt is enabled (value: 1)
     */
        /** @brief short-circuit detector interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_SCDIE_B_0x0 = 0;
        /** @brief short-circuit detector interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_SCDIE_B_0x1 = 1;

    /** @brief Clock absence interrupt enable Please see the explanation of CKABF[7:0] in DFSDM_FLTxISR. Note: CKABIE is present only in DFSDM_FLT0CR2 register (filter x=0) */
    using DFSDM_FLT7CR2_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection of channel input clock absence interrupt is disabled (value: 0)
     *          - B_0x1: Detection of channel input clock absence interrupt is enabled (value: 1)
     */
        /** @brief Detection of channel input clock absence interrupt is disabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_CKABIE_B_0x0 = 0;
        /** @brief Detection of channel input clock absence interrupt is enabled */
    constexpr std::uint32_t DFSDM_FLT7CR2_CKABIE_B_0x1 = 1;

    /** @brief Extremes detector channel selection These bits select the input channels to be taken by the Extremes detector. EXCH[y] = 0: Extremes detector does not accept data from channel y EXCH[y] = 1: Extremes detector accepts data from channel y */
    using DFSDM_FLT7CR2_EXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection These bits select the input channel to be guarded continuously by the analog watchdog. AWDCH[y] = 0: Analog watchdog is disabled on channel y AWDCH[y] = 1: Analog watchdog is enabled on channel y */
    using DFSDM_FLT7CR2_AWDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7ISR register */
    using DFSDM_FLT7ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x488, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxJDATAR. */
    using DFSDM_FLT7ISR_JEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion has completed (value: 0)
     *          - B_0x1: An injected conversion has completed and its data may be read (value: 1)
     */
        /** @brief No injected conversion has completed */
    constexpr std::uint32_t DFSDM_FLT7ISR_JEOCF_B_0x0 = 0;
        /** @brief An injected conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT7ISR_JEOCF_B_0x1 = 1;

    /** @brief End of regular conversion flag This bit is set by hardware. It is cleared when the software or DMA reads DFSDM_FLTxRDATAR. */
    using DFSDM_FLT7ISR_REOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion has completed (value: 0)
     *          - B_0x1: A regular conversion has completed and its data may be read (value: 1)
     */
        /** @brief No regular conversion has completed */
    constexpr std::uint32_t DFSDM_FLT7ISR_REOCF_B_0x0 = 0;
        /** @brief A regular conversion has completed and its data may be read */
    constexpr std::uint32_t DFSDM_FLT7ISR_REOCF_B_0x1 = 1;

    /** @brief Injected conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRJOVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT7ISR_JOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected conversion overrun has occurred (value: 0)
     *          - B_0x1: An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns (value: 1)
     */
        /** @brief No injected conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT7ISR_JOVRF_B_0x0 = 0;
        /** @brief An injected conversion overrun has occurred, which means that an injected conversion finished while JEOCF was already '1'. JDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT7ISR_JOVRF_B_0x1 = 1;

    /** @brief Regular conversion overrun flag This bit is set by hardware. It can be cleared by software using the CLRROVRF bit in the DFSDM_FLTxICR register. */
    using DFSDM_FLT7ISR_ROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No regular conversion overrun has occurred (value: 0)
     *          - B_0x1: A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns (value: 1)
     */
        /** @brief No regular conversion overrun has occurred */
    constexpr std::uint32_t DFSDM_FLT7ISR_ROVRF_B_0x0 = 0;
        /** @brief A regular conversion overrun has occurred, which means that a regular conversion finished while REOCF was already '1'. RDATAR is not affected by overruns */
    constexpr std::uint32_t DFSDM_FLT7ISR_ROVRF_B_0x1 = 1;

    /** @brief Analog watchdog This bit is set by hardware. It is cleared by software by clearing all source flag bits AWHTF[7:0] and AWLTF[7:0] in DFSDM_FLTxAWSR register (by writing '1' into the clear bits in DFSDM_FLTxAWCFR register). */
    using DFSDM_FLT7ISR_AWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Analog watchdog event occurred (value: 0)
     *          - B_0x1: The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. (value: 1)
     */
        /** @brief No Analog watchdog event occurred */
    constexpr std::uint32_t DFSDM_FLT7ISR_AWDF_B_0x0 = 0;
        /** @brief The analog watchdog block detected voltage which crosses the value programmed in the DFSDM_FLTxAWLTR or DFSDM_FLTxAWHTR registers. */
    constexpr std::uint32_t DFSDM_FLT7ISR_AWDF_B_0x1 = 1;

    /** @brief Injected conversion in progress status A request to start an injected conversion is ignored when JCIP=1. */
    using DFSDM_FLT7ISR_JCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the injected channel group (neither by software nor by trigger) has been issued (value: 0)
     *          - B_0x1: The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection (value: 1)
     */
        /** @brief No request to convert the injected channel group (neither by software nor by trigger) has been issued */
    constexpr std::uint32_t DFSDM_FLT7ISR_JCIP_B_0x0 = 0;
        /** @brief The conversion of the injected channel group is in progress or a request for a injected conversion is pending, due either to '1' being written to JSWSTART or to a trigger detection */
    constexpr std::uint32_t DFSDM_FLT7ISR_JCIP_B_0x1 = 1;

    /** @brief Regular conversion in progress status A request to start a regular conversion is ignored when RCIP=1. */
    using DFSDM_FLT7ISR_RCIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No request to convert the regular channel has been issued (value: 0)
     *          - B_0x1: The conversion of the regular channel is in progress or a request for a regular conversion is pending (value: 1)
     */
        /** @brief No request to convert the regular channel has been issued */
    constexpr std::uint32_t DFSDM_FLT7ISR_RCIP_B_0x0 = 0;
        /** @brief The conversion of the regular channel is in progress or a request for a regular conversion is pending */
    constexpr std::uint32_t DFSDM_FLT7ISR_RCIP_B_0x1 = 1;

    /** @brief Clock absence flag CKABF[y]=0: Clock signal on channel y is present. CKABF[y]=1: Clock signal on channel y is not present. Given y bit is set by hardware when clock absence is detected on channel y. It is held at CKABF[y]=1 state by hardware when CHEN=0 (see DFSDM_CHyCFGR1 register). It is held at CKABF[y]=1 state by hardware when the transceiver is not yet synchronized.It can be cleared by software using the corresponding CLRCKABF[y] bit in the DFSDM_FLTxICR register. Note: CKABF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT7ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief short-circuit detector flag SDCF[y]=0: No short-circuit detector event occurred on channel y SDCF[y]=1: The short-circuit detector counter reaches, on channel y, the value programmed in the DFSDM_CHyAWSCDR registers This bit is set by hardware. It can be cleared by software using the corresponding CLRSCDF[y] bit in the DFSDM_FLTxICR register. SCDF[y] is cleared also by hardware when CHEN[y] = 0 (given channel is disabled). Note: SCDF[7:0] is present only in DFSDM_FLT0ISR register (filter x=0) */
    using DFSDM_FLT7ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7ICR register */
    using DFSDM_FLT7ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the injected conversion overrun flag */
    using DFSDM_FLT7ICR_CLRJOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT7ICR_CLRJOVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the JOVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT7ICR_CLRJOVRF_B_0x1 = 1;

    /** @brief Clear the regular conversion overrun flag */
    using DFSDM_FLT7ICR_CLRROVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' has no effect (value: 0)
     *          - B_0x1: Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register (value: 1)
     */
        /** @brief Writing '0' has no effect */
    constexpr std::uint32_t DFSDM_FLT7ICR_CLRROVRF_B_0x0 = 0;
        /** @brief Writing '1' clears the ROVRF bit in the DFSDM_FLTxISR register */
    constexpr std::uint32_t DFSDM_FLT7ICR_CLRROVRF_B_0x1 = 1;

    /** @brief Clear the clock absence flag CLRCKABF[y]=0: Writing '0' has no effect CLRCKABF[y]=1: Writing '1' to position y clears the corresponding CKABF[y] bit in the DFSDM_FLTxISR register. When the transceiver is not yet synchronized, the clock absence flag is set and cannot be cleared by CLRCKABF[y]. Note: CLRCKABF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT7ICR_CLRCKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the short-circuit detector flag CLRSCDF[y]=0: Writing '0' has no effect CLRSCDF[y]=1: Writing '1' to position y clears the corresponding SCDF[y] bit in the DFSDM_FLTxISR register Note: CLRSCDF[7:0] is present only in DFSDM_FLT0ICR register (filter x=0) */
    using DFSDM_FLT7ICR_CLRSCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7JCHGR register */
    using DFSDM_FLT7JCHGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x490, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel group selection JCHG[y]=0: channel y is not part of the injected group JCHG[y]=1: channel y is part of the injected group If JSCAN=1, each of the selected channels is converted, one after another. The lowest channel (channel 0, if selected) is converted first and the sequence ends at the highest selected channel. If JSCAN=0, then only one channel is converted from the selected channels, and the channel selection is moved to the next channel. Writing JCHG, if JSCAN=0, resets the channel selection to the lowest selected channel. At least one channel must always be selected for the injected group. Writes causing all JCHG bits to be zero are ignored. */
    using DFSDM_FLT7JCHGR_JCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7FCR register */
    using DFSDM_FLT7FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x494, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator oversampling ratio (averaging length) from Sinc filter will be summed into one output data sample from the integrator. The output data rate from the integrator will be decreased by this number (additional data decimation ratio). This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If IOSR = 0, then the Integrator has no effect (Integrator bypass). 0- 255: The length of the Integrator in the range 1 - 256 (IOSR + 1). Defines how many samples */
    using DFSDM_FLT7FCR_IOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter oversampling ratio (decimation rate) number is also the decimation ratio of the output data rate from filter. This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1) Note: If FOSR = 0, then the filter has no effect (filter bypass). 0 - 1023: Defines the length of the Sinc type filter in the range 1 - 1024 (FOSR = FOSR[9:0] +1). This */
    using DFSDM_FLT7FCR_FOSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sinc filter order 2: Sinc2 filter type 3: Sinc3 filter type 4: Sinc4 filter type 5: Sinc5 filter type 6-7: Reserved Sincx filter type transfer function: FastSinc filter type transfer function: This bit can only be modified when DFEN=0 (DFSDM_FLTxCR1). */
    using DFSDM_FLT7FCR_FORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sinc1 filter type (value: 1)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t DFSDM_FLT7FCR_FORD_B_0x0 = 0;
        /** @brief Sinc1 filter type */
    constexpr std::uint32_t DFSDM_FLT7FCR_FORD_B_0x1 = 1;

    /** @brief DFSDM_FLT7JDATAR register */
    using DFSDM_FLT7JDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x498, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel most recently converted When each conversion of a channel in the injected group finishes, JDATACH[2:0] is updated to indicate which channel was converted. Thus, JDATA[23:0] holds the data that corresponds to the channel indicated by JDATACH[2:0]. */
    using DFSDM_FLT7JDATAR_JDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected group conversion data When each conversion of a channel in the injected group finishes, its resulting data is stored in this field. The data is valid when JEOCF=1. Reading this register clears the corresponding JEOCF. */
    using DFSDM_FLT7JDATAR_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7RDATAR register */
    using DFSDM_FLT7RDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x49C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel most recently converted When each regular conversion finishes, RDATACH[2:0] is updated to indicate which channel was converted (because regular channel selection RCH[2:0] in DFSDM_FLTxCR1 register can be updated during regular conversion). Thus RDATA[23:0] holds the data that corresponds to the channel indicated by RDATACH[2:0]. */
    using DFSDM_FLT7RDATAR_RDATACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel pending data Regular data in RDATA[23:0] was delayed due to an injected channel trigger during the conversion */
    using DFSDM_FLT7RDATAR_RPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel conversion data When each regular conversion finishes, its data is stored in this register. The data is valid when REOCF=1. Reading this register clears the corresponding REOCF. */
    using DFSDM_FLT7RDATAR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7AWHTR register */
    using DFSDM_FLT7AWHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog high threshold event BKAWH[i] = 0: Break i signal is not assigned to an analog watchdog high threshold event BKAWH[i] = 1: Break i signal is assigned to an analog watchdog high threshold event */
    using DFSDM_FLT7AWHTR_BKAWH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold These bits are written by software to define the high threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), the higher 16 bits (AWHT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWHT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT7AWHTR_AWHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7AWLTR register */
    using DFSDM_FLT7AWLTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break signal assignment to analog watchdog low threshold event BKAWL[i] = 0: Break i signal is not assigned to an analog watchdog low threshold event BKAWL[i] = 1: Break i signal is assigned to an analog watchdog low threshold event */
    using DFSDM_FLT7AWLTR_BKAWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold These bits are written by software to define the low threshold for the analog watchdog. Note: In case channel transceivers monitor (AWFSEL=1), only the higher 16 bits (AWLT[23:8]) define the 16-bit threshold as compared with the analog watchdog filter output (because data coming from the analog watchdog filter are up to a 16-bit resolution). Bits AWLT[7:0] are not taken into comparison in this case. */
    using DFSDM_FLT7AWLTR_AWLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7AWSR register */
    using DFSDM_FLT7AWSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog low threshold flag AWLTF[y]=1 indicates a low threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWLTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT7AWSR_AWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog high threshold flag AWHTF[y]=1 indicates a high threshold error on channel y. It is set by hardware. It can be cleared by software using the corresponding CLRAWHTF[y] bit in the DFSDM_FLTxAWCFR register. */
    using DFSDM_FLT7AWSR_AWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7AWCFR register */
    using DFSDM_FLT7AWCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog low threshold flag CLRAWLTF[y]=0: Writing '0' has no effect CLRAWLTF[y]=1: Writing '1' to position y clears the corresponding AWLTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT7AWCFR_CLRAWLTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the analog watchdog high threshold flag CLRAWHTF[y]=0: Writing '0' has no effect CLRAWHTF[y]=1: Writing '1' to position y clears the corresponding AWHTF[y] bit in the DFSDM_FLTxAWSR register */
    using DFSDM_FLT7AWCFR_CLRAWHTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7EXMAX register */
    using DFSDM_FLT7EXMAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum data channel. These bits contains information about the channel on which the data is stored into EXMAX[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT7EXMAX_EXMAXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector maximum value These bits are set by hardware and indicate the highest value converted by DFSDM_FLTx. EXMAX[23:0] bits are reset to value (0x800000) by reading of this register. */
    using DFSDM_FLT7EXMAX_EXMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7EXMIN register */
    using DFSDM_FLT7EXMIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum data channel These bits contain information about the channel on which the data is stored into EXMIN[23:0]. Bits are cleared by reading of this register. */
    using DFSDM_FLT7EXMIN_EXMINCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extremes detector minimum value These bits are set by hardware and indicate the lowest value converted by DFSDM_FLTx. EXMIN[23:0] bits are reset to value (0x7FFFFF) by reading of this register. */
    using DFSDM_FLT7EXMIN_EXMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM_FLT7CNVTIMR register */
    using DFSDM_FLT7CNVTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDMCLK The timer has an input clock from DFSDM clock (system clock fDFSDMCLK). Conversion time measurement is started on each conversion start and stopped when conversion finishes (interval between first and last serial sample). Only in case of filter bypass (FOSR[9:0] = 0) is the conversion time measurement stopped and CNVCNT[27:0] = 0. The counted time is: if FAST=0 (or first conversion in continuous mode if FAST=1): t = [FOSR * (IOSR-1 + FORD) + FORD] / fCKIN	..... for Sincx filters t = [FOSR * (IOSR-1 + 4) + 2] / fCKIN	..... for FastSinc filter if FAST=1 in continuous mode (except first conversion): t = [FOSR * IOSR] / fCKIN in case if FOSR = FOSR[9:0]+1 = 1 (filter bypassed, active only integrator): CNVCNT = 0 (counting is stopped, conversion time: t = IOSR / fCKIN) where: fCKIN is the channel input clock frequency (on given channel CKINy pin) or input data rate in case of parallel data input (from internal ADC or from CPU/DMA write) Note: When conversion is interrupted (e.g. by disable/enable selected channel) the timer counts also this interruption time. */
    using DFSDM_FLT7CNVTIMR_CNVCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
