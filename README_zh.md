# Embedded++

[English](README.md) | 中文

Embedded++ 是一个基于C++20编写的嵌入式开发库，目前仅支持寄存器相关抽象。本仓库CodeGen/下还提供了一些实用的代码生成器。

## 特性

1. 零开销寄存器访问
2. 编译时访问权限检查
3. 模块化的原子操作, 移植到其他平台只需要写对应架构的原子原语即可
4. 寄存器抽象层生成器
5. 链接器脚本生成器
6. 启动代码生成器

## 快速开始

### 从SVD生成寄存器抽象层

#### 依赖
| 依赖项 | 描述 |
| --- | --- |
| python3| 所有的CodeGen都由Python3编写，请自行安装。|
| cmsis-svd | 用于解析SVD文件 |
| 设备SVD文件 | 代码生成器使用SVD文件来读取设备的寄存器信息。|

#### 使用
```bash
python3 RegisterLib.py --svd-file SVD_FILE_PATH --output-dir OUTPUT_DIR --arch ARCHITECTURE [--device-name DEVICE_NAME]
```
值得注意的是arch参数目前并没有任何实际作用，而如果你想使用通配符传入SVD文件，就像这样:
```bash
python3 RegisterLib.py --svd-file /path/to/svd/*.svd OTHER_PARAMS
```
请务必**不要传入--device-name**参数，因为这个参数会覆盖传入的SVD文件中的device_name导致生成的代码全部出现在一个文件夹下。

### Linker Script生成

#### 依赖
| 依赖项 | 描述 |
| --- | --- |
| python3 | 链接脚本生成器由Python3编写，请自行安装。 |

#### 使用

```bash
python3 LinkerScript.py --Output-File OUTPUT_FILE --SRAM-Size SRAM_SIZE --Flash-Size FLASH_SIZE [--SRAM-Start SRAM_START] [--Flash-Start FLASH_START] [--Heap-Size HEAP_SIZE] [--Stack-Size STACK_SIZE]
```
可选参数的默认值如下：
| 参数 | 默认值 |
| --- | --- |
| SRAM_Start | 0x20000000 |
| Flash_Start | 0x8000000 |
| Heap_Size | 0x400 |
| Stack_Size | 0x200 |

### 启动代码生成

#### 依赖
| 依赖项 | 描述 |
| --- | --- |
| python3 | 启动代码生成器由Python3编写，请自行安装。 |
| 设备SVD文件 | 启动代码生成器使用SVD文件来读取设备的寄存器信息。 |
| cmsis-svd | 用于解析SVD文件 |

#### 使用
```bash
python3 StartCode.py --Output-Directory OUTPUT_DIRECTORY --SVD-File SVD_FILE --Target-Architecture TARGET_ARCHITECTURE
```
由于SVD文件中通常不包含系统异常相关信息，这个脚本依赖于Resources/SystemExceptions.json来获取系统异常信息，而这个json文件目前我只编写了ARMV6M, ARMV7M, ARMV8M下的几个主要Cortex-M架构的异常信息，--Target-Architecture参数可以传入以下值：

- CM0
- CM0P
- CM3
- CM4
- CM7
- CM23
- CM33  

该脚本成功执行后将生成interrupts.hpp和Startup.cpp两个文件。其中Startup.cpp文件将包含启动代码、中断向量表和默认Handler实现，interrupts.hpp文件将包含中断处理函数原型和中断号常量。