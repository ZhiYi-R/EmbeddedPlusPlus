#ifndef EMBEDDED_PLUS_PLUS_INTERRUPTS_HPP
#define EMBEDDED_PLUS_PLUS_INTERRUPTS_HPP

#include <cstdint>

#define AliasDefault extern "C" [[gnu::weak, gnu::alias("DefaultHandler")]]

/* 中断定义 */
{interrupt_defines}
/* 中断号 */
{interrupt_numbers}

#endif // EMBEDDED_PLUS_PLUS_INTERRUPTS_HPP