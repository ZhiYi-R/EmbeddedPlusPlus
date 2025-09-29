Entry(ResetHandler)
MEMORY {{
    RAM(rwx)    : ORIGIN = {SRAM_Origin}, LENGTH = {SRAM_Length}
    FLASH(rx)   : ORIGIN = {FLASH_Origin}, LENGTH = {FLASH_Length}
}}

_StackTop = ORIGIN(RAM) + LENGTH(RAM);
HeapSize = {HeapSize};
StackSize = {StackSize};

SECTIONS {{
    /** @brief Interrupt Vector Table */
    .InterruptVector: {{
        . = ALIGN(4);
        KEEP(*(.InterruptVector))
        . = ALIGN(4);
    }} >FLASH
    /** @brief text sections (code) */
    .text: {{
        . = ALIGN(4);
        *(.text)           /* .text sections (code) */
        *(.text*)          /* .text* sections (code) */
        *(.glue_7)         /* glue arm to thumb code */
        *(.glue_7t)        /* glue thumb to arm code */
        *(.eh_frame)
        KEEP (*(.init))    /* .init sections (constructor) */
        KEEP (*(.fini))    /* .fini sections (destructor) */
        . = ALIGN(4);
        _TextEnd = .;      /* define a global symbol at end of text section */
    }} >FLASH
    /** @brief rodata sections (constants, strings, etc.) */
    .rodata: {{
        . = ALIGN(4);
        *(.rodata)         /* .rodata sections (constants, strings, etc.) */
        *(.rodata*)        /* .rodata* sections (constants, strings, etc.) */
        . = ALIGN(4);
    }} >FLASH
    /** @brief ARM exception table */
    .ARM.extab(READONLY) : {{
        . = ALIGN(4);
        *(.ARM.extab* .gnu.linkonce.armextab.*)
        . = ALIGN(4);
    }} >FLASH
    /** @brief ARM exception table index */
    .ARM(READONLY): {{
        . = ALIGN(4);
        __ExceptionTableStart = .;
        *(.ARM.exidx*)
        __ExceptionTableEnd = .;
        . = ALIGN(4);
    }} >FLASH
    /** @brief preinit_array sections (constructor) */
    .preinit_array(READONLY): {{
        . = ALIGN(4);
        PROVIDE_HIDDEN(__PreInitArrayStart = .);
        KEEP(*(.preinit_array*))
        . = ALIGN(4);
        PROVIDE_HIDDEN(__PreInitArrayEnd = .);
    }} >FLASH
    /** @brief init_array sections (constructor) */
    .init_array(READONLY): {{
        . = ALIGN(4);
        PROVIDE_HIDDEN(__InitArrayStart = .);
        KEEP(*(.init_array*))
        . = ALIGN(4);
        PROVIDE_HIDDEN(__InitArrayEnd = .);
    }} >FLASH
    /** @brief fini_array sections (destructor) */
    .fini_array(READONLY): {{
        . = ALIGN(4);
        PROVIDE_HIDDEN(__FiniArrayStart = .);
        KEEP(*(SORT(.fini_array.*)))
        KEEP(*(.fini_array*))
        PROVIDE_HIDDEN(__FiniArrayEnd = .);
        . = ALIGN(4);
    }} >FLASH
    _DataLoadAddress = LOADADDR(.data);
    /** @brief data sections (initialized variables) */
    .data: {{
        . = ALIGN(4);
        *(.data)           /* .data sections */
        *(.data*)          /* .data* sections */
        *(.RamFunc)        /* .RamFunc sections */
        *(.RamFunc*)       /* .RamFunc* sections */
        . = ALIGN(4);
        _DataEnd = .;      /* define a global symbol at end of data section */
    }} >RAM AT> FLASH
    /** @brief bss sections (uninitialized variables) */
    . = ALIGN(4);
    .bss : {{
        _BssStart = .;
        *(.bss)            /* .bss sections */
        *(.bss*)           /* .bss* sections */
        *(COMMON)          /* .common sections */
        . = ALIGN(4);
        _BssEnd = .;       /* define a global symbol at end of bss section */
    }} >RAM
    /** @brief Heap and Stack */
    .HeapStack: {{
        . = ALIGN(8)
        PROVIDE(End = .);
        . = . + HeapSize;
        . = . + StackSize;
        . = ALIGN(8);
    }} >RAM
}}
