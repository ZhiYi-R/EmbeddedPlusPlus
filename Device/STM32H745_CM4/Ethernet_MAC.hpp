/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H745_CM4_ETHERNET_MAC_HPP
#define EMBEDDED_PP_STM32H745_CM4_ETHERNET_MAC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Ethernet: media access control (MAC) */
namespace STM32H745_CM4::Ethernet_MAC {

    /** @brief DMA mode register */
    using DMAMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1000, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software Reset */
    using DMAMR_SWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Tx or Rx Arbitration Scheme */
    using DMAMR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit priority */
    using DMAMR_TXPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Priority ratio */
    using DMAMR_PR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Mode */
    using DMAMR_INTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System bus mode register */
    using DMASBMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1004, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fixed Burst Length */
    using DMASBMR_FB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address-Aligned Beats */
    using DMASBMR_AAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mixed Burst */
    using DMASBMR_MB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rebuild INCRx Burst */
    using DMASBMR_RB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt status register */
    using DMAISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Interrupt Status */
    using DMAISR_DC0IS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Interrupt Status */
    using DMAISR_MTLIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Interrupt Status */
    using DMAISR_MACIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug status register */
    using DMADSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB Master Write Channel */
    using DMADSR_AXWHSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Receive Process State */
    using DMADSR_RPS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Transmit Process State */
    using DMADSR_TPS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel control register */
    using DMACCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum Segment Size */
    using DMACCR_MSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8xPBL mode */
    using DMACCR_PBLX8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Descriptor Skip Length */
    using DMACCR_DSL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel transmit control register */
    using DMACTxCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start or Stop Transmission Command */
    using DMACTxCR_ST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operate on Second Packet */
    using DMACTxCR_OSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TCP Segmentation Enabled */
    using DMACTxCR_TSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Programmable Burst Length */
    using DMACTxCR_TXPBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel receive control register */
    using DMACRxCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start or Stop Receive Command */
    using DMACRxCR_SR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer size */
    using DMACRxCR_RBSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXPBL */
    using DMACRxCR_RXPBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Rx Channel Packet Flush */
    using DMACRxCR_RPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Tx descriptor list address register */
    using DMACTxDLAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of Transmit List */
    using DMACTxDLAR_TDESLA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Rx descriptor list address register */
    using DMACRxDLAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x111C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of Receive List */
    using DMACRxDLAR_RDESLA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Tx descriptor tail pointer register */
    using DMACTxDTPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Descriptor Tail Pointer */
    using DMACTxDTPR_TDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Rx descriptor tail pointer register */
    using DMACRxDTPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Descriptor Tail Pointer */
    using DMACRxDTPR_RDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Tx descriptor ring length register */
    using DMACTxRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x112C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Descriptor Ring Length */
    using DMACTxRLR_TDRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Rx descriptor ring length register */
    using DMACRxRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Descriptor Ring Length */
    using DMACRxRLR_RDRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel interrupt enable register */
    using DMACIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Interrupt Enable */
    using DMACIER_TIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Stopped Enable */
    using DMACIER_TXSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Buffer Unavailable Enable */
    using DMACIER_TBUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt Enable */
    using DMACIER_RIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer Unavailable Enable */
    using DMACIER_RBUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Stopped Enable */
    using DMACIER_RSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Watchdog Timeout Enable */
    using DMACIER_RWTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Transmit Interrupt Enable */
    using DMACIER_ETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Receive Interrupt Enable */
    using DMACIER_ERIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fatal Bus Error Enable */
    using DMACIER_FBEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context Descriptor Error Enable */
    using DMACIER_CDEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Abnormal Interrupt Summary Enable */
    using DMACIER_AIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Normal Interrupt Summary Enable */
    using DMACIER_NIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Rx interrupt watchdog timer register */
    using DMACRxIWTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt Watchdog Timer Count */
    using DMACRxIWTR_RWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel current application transmit descriptor register */
    using DMACCATxDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Transmit Descriptor Address Pointer */
    using DMACCATxDR_CURTDESAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel current application receive descriptor register */
    using DMACCARxDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Receive Descriptor Address Pointer */
    using DMACCARxDR_CURRDESAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel current application transmit buffer register */
    using DMACCATxBR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Transmit Buffer Address Pointer */
    using DMACCATxBR_CURTBUFAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel current application receive buffer register */
    using DMACCARxBR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x115C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Receive Buffer Address Pointer */
    using DMACCARxBR_CURRBUFAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel status register */
    using DMACSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Interrupt */
    using DMACSR_TI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Process Stopped */
    using DMACSR_TPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Buffer Unavailable */
    using DMACSR_TBU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt */
    using DMACSR_RI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer Unavailable */
    using DMACSR_RBU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Process Stopped */
    using DMACSR_RPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Watchdog Timeout */
    using DMACSR_RWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Transmit Interrupt */
    using DMACSR_ET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Receive Interrupt */
    using DMACSR_ER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fatal Bus Error */
    using DMACSR_FBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context Descriptor Error */
    using DMACSR_CDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Abnormal Interrupt Summary */
    using DMACSR_AIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Normal Interrupt Summary */
    using DMACSR_NIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx DMA Error Bits */
    using DMACSR_TEB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx DMA Error Bits */
    using DMACSR_REB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel missed frame count register */
    using DMACMFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x116C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dropped Packet Counters */
    using DMACMFCR_MFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow status of the MFC Counter */
    using DMACMFCR_MFCO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operating mode Register */
    using MTLOMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTXSTS */
    using MTLOMR_DTXSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNTPRST */
    using MTLOMR_CNTPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNTCLR */
    using MTLOMR_CNTCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt status Register */
    using MTLISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Queue interrupt status */
    using MTLISR_Q0IS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx queue operating mode Register */
    using MTLTxQOMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flush Transmit Queue */
    using MTLTxQOMR_FTQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Store and Forward */
    using MTLTxQOMR_TSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue Enable */
    using MTLTxQOMR_TXQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Threshold Control */
    using MTLTxQOMR_TTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue Size */
    using MTLTxQOMR_TQS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx queue underflow register */
    using MTLTxQUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Underflow Packet Counter */
    using MTLTxQUR_UFFRMCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UFCNTOVF */
    using MTLTxQUR_UFCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx queue debug Register */
    using MTLTxQDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXQPAUSED */
    using MTLTxQDR_TXQPAUSED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRCSTS */
    using MTLTxQDR_TRCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TWCSTS */
    using MTLTxQDR_TWCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXQSTS */
    using MTLTxQDR_TXQSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXSTSFSTS */
    using MTLTxQDR_TXSTSFSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTXQ */
    using MTLTxQDR_PTXQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STXSTSF */
    using MTLTxQDR_STXSTSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Queue interrupt control status Register */
    using MTLQICSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXUNFIS */
    using MTLQICSR_TXUNFIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXUIE */
    using MTLQICSR_TXUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXOVFIS */
    using MTLQICSR_RXOVFIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXOIE */
    using MTLQICSR_RXOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx queue operating mode register */
    using MTLRxQOMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC */
    using MTLRxQOMR_RTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FUP */
    using MTLRxQOMR_FUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FEP */
    using MTLRxQOMR_FEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSF */
    using MTLRxQOMR_RSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIS_TCP_EF */
    using MTLRxQOMR_DIS_TCP_EF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EHFC */
    using MTLRxQOMR_EHFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFA */
    using MTLRxQOMR_RFA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFD */
    using MTLRxQOMR_RFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RQS */
    using MTLRxQOMR_RQS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx queue missed packet and overflow counter register */
    using MTLRxQMPOCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OVFPKTCNT */
    using MTLRxQMPOCR_OVFPKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OVFCNTOVF */
    using MTLRxQMPOCR_OVFCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MISPKTCNT */
    using MTLRxQMPOCR_MISPKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MISCNTOVF */
    using MTLRxQMPOCR_MISCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx queue debug register */
    using MTLRxQDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RWCSTS */
    using MTLRxQDR_RWCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RRCSTS */
    using MTLRxQDR_RRCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXQSTS */
    using MTLRxQDR_RXQSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRXQ */
    using MTLRxQDR_PRXQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operating mode configuration register */
    using MACCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receiver Enable */
    using MACCR_RE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TE */
    using MACCR_TE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRELEN */
    using MACCR_PRELEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DC */
    using MACCR_DC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BL */
    using MACCR_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DR */
    using MACCR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCRS */
    using MACCR_DCRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DO */
    using MACCR_DO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECRSFD */
    using MACCR_ECRSFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LM */
    using MACCR_LM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DM */
    using MACCR_DM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FES */
    using MACCR_FES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JE */
    using MACCR_JE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JD */
    using MACCR_JD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WD */
    using MACCR_WD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACS */
    using MACCR_ACS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CST */
    using MACCR_CST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief S2KP */
    using MACCR_S2KP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPSLCE */
    using MACCR_GPSLCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IPG */
    using MACCR_IPG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IPC */
    using MACCR_IPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SARC */
    using MACCR_SARC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARPEN */
    using MACCR_ARPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended operating mode configuration register */
    using MACECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPSL */
    using MACECR_GPSL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCRCC */
    using MACECR_DCRCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPEN */
    using MACECR_SPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USP */
    using MACECR_USP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EIPGEN */
    using MACECR_EIPGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EIPG */
    using MACECR_EIPG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet filtering control register */
    using MACPFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PR */
    using MACPFR_PR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HUC */
    using MACPFR_HUC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HMC */
    using MACPFR_HMC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAIF */
    using MACPFR_DAIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PM */
    using MACPFR_PM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBF */
    using MACPFR_DBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PCF */
    using MACPFR_PCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAIF */
    using MACPFR_SAIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAF */
    using MACPFR_SAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPF */
    using MACPFR_HPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTFE */
    using MACPFR_VTFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IPFE */
    using MACPFR_IPFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DNTU */
    using MACPFR_DNTU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RA */
    using MACPFR_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog timeout register */
    using MACWTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WTO */
    using MACWTR_WTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWE */
    using MACWTR_PWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Table 0 register */
    using MACHT0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HT31T0 */
    using MACHT0R_HT31T0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Table 1 register */
    using MACHT1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HT63T32 */
    using MACHT1R_HT63T32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN tag register */
    using MACVTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VL */
    using MACVTR_VL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETV */
    using MACVTR_ETV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTIM */
    using MACVTR_VTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ESVL */
    using MACVTR_ESVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ERSVLM */
    using MACVTR_ERSVLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DOVLTC */
    using MACVTR_DOVLTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EVLS */
    using MACVTR_EVLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EVLRXS */
    using MACVTR_EVLRXS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTHM */
    using MACVTR_VTHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EDVLP */
    using MACVTR_EDVLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ERIVLT */
    using MACVTR_ERIVLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EIVLS */
    using MACVTR_EIVLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EIVLRXS */
    using MACVTR_EIVLRXS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Hash table register */
    using MACVHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLHT */
    using MACVHTR_VLHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN inclusion register */
    using MACVIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLT */
    using MACVIR_VLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLC */
    using MACVIR_VLC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLP */
    using MACVIR_VLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSVL */
    using MACVIR_CSVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLTI */
    using MACVIR_VLTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Inner VLAN inclusion register */
    using MACIVIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLT */
    using MACIVIR_VLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLC */
    using MACIVIR_VLC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLP */
    using MACIVIR_VLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSVL */
    using MACIVIR_CSVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLTI */
    using MACIVIR_VLTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Queue flow control register */
    using MACQTxFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FCB_BPA */
    using MACQTxFCR_FCB_BPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TFE */
    using MACQTxFCR_TFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLT */
    using MACQTxFCR_PLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DZPQ */
    using MACQTxFCR_DZPQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PT */
    using MACQTxFCR_PT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx flow control register */
    using MACRxFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFE */
    using MACRxFCR_RFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UP */
    using MACRxFCR_UP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt status register */
    using MACISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHYIS */
    using MACISR_PHYIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMTIS */
    using MACISR_PMTIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPIIS */
    using MACISR_LPIIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMCIS */
    using MACISR_MMCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMCRXIS */
    using MACISR_MMCRXIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMCTXIS */
    using MACISR_MMCTXIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSIS */
    using MACISR_TSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXSTSIS */
    using MACISR_TXSTSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXSTSIS */
    using MACISR_RXSTSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register */
    using MACIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHYIE */
    using MACIER_PHYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMTIE */
    using MACIER_PMTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPIIE */
    using MACIER_LPIIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSIE */
    using MACIER_TSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXSTSIE */
    using MACIER_TXSTSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXSTSIE */
    using MACIER_RXSTSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Tx status register */
    using MACRxTxSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TJT */
    using MACRxTxSR_TJT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NCARR */
    using MACRxTxSR_NCARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCARR */
    using MACRxTxSR_LCARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXDEF */
    using MACRxTxSR_EXDEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCOL */
    using MACRxTxSR_LCOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCOL */
    using MACRxTxSR_EXCOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RWT */
    using MACRxTxSR_RWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMT control status register */
    using MACPCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWRDWN */
    using MACPCSR_PWRDWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MGKPKTEN */
    using MACPCSR_MGKPKTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RWKPKTEN */
    using MACPCSR_RWKPKTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MGKPRCVD */
    using MACPCSR_MGKPRCVD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RWKPRCVD */
    using MACPCSR_RWKPRCVD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GLBLUCAST */
    using MACPCSR_GLBLUCAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RWKPFE */
    using MACPCSR_RWKPFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RWKPTR */
    using MACPCSR_RWKPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RWKFILTRST */
    using MACPCSR_RWKFILTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remove wakeup packet filter register */
    using MACRWKPFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WKUPFRMFTR */
    using MACRWKPFR_WKUPFRMFTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI control status register */
    using MACLCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TLPIEN */
    using MACLCSR_TLPIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TLPIEX */
    using MACLCSR_TLPIEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RLPIEN */
    using MACLCSR_RLPIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RLPIEX */
    using MACLCSR_RLPIEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TLPIST */
    using MACLCSR_TLPIST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RLPIST */
    using MACLCSR_RLPIST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPIEN */
    using MACLCSR_LPIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLS */
    using MACLCSR_PLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLSEN */
    using MACLCSR_PLSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPITXA */
    using MACLCSR_LPITXA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPITE */
    using MACLCSR_LPITE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPITCSE */
    using MACLCSR_LPITCSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI timers control register */
    using MACLTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TWT */
    using MACLTCR_TWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LST */
    using MACLTCR_LST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI entry timer register */
    using MACLETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPIET */
    using MACLETR_LPIET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 17, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1-microsecond-tick counter register */
    using MAC1USTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIC_1US_CNTR */
    using MAC1USTCR_TIC_1US_CNTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version register */
    using MACVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNPSVER */
    using MACVR_SNPSVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USERVER */
    using MACVR_USERVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HW feature 1 register */
    using MACHWF1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFOSIZE */
    using MACHWF1R_RXFIFOSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFIFOSIZE */
    using MACHWF1R_TXFIFOSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSTEN */
    using MACHWF1R_OSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTOEN */
    using MACHWF1R_PTOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADVTHWORD */
    using MACHWF1R_ADVTHWORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCBEN */
    using MACHWF1R_DCBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPHEN */
    using MACHWF1R_SPHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSOEN */
    using MACHWF1R_TSOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMEMA */
    using MACHWF1R_DBGMEMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AVSEL */
    using MACHWF1R_AVSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASHTBLSZ */
    using MACHWF1R_HASHTBLSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3L4FNUM */
    using MACHWF1R_L3L4FNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HW feature 2 register */
    using MACHWF2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXQCNT */
    using MACHWF2R_RXQCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXQCNT */
    using MACHWF2R_TXQCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXCHCNT */
    using MACHWF2R_RXCHCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXCHCNT */
    using MACHWF2R_TXCHCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPSOUTNUM */
    using MACHWF2R_PPSOUTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AUXSNAPNUM */
    using MACHWF2R_AUXSNAPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIO address register */
    using MACMDIOAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MB */
    using MACMDIOAR_MB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C45E */
    using MACMDIOAR_C45E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GOC */
    using MACMDIOAR_GOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SKAP */
    using MACMDIOAR_SKAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CR */
    using MACMDIOAR_CR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NTC */
    using MACMDIOAR_NTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RDA */
    using MACMDIOAR_RDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA */
    using MACMDIOAR_PA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BTB */
    using MACMDIOAR_BTB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSE */
    using MACMDIOAR_PSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIO data register */
    using MACMDIODR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MD */
    using MACMDIODR_MD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RA */
    using MACMDIODR_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARP address register */
    using MACARPAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARPPA */
    using MACARPAR_ARPPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address 0 high register */
    using MACA0HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRHI */
    using MACA0HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AE */
    using MACA0HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address 0 low register */
    using MACA0LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRLO */
    using MACA0LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address 1 low register */
    using MACA1LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRLO */
    using MACA1LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address 2 low register */
    using MACA2LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRLO */
    using MACA2LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address 3 low register */
    using MACA3LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRLO */
    using MACA3LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address 1 high register */
    using MACA1HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRHI */
    using MACA1HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MBC */
    using MACA1HR_MBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SA */
    using MACA1HR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AE */
    using MACA1HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address 2 high register */
    using MACA2HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRHI */
    using MACA2HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MBC */
    using MACA2HR_MBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SA */
    using MACA2HR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AE */
    using MACA2HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address 3 high register */
    using MACA3HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRHI */
    using MACA3HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MBC */
    using MACA3HR_MBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SA */
    using MACA3HR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AE */
    using MACA3HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC control register */
    using MMC_CONTROL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x700, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNTRST */
    using MMC_CONTROL_CNTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNTSTOPRO */
    using MMC_CONTROL_CNTSTOPRO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSTONRD */
    using MMC_CONTROL_RSTONRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNTFREEZ */
    using MMC_CONTROL_CNTFREEZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNTPRST */
    using MMC_CONTROL_CNTPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNTPRSTLVL */
    using MMC_CONTROL_CNTPRSTLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCDBC */
    using MMC_CONTROL_UCDBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx interrupt register */
    using MMC_RX_INTERRUPT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x704, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXCRCERPIS */
    using MMC_RX_INTERRUPT_RXCRCERPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXALGNERPIS */
    using MMC_RX_INTERRUPT_RXALGNERPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXUCGPIS */
    using MMC_RX_INTERRUPT_RXUCGPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXLPIUSCIS */
    using MMC_RX_INTERRUPT_RXLPIUSCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXLPITRCIS */
    using MMC_RX_INTERRUPT_RXLPITRCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Tx interrupt register */
    using MMC_TX_INTERRUPT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x708, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXSCOLGPIS */
    using MMC_TX_INTERRUPT_TXSCOLGPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXMCOLGPIS */
    using MMC_TX_INTERRUPT_TXMCOLGPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXGPKTIS */
    using MMC_TX_INTERRUPT_TXGPKTIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXLPIUSCIS */
    using MMC_TX_INTERRUPT_TXLPIUSCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXLPITRCIS */
    using MMC_TX_INTERRUPT_TXLPITRCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx interrupt mask register */
    using MMC_RX_INTERRUPT_MASK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXCRCERPIM */
    using MMC_RX_INTERRUPT_MASK_RXCRCERPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXALGNERPIM */
    using MMC_RX_INTERRUPT_MASK_RXALGNERPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXUCGPIM */
    using MMC_RX_INTERRUPT_MASK_RXUCGPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXLPIUSCIM */
    using MMC_RX_INTERRUPT_MASK_RXLPIUSCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXLPITRCIM */
    using MMC_RX_INTERRUPT_MASK_RXLPITRCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Tx interrupt mask register */
    using MMC_TX_INTERRUPT_MASK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x710, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXSCOLGPIM */
    using MMC_TX_INTERRUPT_MASK_TXSCOLGPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXMCOLGPIM */
    using MMC_TX_INTERRUPT_MASK_TXMCOLGPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXGPKTIM */
    using MMC_TX_INTERRUPT_MASK_TXGPKTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXLPIUSCIM */
    using MMC_TX_INTERRUPT_MASK_TXLPIUSCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXLPITRCIM */
    using MMC_TX_INTERRUPT_MASK_TXLPITRCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx single collision good packets register */
    using TX_SINGLE_COLLISION_GOOD_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXSNGLCOLG */
    using TX_SINGLE_COLLISION_GOOD_PACKETS_TXSNGLCOLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx multiple collision good packets register */
    using TX_MULTIPLE_COLLISION_GOOD_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x750, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXMULTCOLG */
    using TX_MULTIPLE_COLLISION_GOOD_PACKETS_TXMULTCOLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx packet count good register */
    using TX_PACKET_COUNT_GOOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x768, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXPKTG */
    using TX_PACKET_COUNT_GOOD_TXPKTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx CRC error packets register */
    using RX_CRC_ERROR_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x794, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXCRCERR */
    using RX_CRC_ERROR_PACKETS_RXCRCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx alignment error packets register */
    using RX_ALIGNMENT_ERROR_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x798, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXALGNERR */
    using RX_ALIGNMENT_ERROR_PACKETS_RXALGNERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx unicast packets good register */
    using RX_UNICAST_PACKETS_GOOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXUCASTG */
    using RX_UNICAST_PACKETS_GOOD_RXUCASTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx LPI microsecond timer register */
    using TX_LPI_USEC_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXLPIUSC */
    using TX_LPI_USEC_CNTR_TXLPIUSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx LPI transition counter register */
    using TX_LPI_TRAN_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXLPITRC */
    using TX_LPI_TRAN_CNTR_TXLPITRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx LPI microsecond counter register */
    using RX_LPI_USEC_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXLPIUSC */
    using RX_LPI_USEC_CNTR_RXLPIUSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx LPI transition counter register */
    using RX_LPI_TRAN_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXLPITRC */
    using RX_LPI_TRAN_CNTR_RXLPITRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3 and L4 control 0 register */
    using MACL3L4C0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x900, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3PEN0 */
    using MACL3L4C0R_L3PEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3SAM0 */
    using MACL3L4C0R_L3SAM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3SAIM0 */
    using MACL3L4C0R_L3SAIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3DAM0 */
    using MACL3L4C0R_L3DAM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3DAIM0 */
    using MACL3L4C0R_L3DAIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3HSBM0 */
    using MACL3L4C0R_L3HSBM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3HDBM0 */
    using MACL3L4C0R_L3HDBM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4PEN0 */
    using MACL3L4C0R_L4PEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4SPM0 */
    using MACL3L4C0R_L4SPM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4SPIM0 */
    using MACL3L4C0R_L4SPIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4DPM0 */
    using MACL3L4C0R_L4DPM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4DPIM0 */
    using MACL3L4C0R_L4DPIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer4 address filter 0 register */
    using MACL4A0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x904, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4SP0 */
    using MACL4A0R_L4SP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4DP0 */
    using MACL4A0R_L4DP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug register */
    using MACDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RPESTS */
    using MACDR_RPESTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFCFCSTS */
    using MACDR_RFCFCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TPESTS */
    using MACDR_TPESTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TFCSTS */
    using MACDR_TFCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MACL3A00R */
    using MACL3A00R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x910, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3A00 */
    using MACL3A00R_L3A00 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 1 filter 0 register */
    using MACL3A10R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x914, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3A10 */
    using MACL3A10R_L3A10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 Address 2 filter 0 register */
    using MACL3A20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x918, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3A20 */
    using MACL3A20_L3A20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 Address 3 filter 0 register */
    using MACL3A30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x91C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3A30 */
    using MACL3A30_L3A30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3 and L4 control 1 register */
    using MACL3L4C1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x930, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3PEN1 */
    using MACL3L4C1R_L3PEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3SAM1 */
    using MACL3L4C1R_L3SAM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3SAIM1 */
    using MACL3L4C1R_L3SAIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3DAM1 */
    using MACL3L4C1R_L3DAM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3DAIM1 */
    using MACL3L4C1R_L3DAIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3HSBM1 */
    using MACL3L4C1R_L3HSBM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3HDBM1 */
    using MACL3L4C1R_L3HDBM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4PEN1 */
    using MACL3L4C1R_L4PEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4SPM1 */
    using MACL3L4C1R_L4SPM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4SPIM1 */
    using MACL3L4C1R_L4SPIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4DPM1 */
    using MACL3L4C1R_L4DPM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4DPIM1 */
    using MACL3L4C1R_L4DPIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 address filter 1 register */
    using MACL4A1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x934, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4SP1 */
    using MACL4A1R_L4SP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L4DP1 */
    using MACL4A1R_L4DP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 0 filter 1 Register */
    using MACL3A01R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x940, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3A01 */
    using MACL3A01R_L3A01 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 1 filter 1 register */
    using MACL3A11R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x944, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3A11 */
    using MACL3A11R_L3A11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 2 filter 1 Register */
    using MACL3A21R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x948, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3A21 */
    using MACL3A21R_L3A21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 3 filter 1 register */
    using MACL3A31R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3A31 */
    using MACL3A31R_L3A31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp control Register */
    using MACTSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSENA */
    using MACTSCR_TSENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSCFUPDT */
    using MACTSCR_TSCFUPDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSINIT */
    using MACTSCR_TSINIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSUPDT */
    using MACTSCR_TSUPDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSADDREG */
    using MACTSCR_TSADDREG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSENALL */
    using MACTSCR_TSENALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSCTRLSSR */
    using MACTSCR_TSCTRLSSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSVER2ENA */
    using MACTSCR_TSVER2ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSIPENA */
    using MACTSCR_TSIPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSIPV6ENA */
    using MACTSCR_TSIPV6ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSIPV4ENA */
    using MACTSCR_TSIPV4ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSEVNTENA */
    using MACTSCR_TSEVNTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSMSTRENA */
    using MACTSCR_TSMSTRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAPTYPSEL */
    using MACTSCR_SNAPTYPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSENMACADDR */
    using MACTSCR_TSENMACADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSC */
    using MACTSCR_CSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXTSSTSM */
    using MACTSCR_TXTSSTSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-second increment register */
    using MACSSIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNSINC */
    using MACSSIR_SNSINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SSINC */
    using MACSSIR_SSINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time seconds register */
    using MACSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSS */
    using MACSTSR_TSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time nanoseconds register */
    using MACSTNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSS */
    using MACSTNR_TSSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time seconds update register */
    using MACSTSUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSS */
    using MACSTSUR_TSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time nanoseconds update register */
    using MACSTNUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSS */
    using MACSTNUR_TSSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDSUB */
    using MACSTNUR_ADDSUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp addend register */
    using MACTSAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSAR */
    using MACTSAR_TSAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp status register */
    using MACTSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSOVF */
    using MACTSSR_TSSOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSTARGT0 */
    using MACTSSR_TSTARGT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AUXTSTRIG */
    using MACTSSR_AUXTSTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSTRGTERR0 */
    using MACTSSR_TSTRGTERR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXTSSIS */
    using MACTSSR_TXTSSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ATSSTN */
    using MACTSSR_ATSSTN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ATSSTM */
    using MACTSSR_ATSSTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ATSNS */
    using MACTSSR_ATSNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx timestamp status nanoseconds register */
    using MACTxTSSNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXTSSLO */
    using MACTxTSSNR_TXTSSLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXTSSMIS */
    using MACTxTSSNR_TXTSSMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx timestamp status seconds register */
    using MACTxTSSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXTSSHI */
    using MACTxTSSSR_TXTSSHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary control register */
    using MACACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ATSFC */
    using MACACR_ATSFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ATSEN0 */
    using MACACR_ATSEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ATSEN1 */
    using MACACR_ATSEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ATSEN2 */
    using MACACR_ATSEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ATSEN3 */
    using MACACR_ATSEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary timestamp nanoseconds register */
    using MACATSNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AUXTSLO */
    using MACATSNR_AUXTSLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary timestamp seconds register */
    using MACATSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AUXTSHI */
    using MACATSSR_AUXTSHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Ingress asymmetric correction register */
    using MACTSIACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSTIAC */
    using MACTSIACR_OSTIAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Egress asymmetric correction register */
    using MACTSEACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSTEAC */
    using MACTSEACR_OSTEAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Ingress correction nanosecond register */
    using MACTSICNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSIC */
    using MACTSICNR_TSIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Egress correction nanosecond register */
    using MACTSECNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSEC */
    using MACTSECNR_TSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS control register */
    using MACPPSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPSCTRL */
    using MACPPSCR_PPSCTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPSEN0 */
    using MACPPSCR_PPSEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRGTMODSEL0 */
    using MACPPSCR_TRGTMODSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS target time seconds register */
    using MACPPSTTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSTRH0 */
    using MACPPSTTSR_TSTRH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS target time nanoseconds register */
    using MACPPSTTNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TTSL0 */
    using MACPPSTTNR_TTSL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRGTBUSY0 */
    using MACPPSTTNR_TRGTBUSY0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS interval register */
    using MACPPSIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPSINT0 */
    using MACPPSIR_PPSINT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS width register */
    using MACPPSWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPSWIDTH0 */
    using MACPPSWR_PPSWIDTH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Offload control register */
    using MACPOCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTOEN */
    using MACPOCR_PTOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ASYNCEN */
    using MACPOCR_ASYNCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APDREQEN */
    using MACPOCR_APDREQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ASYNCTRIG */
    using MACPOCR_ASYNCTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APDREQTRIG */
    using MACPOCR_APDREQTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DRRDIS */
    using MACPOCR_DRRDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DN */
    using MACPOCR_DN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Source Port Identity 0 Register */
    using MACSPI0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI0 */
    using MACSPI0R_SPI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Source port identity 1 register */
    using MACSPI1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 */
    using MACSPI1R_SPI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Source port identity 2 register */
    using MACSPI2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2 */
    using MACSPI2R_SPI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Log message interval register */
    using MACLMIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI */
    using MACLMIR_LSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DRSYNCR */
    using MACLMIR_DRSYNCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LMPDRI */
    using MACLMIR_LMPDRI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
