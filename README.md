# Embedded++
Embedded++ is a modern C++ abstraction layer for embedded systems(Currently only supports ArmV7M and ArmV6M).

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

**Notice that when you use the BitField template, you should pass the register value type as the first template parameter rather than the bit field value type, or the mask calculation will be wrong.**

### For the one who want to use the Code Generator
```bash
 RegisterLib.py [-h] --svd-file SVD_FILE --output-directory OUTPUT_DIRECTORY --arch {ARMv6M,ARMv7M} [--device-name DEVICE_NAME]
```
Currently the --arch doesn't work, but you still need to pass it.And when you using a wildcard in the SVD file path, you **SHOULD NOT** pass --device-name or the generating will be a failure.

## Requirements
1. A compiler that supports C++20 or later
2. ArmV6M or ArmV7M microcontroller
3. If you want to use the Code Generator, you need python and cmsis-svd installed

## Roadmap
Actually, there's no roadmap for now.But I'm planning to write a abstraction layer just like the HAL in STM32CubeMX.(Of course the layer will be implemented in C++20 and zero overhead too)