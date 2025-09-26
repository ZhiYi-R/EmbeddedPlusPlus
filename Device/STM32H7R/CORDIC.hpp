/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7R_CORDIC_HPP
#define EMBEDDED_PP_STM32H7R_CORDIC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief CORDIC register block */
namespace STM32H7R::CORDIC {

    /** @brief CORDIC control/status register */
    using CORDIC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Function 10 to 15: reserved */
    using CORDIC_CSR_FUNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cosine (value: 0)
     *          - B_0x1: Sine (value: 1)
     */
        /** @brief Cosine */
    constexpr std::uint32_t CORDIC_CSR_FUNC_B_0x0 = 0;
        /** @brief Sine */
    constexpr std::uint32_t CORDIC_CSR_FUNC_B_0x1 = 1;

    /** @brief Precision required (number of iterations) 1 to 15: (Number of iterations)/4 To determine the number of iterations needed for a given accuracy refer to Table 193. Note that for most functions, the recommended range for this field is 3 to 6. */
    using CORDIC_CSR_PRECISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scaling factor The value of this field indicates the scaling factor applied to the arguments and/or results. A value n implies that the arguments have been multiplied by a factor 2<sup>-n</sup>, and/or the results need to be multiplied by 2<sup>n</sup>. Refer to Section 24.3.2 for the applicability of the scaling factor for each function and the appropriate range. */
    using CORDIC_CSR_SCALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt. This bit is set and cleared by software. A read returns the current state of the bit. */
    using CORDIC_CSR_IEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No interrupt requests are generated. (value: 0)
     *          - B_0x1: Enabled. An interrupt request is generated whenever the RRDY flag is set. (value: 1)
     */
        /** @brief Disabled. No interrupt requests are generated. */
    constexpr std::uint32_t CORDIC_CSR_IEN_B_0x0 = 0;
        /** @brief Enabled. An interrupt request is generated whenever the RRDY flag is set. */
    constexpr std::uint32_t CORDIC_CSR_IEN_B_0x1 = 1;

    /** @brief Enable DMA read channel This bit is set and cleared by software. A read returns the current state of the bit. */
    using CORDIC_CSR_DMAREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No DMA read requests are generated. (value: 0)
     *          - B_0x1: Enabled. Requests are generated on the DMA read channel whenever the RRDY flag is set. (value: 1)
     */
        /** @brief Disabled. No DMA read requests are generated. */
    constexpr std::uint32_t CORDIC_CSR_DMAREN_B_0x0 = 0;
        /** @brief Enabled. Requests are generated on the DMA read channel whenever the RRDY flag is set. */
    constexpr std::uint32_t CORDIC_CSR_DMAREN_B_0x1 = 1;

    /** @brief Enable DMA write channel This bit is set and cleared by software. A read returns the current state of the bit. */
    using CORDIC_CSR_DMAWEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No DMA write requests are generated. (value: 0)
     *          - B_0x1: Enabled. Requests are generated on the DMA write channel whenever no operation is pending (value: 1)
     */
        /** @brief Disabled. No DMA write requests are generated. */
    constexpr std::uint32_t CORDIC_CSR_DMAWEN_B_0x0 = 0;
        /** @brief Enabled. Requests are generated on the DMA write channel whenever no operation is pending */
    constexpr std::uint32_t CORDIC_CSR_DMAWEN_B_0x1 = 1;

    /** @brief Number of results in the CORDIC_RDATA register Reads return the current state of the bit. */
    using CORDIC_CSR_NRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only one 32-bit value (or two 16-bit values if RESSIZE = 1) is transferred to the CORDIC_RDATA register on completion of the next calculation. One read from CORDIC_RDATA resets the RRDY flag. (value: 0)
     *          - B_0x1: Two 32-bit values are transferred to the CORDIC_RDATA register on completion of the next calculation. Two reads from CORDIC_RDATA are necessary to reset the RRDY flag. (value: 1)
     */
        /** @brief Only one 32-bit value (or two 16-bit values if RESSIZE = 1) is transferred to the CORDIC_RDATA register on completion of the next calculation. One read from CORDIC_RDATA resets the RRDY flag. */
    constexpr std::uint32_t CORDIC_CSR_NRES_B_0x0 = 0;
        /** @brief Two 32-bit values are transferred to the CORDIC_RDATA register on completion of the next calculation. Two reads from CORDIC_RDATA are necessary to reset the RRDY flag. */
    constexpr std::uint32_t CORDIC_CSR_NRES_B_0x1 = 1;

    /** @brief Number of arguments expected by the CORDIC_WDATA register Reads return the current state of the bit. */
    using CORDIC_CSR_NARGS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only one 32-bit write (or two 16-bit values if ARGSIZE = 1) is needed for the next calculation. (value: 0)
     *          - B_0x1: Two 32-bit values must be written to the CORDIC_WDATA register to trigger the next calculation. (value: 1)
     */
        /** @brief Only one 32-bit write (or two 16-bit values if ARGSIZE = 1) is needed for the next calculation. */
    constexpr std::uint32_t CORDIC_CSR_NARGS_B_0x0 = 0;
        /** @brief Two 32-bit values must be written to the CORDIC_WDATA register to trigger the next calculation. */
    constexpr std::uint32_t CORDIC_CSR_NARGS_B_0x1 = 1;

    /** @brief Width of output data RESSIZE selects the number of bits used to represent output data. If 32-bit data is selected, the CORDIC_RDATA register contains results in q1.31 format. If 16-bit data is selected, the least significant half-word of CORDIC_RDATA contains the primary result (RES1) in q1.15 format, and the most significant half-word contains the secondary result (RES2), also in q1.15 format. */
    using CORDIC_CSR_RESSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 32-bit (value: 0)
     *          - B_0x1: 16-bit (value: 1)
     */
        /** @brief 32-bit */
    constexpr std::uint32_t CORDIC_CSR_RESSIZE_B_0x0 = 0;
        /** @brief 16-bit */
    constexpr std::uint32_t CORDIC_CSR_RESSIZE_B_0x1 = 1;

    /** @brief Width of input data ARGSIZE selects the number of bits used to represent input data. If 32-bit data is selected, the CORDIC_WDATA register expects arguments in q1.31 format. If 16-bit data is selected, the CORDIC_WDATA register expects arguments in q1.15 format. The primary argument (ARG1) is written to the least significant half-word, and the secondary argument (ARG2) to the most significant half-word. */
    using CORDIC_CSR_ARGSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 32-bit (value: 0)
     *          - B_0x1: 16-bit (value: 1)
     */
        /** @brief 32-bit */
    constexpr std::uint32_t CORDIC_CSR_ARGSIZE_B_0x0 = 0;
        /** @brief 16-bit */
    constexpr std::uint32_t CORDIC_CSR_ARGSIZE_B_0x1 = 1;

    /** @brief Result ready flag This bit is set by hardware when a CORDIC operation completes. It is reset by hardware when the CORDIC_RDATA register is read (NRES+1) times. When this bit is set, if the IEN bit is also set, the CORDIC interrupt is asserted. If the DMAREN bit is set, a DMA read channel request is generated. While this bit is set, no new calculation is started. */
    using CORDIC_CSR_RRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new data in output register (value: 0)
     *          - B_0x1: CORDIC_RDATA register contains new data. (value: 1)
     */
        /** @brief No new data in output register */
    constexpr std::uint32_t CORDIC_CSR_RRDY_B_0x0 = 0;
        /** @brief CORDIC_RDATA register contains new data. */
    constexpr std::uint32_t CORDIC_CSR_RRDY_B_0x1 = 1;

    /** @brief CORDIC argument register */
    using CORDIC_WDATA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Function input arguments This register is programmed with the input arguments for the function selected in the CORDIC_CSR register FUNC field. If 32-bit format is selected (CORDIC_CSR.ARGSIZE = 0) and two input arguments are required (CORDIC_CSR.NARGS = 1), two successive writes are required to this register. The first writes the primary argument (ARG1), the second writes the secondary argument (ARG2). If 32-bit format is selected and only one input argument is required (NARGS = 0), only one write is required to this register, containing the primary argument (ARG1). If 16-bit format is selected (CORDIC_CSR.ARGSIZE = 1), one write to this register contains both arguments. The primary argument (ARG1) is in the lower half, ARG[15:0], and the secondary argument (ARG2) is in the upper half, ARG[31:16]. In this case, NARGS must be set to 0. Refer to Section 24.3.2 for the arguments required by each function, and their permitted range. When the required number of arguments has been written, the CORDIC evaluates the function designated by CORDIC_CSR.FUNC using the supplied input arguments, provided any previous calculation has completed. If a calculation is ongoing, the ARG1 and ARG 2 values are held pending until the calculation is completed and the results read. During this time, a write to the register cancels the pending operation and overwrite the argument data. */
    using CORDIC_WDATA_ARG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CORDIC result register */
    using CORDIC_RDATA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Function result If 32-bit format is selected (CORDIC_CSR.RESSIZE = 0) and two output values are expected (CORDIC_CSR.NRES = 1), this register must be read twice when the RRDY flag is set. The first read fetches the primary result (RES1). The second read fetches the secondary result (RES2) and resets RRDY. If 32-bit format is selected and only one output value is expected (NRES = 0), only one read of this register is required to fetch the primary result (RES1) and reset the RRDY flag. If 16-bit format is selected (CORDIC_CSR.RESSIZE = 1), this register contains the primary result (RES1) in the lower half, RES[15:0], and the secondary result (RES2) in the upper half, RES[31:16]. In this case, NRES must be set to 0, and only one read performed. A read from this register resets the RRDY flag in the CORDIC_CSR register. */
    using CORDIC_RDATA_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
