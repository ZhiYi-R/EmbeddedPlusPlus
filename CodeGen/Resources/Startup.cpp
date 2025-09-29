#include <cstdint>
#include "Interrupts.hpp"

extern int main();
extern char _StackTop;
extern "C" [[gnu::used]]void DefaultHandler() noexcept {
    __asm__ volatile("bkpt #0");
    for(;;);
}

extern "C" [[gnu::used, noreturn]] void ResetHandler() noexcept {
    // 初始化 .data 段
    extern char _DataLoadAddress, _DataStart, _DataEnd;

    uint8_t* src = reinterpret_cast<uint8_t*>(&_DataLoadAddress);
    uint8_t* dst = reinterpret_cast<uint8_t*>(&_DataStart);
    uint8_t* end = reinterpret_cast<uint8_t*>(&_DataEnd);
    while (dst != end)
        *dst++ = *src++;
    // 清零 .bss 段
    extern char _BssStart, _BssEnd;
    dst = reinterpret_cast<uint8_t*>(&_BssStart);
    end = reinterpret_cast<uint8_t*>(&_BssEnd);

    while (dst != end)
        *dst++ = 0;
    main();
    for (;;)
        __asm__("wfi");
}
