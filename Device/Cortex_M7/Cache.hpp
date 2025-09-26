/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M7_CACHE_HPP
#define EMBEDDED_PP_CORTEX_M7_CACHE_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Cache Control */
namespace Cortex_M7::Cache {

    /** @brief CLIDR */
    using CLIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LoUU */
    using CLIDR_LoUU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - L1_cache: No description (value: 0)
     *          - L2_cache: No description (value: 1)
     *          - L3_cache: No description (value: 2)
     */
        /** @brief L1_cache value */
    constexpr std::uint32_t CLIDR_LoUU_L1_cache = 0;
        /** @brief L2_cache value */
    constexpr std::uint32_t CLIDR_LoUU_L2_cache = 1;
        /** @brief L3_cache value */
    constexpr std::uint32_t CLIDR_LoUU_L3_cache = 2;

    /** @brief LoC */
    using CLIDR_LoC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - L1_cache: No description (value: 0)
     *          - L2_cache: No description (value: 1)
     *          - L3_cache: No description (value: 2)
     */
        /** @brief L1_cache value */
    constexpr std::uint32_t CLIDR_LoC_L1_cache = 0;
        /** @brief L2_cache value */
    constexpr std::uint32_t CLIDR_LoC_L2_cache = 1;
        /** @brief L3_cache value */
    constexpr std::uint32_t CLIDR_LoC_L3_cache = 2;

    /** @brief LoUIS */
    using CLIDR_LoUIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - L1_cache: No description (value: 0)
     *          - L2_cache: No description (value: 1)
     *          - L3_cache: No description (value: 2)
     */
        /** @brief L1_cache value */
    constexpr std::uint32_t CLIDR_LoUIS_L1_cache = 0;
        /** @brief L2_cache value */
    constexpr std::uint32_t CLIDR_LoUIS_L2_cache = 1;
        /** @brief L3_cache value */
    constexpr std::uint32_t CLIDR_LoUIS_L3_cache = 2;

    /** @brief CL7 */
    using CLIDR_CL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - No_cache: No description (value: 0)
     *          - I_cache_only: No description (value: 1)
     *          - D_cache_only: No description (value: 2)
     *          - Separate_I_and_D_caches: No description (value: 3)
     *          - Unified_cache: No description (value: 4)
     */
        /** @brief No_cache value */
    constexpr std::uint32_t CLIDR_CL7_No_cache = 0;
        /** @brief I_cache_only value */
    constexpr std::uint32_t CLIDR_CL7_I_cache_only = 1;
        /** @brief D_cache_only value */
    constexpr std::uint32_t CLIDR_CL7_D_cache_only = 2;
        /** @brief Separate_I_and_D_caches value */
    constexpr std::uint32_t CLIDR_CL7_Separate_I_and_D_caches = 3;
        /** @brief Unified_cache value */
    constexpr std::uint32_t CLIDR_CL7_Unified_cache = 4;

    /** @brief CL6 */
    using CLIDR_CL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - No_cache: No description (value: 0)
     *          - I_cache_only: No description (value: 1)
     *          - D_cache_only: No description (value: 2)
     *          - Separate_I_and_D_caches: No description (value: 3)
     *          - Unified_cache: No description (value: 4)
     */
        /** @brief No_cache value */
    constexpr std::uint32_t CLIDR_CL6_No_cache = 0;
        /** @brief I_cache_only value */
    constexpr std::uint32_t CLIDR_CL6_I_cache_only = 1;
        /** @brief D_cache_only value */
    constexpr std::uint32_t CLIDR_CL6_D_cache_only = 2;
        /** @brief Separate_I_and_D_caches value */
    constexpr std::uint32_t CLIDR_CL6_Separate_I_and_D_caches = 3;
        /** @brief Unified_cache value */
    constexpr std::uint32_t CLIDR_CL6_Unified_cache = 4;

    /** @brief CL5 */
    using CLIDR_CL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - No_cache: No description (value: 0)
     *          - I_cache_only: No description (value: 1)
     *          - D_cache_only: No description (value: 2)
     *          - Separate_I_and_D_caches: No description (value: 3)
     *          - Unified_cache: No description (value: 4)
     */
        /** @brief No_cache value */
    constexpr std::uint32_t CLIDR_CL5_No_cache = 0;
        /** @brief I_cache_only value */
    constexpr std::uint32_t CLIDR_CL5_I_cache_only = 1;
        /** @brief D_cache_only value */
    constexpr std::uint32_t CLIDR_CL5_D_cache_only = 2;
        /** @brief Separate_I_and_D_caches value */
    constexpr std::uint32_t CLIDR_CL5_Separate_I_and_D_caches = 3;
        /** @brief Unified_cache value */
    constexpr std::uint32_t CLIDR_CL5_Unified_cache = 4;

    /** @brief CL4 */
    using CLIDR_CL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - No_cache: No description (value: 0)
     *          - I_cache_only: No description (value: 1)
     *          - D_cache_only: No description (value: 2)
     *          - Separate_I_and_D_caches: No description (value: 3)
     *          - Unified_cache: No description (value: 4)
     */
        /** @brief No_cache value */
    constexpr std::uint32_t CLIDR_CL4_No_cache = 0;
        /** @brief I_cache_only value */
    constexpr std::uint32_t CLIDR_CL4_I_cache_only = 1;
        /** @brief D_cache_only value */
    constexpr std::uint32_t CLIDR_CL4_D_cache_only = 2;
        /** @brief Separate_I_and_D_caches value */
    constexpr std::uint32_t CLIDR_CL4_Separate_I_and_D_caches = 3;
        /** @brief Unified_cache value */
    constexpr std::uint32_t CLIDR_CL4_Unified_cache = 4;

    /** @brief CL3 */
    using CLIDR_CL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - No_cache: No description (value: 0)
     *          - I_cache_only: No description (value: 1)
     *          - D_cache_only: No description (value: 2)
     *          - Separate_I_and_D_caches: No description (value: 3)
     *          - Unified_cache: No description (value: 4)
     */
        /** @brief No_cache value */
    constexpr std::uint32_t CLIDR_CL3_No_cache = 0;
        /** @brief I_cache_only value */
    constexpr std::uint32_t CLIDR_CL3_I_cache_only = 1;
        /** @brief D_cache_only value */
    constexpr std::uint32_t CLIDR_CL3_D_cache_only = 2;
        /** @brief Separate_I_and_D_caches value */
    constexpr std::uint32_t CLIDR_CL3_Separate_I_and_D_caches = 3;
        /** @brief Unified_cache value */
    constexpr std::uint32_t CLIDR_CL3_Unified_cache = 4;

    /** @brief CL2 */
    using CLIDR_CL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - No_cache: No description (value: 0)
     *          - I_cache_only: No description (value: 1)
     *          - D_cache_only: No description (value: 2)
     *          - Separate_I_and_D_caches: No description (value: 3)
     *          - Unified_cache: No description (value: 4)
     */
        /** @brief No_cache value */
    constexpr std::uint32_t CLIDR_CL2_No_cache = 0;
        /** @brief I_cache_only value */
    constexpr std::uint32_t CLIDR_CL2_I_cache_only = 1;
        /** @brief D_cache_only value */
    constexpr std::uint32_t CLIDR_CL2_D_cache_only = 2;
        /** @brief Separate_I_and_D_caches value */
    constexpr std::uint32_t CLIDR_CL2_Separate_I_and_D_caches = 3;
        /** @brief Unified_cache value */
    constexpr std::uint32_t CLIDR_CL2_Unified_cache = 4;

    /** @brief CL1 */
    using CLIDR_CL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - No_cache: No description (value: 0)
     *          - I_cache_only: No description (value: 1)
     *          - D_cache_only: No description (value: 2)
     *          - Separate_I_and_D_caches: No description (value: 3)
     *          - Unified_cache: No description (value: 4)
     */
        /** @brief No_cache value */
    constexpr std::uint32_t CLIDR_CL1_No_cache = 0;
        /** @brief I_cache_only value */
    constexpr std::uint32_t CLIDR_CL1_I_cache_only = 1;
        /** @brief D_cache_only value */
    constexpr std::uint32_t CLIDR_CL1_D_cache_only = 2;
        /** @brief Separate_I_and_D_caches value */
    constexpr std::uint32_t CLIDR_CL1_Separate_I_and_D_caches = 3;
        /** @brief Unified_cache value */
    constexpr std::uint32_t CLIDR_CL1_Unified_cache = 4;

    /** @brief CTR */
    using CTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief F */
    using CTR_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - ARMv6_and_earlier_format: No description (value: 0)
     *          - ARMv7_format: No description (value: 4)
     */
        /** @brief ARMv6_and_earlier_format value */
    constexpr std::uint32_t CTR_F_ARMv6_and_earlier_format = 0;
        /** @brief ARMv7_format value */
    constexpr std::uint32_t CTR_F_ARMv7_format = 4;

    /** @brief CWG */
    using CTR_CWG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - _8_word_granularity: No description (value: 3)
     *          - _16_word_granularity: No description (value: 4)
     */
        /** @brief _8_word_granularity value */
    constexpr std::uint32_t CTR_CWG__8_word_granularity = 3;
        /** @brief _16_word_granularity value */
    constexpr std::uint32_t CTR_CWG__16_word_granularity = 4;

    /** @brief ERG */
    using CTR_ERG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - _8_word_granularity: No description (value: 3)
     *          - _16_word_granularity: No description (value: 4)
     */
        /** @brief _8_word_granularity value */
    constexpr std::uint32_t CTR_ERG__8_word_granularity = 3;
        /** @brief _16_word_granularity value */
    constexpr std::uint32_t CTR_ERG__16_word_granularity = 4;

    /** @brief DMinLine */
    using CTR_DMinLine = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - _8_word_granularity: No description (value: 3)
     *          - _16_word_granularity: No description (value: 4)
     */
        /** @brief _8_word_granularity value */
    constexpr std::uint32_t CTR_DMinLine__8_word_granularity = 3;
        /** @brief _16_word_granularity value */
    constexpr std::uint32_t CTR_DMinLine__16_word_granularity = 4;

    /** @brief L1IP */
    using CTR_L1IP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Virtual_Index_Virtual_Tag: No description (value: 1)
     *          - Virtual_Index_Physical_Tag: No description (value: 2)
     *          - Physical_Index_Physical_Tag: No description (value: 3)
     */
        /** @brief Virtual_Index_Virtual_Tag value */
    constexpr std::uint32_t CTR_L1IP_Virtual_Index_Virtual_Tag = 1;
        /** @brief Virtual_Index_Physical_Tag value */
    constexpr std::uint32_t CTR_L1IP_Virtual_Index_Physical_Tag = 2;
        /** @brief Physical_Index_Physical_Tag value */
    constexpr std::uint32_t CTR_L1IP_Physical_Index_Physical_Tag = 3;

    /** @brief IminLine */
    using CTR_IminLine = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - _8_word_granularity: No description (value: 3)
     *          - _16_word_granularity: No description (value: 4)
     */
        /** @brief _8_word_granularity value */
    constexpr std::uint32_t CTR_IminLine__8_word_granularity = 3;
        /** @brief _16_word_granularity value */
    constexpr std::uint32_t CTR_IminLine__16_word_granularity = 4;

    /** @brief CCSIDR */
    using CCSIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WT */
    using CCSIDR_WT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WB */
    using CCSIDR_WB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RA */
    using CCSIDR_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WA */
    using CCSIDR_WA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NS */
    using CCSIDR_NS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - _16KB_cache_size: No description (value: 127)
     *          - _32KB_cache_size: No description (value: 255)
     *          - _64KB_cache_size: No description (value: 511)
     */
        /** @brief _16KB_cache_size value */
    constexpr std::uint32_t CCSIDR_NS__16KB_cache_size = 127;
        /** @brief _32KB_cache_size value */
    constexpr std::uint32_t CCSIDR_NS__32KB_cache_size = 255;
        /** @brief _64KB_cache_size value */
    constexpr std::uint32_t CCSIDR_NS__64KB_cache_size = 511;

    /** @brief A */
    using CCSIDR_A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - _1_way: No description (value: 0)
     *          - _2_ways: No description (value: 1)
     *          - _3_ways: No description (value: 2)
     *          - _4_ways: No description (value: 3)
     *          - _5_ways: No description (value: 4)
     *          - _6_ways: No description (value: 5)
     *          - _7_ways: No description (value: 6)
     *          - _8_ways: No description (value: 7)
     *          - _9_ways: No description (value: 8)
     *          - _10_ways: No description (value: 9)
     *          - _11_ways: No description (value: 10)
     *          - _12_ways: No description (value: 11)
     *          - _13_ways: No description (value: 12)
     *          - _14_ways: No description (value: 13)
     *          - _15_ways: No description (value: 14)
     *          - _16_ways: No description (value: 15)
     */
        /** @brief _1_way value */
    constexpr std::uint32_t CCSIDR_A__1_way = 0;
        /** @brief _2_ways value */
    constexpr std::uint32_t CCSIDR_A__2_ways = 1;
        /** @brief _3_ways value */
    constexpr std::uint32_t CCSIDR_A__3_ways = 2;
        /** @brief _4_ways value */
    constexpr std::uint32_t CCSIDR_A__4_ways = 3;
        /** @brief _5_ways value */
    constexpr std::uint32_t CCSIDR_A__5_ways = 4;
        /** @brief _6_ways value */
    constexpr std::uint32_t CCSIDR_A__6_ways = 5;
        /** @brief _7_ways value */
    constexpr std::uint32_t CCSIDR_A__7_ways = 6;
        /** @brief _8_ways value */
    constexpr std::uint32_t CCSIDR_A__8_ways = 7;
        /** @brief _9_ways value */
    constexpr std::uint32_t CCSIDR_A__9_ways = 8;
        /** @brief _10_ways value */
    constexpr std::uint32_t CCSIDR_A__10_ways = 9;
        /** @brief _11_ways value */
    constexpr std::uint32_t CCSIDR_A__11_ways = 10;
        /** @brief _12_ways value */
    constexpr std::uint32_t CCSIDR_A__12_ways = 11;
        /** @brief _13_ways value */
    constexpr std::uint32_t CCSIDR_A__13_ways = 12;
        /** @brief _14_ways value */
    constexpr std::uint32_t CCSIDR_A__14_ways = 13;
        /** @brief _15_ways value */
    constexpr std::uint32_t CCSIDR_A__15_ways = 14;
        /** @brief _16_ways value */
    constexpr std::uint32_t CCSIDR_A__16_ways = 15;

    /** @brief Line Size */
    using CCSIDR_LS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - _4_words: No description (value: 0)
     *          - _8_words: No description (value: 1)
     *          - _16_words: No description (value: 2)
     *          - _32_words: No description (value: 3)
     *          - _64_words: No description (value: 4)
     *          - _128_words: No description (value: 5)
     *          - _256_words: No description (value: 6)
     *          - _512_words: No description (value: 7)
     */
        /** @brief _4_words value */
    constexpr std::uint32_t CCSIDR_LS__4_words = 0;
        /** @brief _8_words value */
    constexpr std::uint32_t CCSIDR_LS__8_words = 1;
        /** @brief _16_words value */
    constexpr std::uint32_t CCSIDR_LS__16_words = 2;
        /** @brief _32_words value */
    constexpr std::uint32_t CCSIDR_LS__32_words = 3;
        /** @brief _64_words value */
    constexpr std::uint32_t CCSIDR_LS__64_words = 4;
        /** @brief _128_words value */
    constexpr std::uint32_t CCSIDR_LS__128_words = 5;
        /** @brief _256_words value */
    constexpr std::uint32_t CCSIDR_LS__256_words = 6;
        /** @brief _512_words value */
    constexpr std::uint32_t CCSIDR_LS__512_words = 7;

    /** @brief CSSELR */
    using CSSELR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Level */
    using CSSELR_L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Type */
    using CSSELR_IND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Data_cache: No description (value: 0)
     *          - Instruction_cache: No description (value: 1)
     */
        /** @brief Data_cache value */
    constexpr std::uint32_t CSSELR_IND_Data_cache = 0;
        /** @brief Instruction_cache value */
    constexpr std::uint32_t CSSELR_IND_Instruction_cache = 1;

    /** @brief ICIALLU */
    using ICIALLU = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICIMVAU */
    using ICIMVAU = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCIMVAC */
    using DCIMVAC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCISW */
    using DCISW = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCMVAU */
    using DCCMVAU = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCMVAC */
    using DCCMVAC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCSW */
    using DCCSW = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCIMVAC */
    using DCCIMVAC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCISW */
    using DCCISW = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BPIALL */
    using BPIALL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
