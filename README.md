# Embedded++

English | [中文](README_zh.md)

Embedded++ is a modern C++ abstraction layer for embedded systems.

## Features
1. Zero overhead register access
2. Compile time access privilege check
3. Basic register library generator wrote in python

## Usage

### For the one who just want to use the abstraction layer iteself
```cpp
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

using foo = ::EmbeddedPP::LowLevel::Register<value_type, address, ::EmbeddedPP::LowLevel::Accessibility::Privlege>;
using bar = ::EmbeddedPP::LowLevel::BitField<register_value_type, bit_offset, bit_width>;
```
And you **MUST** define your architecture in your project, just like this before including any embedded++ header.
```cpp
#define TARGET_ARCH_ARM_V6M 1
#define TARGET_ARCH_ARM_V7M 0
#define TARGET_ARCH_ARM_V8M 0
```
Or you could just using compiler flags, like this:
```bash
g++ SOME_FLAGS -DTARGET_ARCH_ARM_V6M=1 -DTARGET_ARCH_ARM_V7M=0 -DTARGET_ARCH_ARM_V8M=0
g++ SOME_FLAGS -DTARGET_ARCH_ARM_V6M=0 -DTARGET_ARCH_ARM_V7M=1 -DTARGET_ARCH_ARM_V8M=0
g++ SOME_FLAGS -DTARGET_ARCH_ARM_V6M=0 -DTARGET_ARCH_ARM_V7M=0 -DTARGET_ARCH_ARM_V8M=1
```
**Notice that when you use the BitField template, you should pass the register value type as the first template parameter rather than the bit field value type, or the mask calculation will be wrong.**

### For the one who want to use the Code Generator
```bash
 RegisterLib.py [-h] --svd-file SVD_FILE --output-directory OUTPUT_DIRECTORY --arch {ARMv6M,ARMv7M} [--device-name DEVICE_NAME]
```
Currently the --arch doesn't work, but you still need to pass it.And when you using a wildcard in the SVD file path, you **SHOULD NOT** pass --device-name or the generating will be a failure.

## Requirements
1. A compiler that supports C++20 or later
2. If you want to use the Code Generator, you need python and cmsis-svd installed

## Roadmap
Actually, there's no roadmap for now.But I'm planning to write a abstraction layer just like the HAL in STM32CubeMX.(Of course the layer will be implemented in C++20 and zero overhead too)