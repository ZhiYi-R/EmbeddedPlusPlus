# Embedded++

English | [中文](README_zh.md)

Embedded++ is an embedded development library written in C++20. Currently, it only provides abstractions related to hardware registers. This repository also includes several practical code generators under the `CodeGen/` directory.

## Features

1. Zero-overhead register access  
2. Compile-time access permission checks  
3. Modular atomic operations — porting to other platforms only requires implementing architecture-specific atomic primitives  
4. Register abstraction layer generator  
5. Linker script generator  
6. Startup code generator  

## Quick Start

### Generating a Register Abstraction Layer from SVD

#### Dependencies

| Dependency       | Description |
|------------------|-------------|
| `python3`        | All code generators are written in Python 3. Please install it yourself. |
| `cmsis-svd`      | Used to parse SVD files. |
| Device SVD file  | The code generator uses the SVD file to read device register information. |

#### Usage

```bash
python3 RegisterLib.py --svd-file SVD_FILE_PATH --output-dir OUTPUT_DIR --arch ARCHITECTURE [--device-name DEVICE_NAME]
```

> **Note:** The `--arch` parameter currently has no effect.  
> If you want to pass multiple SVD files using wildcards (e.g., `/path/to/svd/*.svd`), **do not** specify the `--device-name` option. Doing so will override the device name from each SVD file, causing all generated code to be placed in a single output directory.

---

### Linker Script Generation

#### Dependencies

| Dependency | Description |
|------------|-------------|
| `python3`  | The linker script generator is written in Python 3. Please install it yourself. |

#### Usage

```bash
python3 LinkerScript.py --Output-File OUTPUT_FILE --SRAM-Size SRAM_SIZE --Flash-Size FLASH_SIZE [--SRAM-Start SRAM_START] [--Flash-Start FLASH_START] [--Heap-Size HEAP_SIZE] [--Stack-Size STACK_SIZE]
```

Default values for optional parameters:

| Parameter      | Default Value |
|----------------|---------------|
| `SRAM_Start`   | `0x20000000`  |
| `Flash_Start`  | `0x08000000`  |
| `Heap_Size`    | `0x400`       |
| `Stack_Size`   | `0x200`       |

> **Note:** The Flash start address default was corrected to `0x08000000` (8-digit hex) for consistency with typical ARM Cortex-M memory maps.

---

### Startup Code Generation

#### Dependencies

| Dependency       | Description |
|------------------|-------------|
| `python3`        | The startup code generator is written in Python 3. Please install it yourself. |
| Device SVD file  | The generator uses the SVD file to read device register information. |
| `cmsis-svd`      | Used to parse SVD files. |

#### Usage

```bash
python3 StartCode.py --Output-Directory OUTPUT_DIRECTORY --SVD-File SVD_FILE --Target-Architecture TARGET_ARCHITECTURE
```

Since SVD files typically do not contain system exception information, this script relies on `Resources/SystemExceptions.json` to obtain system exception details. Currently, this JSON file only includes exception definitions for major Cortex-M architectures under ARMv6-M, ARMv7-M, and ARMv8-M.

Valid values for `--Target-Architecture`:

- `CM0`
- `CM0P`
- `CM3`
- `CM4`
- `CM7`
- `CM23`
- `CM33`

Upon successful execution, the script generates two files:
- `Startup.cpp`: Contains the startup code, interrupt vector table, and default interrupt handler implementations.
- `interrupts.hpp`: Contains interrupt handler prototypes and interrupt number constants.