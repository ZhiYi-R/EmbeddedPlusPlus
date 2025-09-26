/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N645_DCMI_S_HPP
#define EMBEDDED_PP_STM32N645_DCMI_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Digital camera interface */
namespace STM32N645::DCMI_S {

    /** @brief DCMI control register */
    using DCMI_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture enable */
    using DCMI_CR_CAPTURE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture disabled (value: 0)
     *          - B_0x1: Capture enabled (value: 1)
     */
        /** @brief Capture disabled */
    constexpr std::uint32_t DCMI_CR_CAPTURE_B_0x0 = 0;
        /** @brief Capture enabled */
    constexpr std::uint32_t DCMI_CR_CAPTURE_B_0x1 = 1;

    /** @brief Capture mode */
    using DCMI_CR_CM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Continuous grab mode - The received data are transferred into the destination memory through the DMA. The buffer location and mode (linear or circular buffer) is controlled through the system DMA. (value: 0)
     *          - B_0x1: Snapshot mode (single frame) - Once activated, the interface waits for the start of frame and then transfers a single frame through the DMA. At the end of the frame, the CAPTURE bit is automatically reset. (value: 1)
     */
        /** @brief Continuous grab mode - The received data are transferred into the destination memory through the DMA. The buffer location and mode (linear or circular buffer) is controlled through the system DMA. */
    constexpr std::uint32_t DCMI_CR_CM_B_0x0 = 0;
        /** @brief Snapshot mode (single frame) - Once activated, the interface waits for the start of frame and then transfers a single frame through the DMA. At the end of the frame, the CAPTURE bit is automatically reset. */
    constexpr std::uint32_t DCMI_CR_CM_B_0x1 = 1;

    /** @brief Crop feature */
    using DCMI_CR_CROP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The full image is captured. In this case the total number of bytes in an image frame must be a multiple of four. (value: 0)
     *          - B_0x1: Only the data inside the window specified by the crop register is captured. If the size of the crop window exceeds the picture size, then only the picture size is captured. (value: 1)
     */
        /** @brief The full image is captured. In this case the total number of bytes in an image frame must be a multiple of four. */
    constexpr std::uint32_t DCMI_CR_CROP_B_0x0 = 0;
        /** @brief Only the data inside the window specified by the crop register is captured. If the size of the crop window exceeds the picture size, then only the picture size is captured. */
    constexpr std::uint32_t DCMI_CR_CROP_B_0x1 = 1;

    /** @brief JPEG format */
    using DCMI_CR_JPEG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Uncompressed video format (value: 0)
     *          - B_0x1: This bit is used for JPEG data transfers. The DCMI_HSYNC signal is used as data enable. The crop and embedded synchronization features (ESS bit) cannot be used in this mode. (value: 1)
     */
        /** @brief Uncompressed video format */
    constexpr std::uint32_t DCMI_CR_JPEG_B_0x0 = 0;
        /** @brief This bit is used for JPEG data transfers. The DCMI_HSYNC signal is used as data enable. The crop and embedded synchronization features (ESS bit) cannot be used in this mode. */
    constexpr std::uint32_t DCMI_CR_JPEG_B_0x1 = 1;

    /** @brief Embedded synchronization select */
    using DCMI_CR_ESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware synchronization data capture (frame/line start/stop) is synchronized with the DCMI_HSYNC/DCMI_VSYNC signals. (value: 0)
     *          - B_0x1: Embedded synchronization data capture is synchronized with synchronization codes embedded in the data flow. (value: 1)
     */
        /** @brief Hardware synchronization data capture (frame/line start/stop) is synchronized with the DCMI_HSYNC/DCMI_VSYNC signals. */
    constexpr std::uint32_t DCMI_CR_ESS_B_0x0 = 0;
        /** @brief Embedded synchronization data capture is synchronized with synchronization codes embedded in the data flow. */
    constexpr std::uint32_t DCMI_CR_ESS_B_0x1 = 1;

    /** @brief Pixel clock polarity */
    using DCMI_CR_PCKPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling edge active (value: 0)
     *          - B_0x1: Rising edge active (value: 1)
     */
        /** @brief Falling edge active */
    constexpr std::uint32_t DCMI_CR_PCKPOL_B_0x0 = 0;
        /** @brief Rising edge active */
    constexpr std::uint32_t DCMI_CR_PCKPOL_B_0x1 = 1;

    /** @brief Horizontal synchronization polarity */
    using DCMI_CR_HSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI_HSYNC active low (value: 0)
     *          - B_0x1: DCMI_HSYNC active high (value: 1)
     */
        /** @brief DCMI_HSYNC active low */
    constexpr std::uint32_t DCMI_CR_HSPOL_B_0x0 = 0;
        /** @brief DCMI_HSYNC active high */
    constexpr std::uint32_t DCMI_CR_HSPOL_B_0x1 = 1;

    /** @brief Vertical synchronization polarity */
    using DCMI_CR_VSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI_VSYNC active low (value: 0)
     *          - B_0x1: DCMI_VSYNC active high (value: 1)
     */
        /** @brief DCMI_VSYNC active low */
    constexpr std::uint32_t DCMI_CR_VSPOL_B_0x0 = 0;
        /** @brief DCMI_VSYNC active high */
    constexpr std::uint32_t DCMI_CR_VSPOL_B_0x1 = 1;

    /** @brief Frame capture rate control */
    using DCMI_CR_FCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All frames are captured. (value: 0)
     *          - B_0x1: Every alternate frame captured (50% bandwidth reduction) (value: 1)
     *          - B_0x2: One frame out of four captured (75% bandwidth reduction) (value: 2)
     */
        /** @brief All frames are captured. */
    constexpr std::uint32_t DCMI_CR_FCRC_B_0x0 = 0;
        /** @brief Every alternate frame captured (50% bandwidth reduction) */
    constexpr std::uint32_t DCMI_CR_FCRC_B_0x1 = 1;
        /** @brief One frame out of four captured (75% bandwidth reduction) */
    constexpr std::uint32_t DCMI_CR_FCRC_B_0x2 = 2;

    /** @brief Extended data mode */
    using DCMI_CR_EDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures 8-bit data on every pixel clock. (value: 0)
     *          - B_0x1: Interface captures 10-bit data on every pixel clock. (value: 1)
     *          - B_0x2: Interface captures 12-bit data on every pixel clock. (value: 2)
     *          - B_0x3: Interface captures 14-bit data on every pixel clock. (value: 3)
     */
        /** @brief Interface captures 8-bit data on every pixel clock. */
    constexpr std::uint32_t DCMI_CR_EDM_B_0x0 = 0;
        /** @brief Interface captures 10-bit data on every pixel clock. */
    constexpr std::uint32_t DCMI_CR_EDM_B_0x1 = 1;
        /** @brief Interface captures 12-bit data on every pixel clock. */
    constexpr std::uint32_t DCMI_CR_EDM_B_0x2 = 2;
        /** @brief Interface captures 14-bit data on every pixel clock. */
    constexpr std::uint32_t DCMI_CR_EDM_B_0x3 = 3;

    /** @brief DCMI enable */
    using DCMI_CR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI disabled (value: 0)
     *          - B_0x1: DCMI enabled (value: 1)
     */
        /** @brief DCMI disabled */
    constexpr std::uint32_t DCMI_CR_ENABLE_B_0x0 = 0;
        /** @brief DCMI enabled */
    constexpr std::uint32_t DCMI_CR_ENABLE_B_0x1 = 1;

    /** @brief Byte Select mode */
    using DCMI_CR_BSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures all received data. (value: 0)
     *          - B_0x1: Interface captures every other byte from the received data. (value: 1)
     *          - B_0x2: Interface captures one byte out of four. (value: 2)
     *          - B_0x3: Interface captures two bytes out of four. (value: 3)
     */
        /** @brief Interface captures all received data. */
    constexpr std::uint32_t DCMI_CR_BSM_B_0x0 = 0;
        /** @brief Interface captures every other byte from the received data. */
    constexpr std::uint32_t DCMI_CR_BSM_B_0x1 = 1;
        /** @brief Interface captures one byte out of four. */
    constexpr std::uint32_t DCMI_CR_BSM_B_0x2 = 2;
        /** @brief Interface captures two bytes out of four. */
    constexpr std::uint32_t DCMI_CR_BSM_B_0x3 = 3;

    /** @brief Odd/Even Byte Select (Byte Select Start) */
    using DCMI_CR_OEBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures first data (byte or double byte) from the frame/line start, second one being dropped. (value: 0)
     *          - B_0x1: Interface captures second data (byte or double byte) from the frame/line start, first one being dropped. (value: 1)
     */
        /** @brief Interface captures first data (byte or double byte) from the frame/line start, second one being dropped. */
    constexpr std::uint32_t DCMI_CR_OEBS_B_0x0 = 0;
        /** @brief Interface captures second data (byte or double byte) from the frame/line start, first one being dropped. */
    constexpr std::uint32_t DCMI_CR_OEBS_B_0x1 = 1;

    /** @brief Line Select mode */
    using DCMI_CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures all received lines. (value: 0)
     *          - B_0x1: Interface captures one line out of two. (value: 1)
     */
        /** @brief Interface captures all received lines. */
    constexpr std::uint32_t DCMI_CR_LSM_B_0x0 = 0;
        /** @brief Interface captures one line out of two. */
    constexpr std::uint32_t DCMI_CR_LSM_B_0x1 = 1;

    /** @brief Odd/Even Line Select (Line Select Start) */
    using DCMI_CR_OELS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures first line after the frame start, second one being dropped. (value: 0)
     *          - B_0x1: Interface captures second line from the frame start, first one being dropped. (value: 1)
     */
        /** @brief Interface captures first line after the frame start, second one being dropped. */
    constexpr std::uint32_t DCMI_CR_OELS_B_0x0 = 0;
        /** @brief Interface captures second line from the frame start, first one being dropped. */
    constexpr std::uint32_t DCMI_CR_OELS_B_0x1 = 1;

    /** @brief DCMI status register */
    using DCMI_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal synchronization */
    using DCMI_SR_HSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: active line (value: 0)
     *          - B_0x1: synchronization between lines (value: 1)
     */
        /** @brief active line */
    constexpr std::uint32_t DCMI_SR_HSYNC_B_0x0 = 0;
        /** @brief synchronization between lines */
    constexpr std::uint32_t DCMI_SR_HSYNC_B_0x1 = 1;

    /** @brief Vertical synchronization */
    using DCMI_SR_VSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: active frame (value: 0)
     *          - B_0x1: synchronization between frames (value: 1)
     */
        /** @brief active frame */
    constexpr std::uint32_t DCMI_SR_VSYNC_B_0x0 = 0;
        /** @brief synchronization between frames */
    constexpr std::uint32_t DCMI_SR_VSYNC_B_0x1 = 1;

    /** @brief FIFO not empty */
    using DCMI_SR_FNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: FIFO contains valid data. (value: 1)
     *          - B_0x0: FIFO empty (value: 0)
     */
        /** @brief FIFO contains valid data. */
    constexpr std::uint32_t DCMI_SR_FNE_B_0x1 = 1;
        /** @brief FIFO empty */
    constexpr std::uint32_t DCMI_SR_FNE_B_0x0 = 0;

    /** @brief DCMI raw interrupt status register */
    using DCMI_RIS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture complete raw interrupt status */
    using DCMI_RIS_FRAME_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new capture (value: 0)
     *          - B_0x1: A frame has been captured. (value: 1)
     */
        /** @brief No new capture */
    constexpr std::uint32_t DCMI_RIS_FRAME_RIS_B_0x0 = 0;
        /** @brief A frame has been captured. */
    constexpr std::uint32_t DCMI_RIS_FRAME_RIS_B_0x1 = 1;

    /** @brief Overrun raw interrupt status */
    using DCMI_RIS_OVR_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data buffer overrun occurred (value: 0)
     *          - B_0x1: A data buffer overrun occurred and the data FIFO is corrupted. (value: 1)
     */
        /** @brief No data buffer overrun occurred */
    constexpr std::uint32_t DCMI_RIS_OVR_RIS_B_0x0 = 0;
        /** @brief A data buffer overrun occurred and the data FIFO is corrupted. */
    constexpr std::uint32_t DCMI_RIS_OVR_RIS_B_0x1 = 1;

    /** @brief Synchronization error raw interrupt status */
    using DCMI_RIS_ERR_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No synchronization error detected (value: 0)
     *          - B_0x1: Embedded synchronization characters are not received in the correct order. (value: 1)
     */
        /** @brief No synchronization error detected */
    constexpr std::uint32_t DCMI_RIS_ERR_RIS_B_0x0 = 0;
        /** @brief Embedded synchronization characters are not received in the correct order. */
    constexpr std::uint32_t DCMI_RIS_ERR_RIS_B_0x1 = 1;

    /** @brief DCMI_VSYNC raw interrupt status */
    using DCMI_RIS_VSYNC_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line raw interrupt status */
    using DCMI_RIS_LINE_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMI interrupt enable register */
    using DCMI_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture complete interrupt enable */
    using DCMI_IER_FRAME_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated at the end of each received frame/crop window (in crop mode). (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMI_IER_FRAME_IE_B_0x0 = 0;
        /** @brief An interrupt is generated at the end of each received frame/crop window (in crop mode). */
    constexpr std::uint32_t DCMI_IER_FRAME_IE_B_0x1 = 1;

    /** @brief Overrun interrupt enable */
    using DCMI_IER_OVR_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated if the DMA was not able to transfer the last data before new data (32-bit) are received. (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMI_IER_OVR_IE_B_0x0 = 0;
        /** @brief An interrupt is generated if the DMA was not able to transfer the last data before new data (32-bit) are received. */
    constexpr std::uint32_t DCMI_IER_OVR_IE_B_0x1 = 1;

    /** @brief Synchronization error interrupt enable */
    using DCMI_IER_ERR_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated if the embedded synchronization codes are not received in the correct order. (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMI_IER_ERR_IE_B_0x0 = 0;
        /** @brief An interrupt is generated if the embedded synchronization codes are not received in the correct order. */
    constexpr std::uint32_t DCMI_IER_ERR_IE_B_0x1 = 1;

    /** @brief DCMI_VSYNC interrupt enable */
    using DCMI_IER_VSYNC_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated on each DCMI_VSYNC transition from the inactive to the active state. (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMI_IER_VSYNC_IE_B_0x0 = 0;
        /** @brief An interrupt is generated on each DCMI_VSYNC transition from the inactive to the active state. */
    constexpr std::uint32_t DCMI_IER_VSYNC_IE_B_0x1 = 1;

    /** @brief Line interrupt enable */
    using DCMI_IER_LINE_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation when the line is received (value: 0)
     *          - B_0x1: An Interrupt is generated when a line has been completely received. (value: 1)
     */
        /** @brief No interrupt generation when the line is received */
    constexpr std::uint32_t DCMI_IER_LINE_IE_B_0x0 = 0;
        /** @brief An Interrupt is generated when a line has been completely received. */
    constexpr std::uint32_t DCMI_IER_LINE_IE_B_0x1 = 1;

    /** @brief DCMI masked interrupt status register */
    using DCMI_MIS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture complete masked interrupt status */
    using DCMI_MIS_FRAME_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated after a complete capture. (value: 0)
     *          - B_0x1: An interrupt is generated at the end of each received frame/crop window (in crop mode) and the FRAME_IE bit is set in DCMI_IER. (value: 1)
     */
        /** @brief No interrupt is generated after a complete capture. */
    constexpr std::uint32_t DCMI_MIS_FRAME_MIS_B_0x0 = 0;
        /** @brief An interrupt is generated at the end of each received frame/crop window (in crop mode) and the FRAME_IE bit is set in DCMI_IER. */
    constexpr std::uint32_t DCMI_MIS_FRAME_MIS_B_0x1 = 1;

    /** @brief Overrun masked interrupt status */
    using DCMI_MIS_OVR_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated on overrun. (value: 0)
     *          - B_0x1: An interrupt is generated if the DMA was not able to transfer the last data before new data (32-bit) are received and the OVR_IE bit is set in DCMI_IER. (value: 1)
     */
        /** @brief No interrupt is generated on overrun. */
    constexpr std::uint32_t DCMI_MIS_OVR_MIS_B_0x0 = 0;
        /** @brief An interrupt is generated if the DMA was not able to transfer the last data before new data (32-bit) are received and the OVR_IE bit is set in DCMI_IER. */
    constexpr std::uint32_t DCMI_MIS_OVR_MIS_B_0x1 = 1;

    /** @brief Synchronization error masked interrupt status */
    using DCMI_MIS_ERR_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated on a synchronization error. (value: 0)
     *          - B_0x1: An interrupt is generated if the embedded synchronization codes are not received in the correct order and the ERR_IE bit in DCMI_IER is set. (value: 1)
     */
        /** @brief No interrupt is generated on a synchronization error. */
    constexpr std::uint32_t DCMI_MIS_ERR_MIS_B_0x0 = 0;
        /** @brief An interrupt is generated if the embedded synchronization codes are not received in the correct order and the ERR_IE bit in DCMI_IER is set. */
    constexpr std::uint32_t DCMI_MIS_ERR_MIS_B_0x1 = 1;

    /** @brief VSYNC masked interrupt status */
    using DCMI_MIS_VSYNC_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated on DCMI_VSYNC transitions. (value: 0)
     *          - B_0x1: An interrupt is generated on each DCMI_VSYNC transition from the inactive to the active state and the VSYNC_IE bit is set in DCMI_IER. (value: 1)
     */
        /** @brief No interrupt is generated on DCMI_VSYNC transitions. */
    constexpr std::uint32_t DCMI_MIS_VSYNC_MIS_B_0x0 = 0;
        /** @brief An interrupt is generated on each DCMI_VSYNC transition from the inactive to the active state and the VSYNC_IE bit is set in DCMI_IER. */
    constexpr std::uint32_t DCMI_MIS_VSYNC_MIS_B_0x1 = 1;

    /** @brief Line masked interrupt status */
    using DCMI_MIS_LINE_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation when the line is received (value: 0)
     *          - B_0x1: An Interrupt is generated when a line has been completely received and the LINE_IE bit is set in DCMI_IER. (value: 1)
     */
        /** @brief No interrupt generation when the line is received */
    constexpr std::uint32_t DCMI_MIS_LINE_MIS_B_0x0 = 0;
        /** @brief An Interrupt is generated when a line has been completely received and the LINE_IE bit is set in DCMI_IER. */
    constexpr std::uint32_t DCMI_MIS_LINE_MIS_B_0x1 = 1;

    /** @brief DCMI interrupt clear register */
    using DCMI_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture complete interrupt status clear */
    using DCMI_ICR_FRAME_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun interrupt status clear */
    using DCMI_ICR_OVR_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization error interrupt status clear */
    using DCMI_ICR_ERR_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical Synchronization interrupt status clear */
    using DCMI_ICR_VSYNC_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line interrupt status clear */
    using DCMI_ICR_LINE_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMI embedded synchronization code register */
    using DCMI_ESCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame start delimiter code */
    using DCMI_ESCR_FSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line start delimiter code */
    using DCMI_ESCR_LSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line end delimiter code */
    using DCMI_ESCR_LEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame end delimiter code */
    using DCMI_ESCR_FEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMI embedded synchronization unmask register */
    using DCMI_ESUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame start delimiter unmask */
    using DCMI_ESUR_FSU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The corresponding bit in the FSC byte in DCMI_ESCR is masked while comparing the frame start delimiter with the received data. (value: 0)
     *          - B_0x1: The corresponding bit in the FSC byte in DCMI_ESCR is compared while comparing the frame start delimiter with the received data. (value: 1)
     */
        /** @brief The corresponding bit in the FSC byte in DCMI_ESCR is masked while comparing the frame start delimiter with the received data. */
    constexpr std::uint32_t DCMI_ESUR_FSU_B_0x0 = 0;
        /** @brief The corresponding bit in the FSC byte in DCMI_ESCR is compared while comparing the frame start delimiter with the received data. */
    constexpr std::uint32_t DCMI_ESUR_FSU_B_0x1 = 1;

    /** @brief Line start delimiter unmask */
    using DCMI_ESUR_LSU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The corresponding bit in the LSC byte in DCMI_ESCR is masked while comparing the line start delimiter with the received data. (value: 0)
     *          - B_0x1: The corresponding bit in the LSC byte in DCMI_ESCR is compared while comparing the line start delimiter with the received data. (value: 1)
     */
        /** @brief The corresponding bit in the LSC byte in DCMI_ESCR is masked while comparing the line start delimiter with the received data. */
    constexpr std::uint32_t DCMI_ESUR_LSU_B_0x0 = 0;
        /** @brief The corresponding bit in the LSC byte in DCMI_ESCR is compared while comparing the line start delimiter with the received data. */
    constexpr std::uint32_t DCMI_ESUR_LSU_B_0x1 = 1;

    /** @brief Line end delimiter unmask */
    using DCMI_ESUR_LEU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The corresponding bit in the LEC byte in DCMI_ESCR is masked while comparing the line end delimiter with the received data. (value: 0)
     *          - B_0x1: The corresponding bit in the LEC byte in DCMI_ESCR is compared while comparing the line end delimiter with the received data. (value: 1)
     */
        /** @brief The corresponding bit in the LEC byte in DCMI_ESCR is masked while comparing the line end delimiter with the received data. */
    constexpr std::uint32_t DCMI_ESUR_LEU_B_0x0 = 0;
        /** @brief The corresponding bit in the LEC byte in DCMI_ESCR is compared while comparing the line end delimiter with the received data. */
    constexpr std::uint32_t DCMI_ESUR_LEU_B_0x1 = 1;

    /** @brief Frame end delimiter unmask */
    using DCMI_ESUR_FEU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The corresponding bit in the FEC byte in DCMI_ESCR is masked while comparing the frame end delimiter with the received data. (value: 0)
     *          - B_0x1: The corresponding bit in the FEC byte in DCMI_ESCR is compared while comparing the frame end delimiter with the received data. (value: 1)
     */
        /** @brief The corresponding bit in the FEC byte in DCMI_ESCR is masked while comparing the frame end delimiter with the received data. */
    constexpr std::uint32_t DCMI_ESUR_FEU_B_0x0 = 0;
        /** @brief The corresponding bit in the FEC byte in DCMI_ESCR is compared while comparing the frame end delimiter with the received data. */
    constexpr std::uint32_t DCMI_ESUR_FEU_B_0x1 = 1;

    /** @brief DCMI crop window start */
    using DCMI_CWSTRT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal offset count */
    using DCMI_CWSTRT_HOFFCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start line count */
    using DCMI_CWSTRT_VST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0000: line 1 (value: 0)
     *          - B_0x0001: line 2 (value: 1)
     *          - B_0x0002: line 3 (value: 2)
     */
        /** @brief line 1 */
    constexpr std::uint32_t DCMI_CWSTRT_VST_B_0x0000 = 0;
        /** @brief line 2 */
    constexpr std::uint32_t DCMI_CWSTRT_VST_B_0x0001 = 1;
        /** @brief line 3 */
    constexpr std::uint32_t DCMI_CWSTRT_VST_B_0x0002 = 2;

    /** @brief DCMI crop window size */
    using DCMI_CWSIZE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture count */
    using DCMI_CWSIZE_CAPCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0000: 1 pixel (value: 0)
     *          - B_0x0001: 2 pixels (value: 1)
     *          - B_0x0002: 3 pixels (value: 2)
     */
        /** @brief 1 pixel */
    constexpr std::uint32_t DCMI_CWSIZE_CAPCNT_B_0x0000 = 0;
        /** @brief 2 pixels */
    constexpr std::uint32_t DCMI_CWSIZE_CAPCNT_B_0x0001 = 1;
        /** @brief 3 pixels */
    constexpr std::uint32_t DCMI_CWSIZE_CAPCNT_B_0x0002 = 2;

    /** @brief Vertical line count */
    using DCMI_CWSIZE_VLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0000: 1 line (value: 0)
     *          - B_0x0001: 2 lines (value: 1)
     *          - B_0x0002: 3 lines (value: 2)
     */
        /** @brief 1 line */
    constexpr std::uint32_t DCMI_CWSIZE_VLINE_B_0x0000 = 0;
        /** @brief 2 lines */
    constexpr std::uint32_t DCMI_CWSIZE_VLINE_B_0x0001 = 1;
        /** @brief 3 lines */
    constexpr std::uint32_t DCMI_CWSIZE_VLINE_B_0x0002 = 2;

    /** @brief DCMI data register */
    using DCMI_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data byte 0 */
    using DCMI_DR_BYTE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data byte 1 */
    using DCMI_DR_BYTE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data byte 2 */
    using DCMI_DR_BYTE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data byte 3 */
    using DCMI_DR_BYTE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
