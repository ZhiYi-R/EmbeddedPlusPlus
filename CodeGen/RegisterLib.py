import re
import os
import tqdm
import logging
import argparse
from typing import Literal
from cmsis_svd.parser import SVDParser
from cmsis_svd.model import SVDDevice, SVDPeripheral, SVDRegister, SVDField, SVDEnumeratedValue

Architecture = Literal['ARMv6M', 'ARMv7M']


class LoggerHandler(logging.Handler):
    def __init__(self, level = logging.DEBUG) -> None:
        super().__init__(level)
    
    def emit(self, record: logging.LogRecord) -> None:
        try:
            msg = self.format(record)
            tqdm.tqdm.write(msg)
            self.flush()
        except Exception:
            self.handleError(record)


def SanitizeDescription(description: str) -> str:
    """清理描述文本，将换行符替换为空格，并将连续的多个空格替换为单个空格"""
    if not description:
        return ""
    # 将换行符替换为空格
    description = description.replace('\n', ' ').replace('\r', ' ')
    # 将连续的多个空格替换为单个空格
    description = re.sub(r' +', ' ', description)
    # 去除首尾空格
    return description.strip()


def ParseEnumratedValues(Field: SVDField) -> list[dict]:
    result = []
    if Field.enumerated_values is None:
        logging.warning(f"[Enumerated Value Parser]Field {Field.name if Field.name is not None else ''} has no enumerated values, skipping...")
        return result
    if Field.name is None:
        logging.warning(f"[Enumerated Value Parser]Field has no name")
    else:
        logging.info(f'[Enumerated Value Parser]Parsing {Field.name}')
    for enum_value in Field.enumerated_values:
        if isinstance(enum_value, SVDEnumeratedValue):
            result.append({
                'name': enum_value.name,
                'description': SanitizeDescription(enum_value.description),
                'value': enum_value.value
            })
    return result


def SanitizeName(name: str) -> str:
    """清理名称，确保符合C++标识符规范"""
    # 替换非法字符
    name = name.replace('-', '_')
    name = name.replace(' ', '_')
    # 如果以数字开头，添加前缀
    if name and name[0].isdigit():
        name = 'VAL_' + name
    return name


def GenerateDoxygenComment(description: str, indent: int = 0) -> str:
    """生成Doxygen注释"""
    if not description:
        return ""
    indent_str = ' ' * indent
    lines = description.split('\n')
    if len(lines) == 1:
        return f"{indent_str}/** @brief {lines[0]} */\n"
    else:
        result = f"{indent_str}/** @brief {lines[0]}\n"
        for line in lines[1:]:
            result += f"{indent_str}  *        {line}\n"
        result += f"{indent_str}  */\n"
        return result


def GenerateFieldDefinition(field: SVDField, register_name: str) -> str:
    """生成位域定义"""
    if field.name is None:
        logging.warning(f"[Field Generator]Field has no name in register {register_name}")
        return ""
    field_name = SanitizeName(field.name)
    # 生成Doxygen注释
    comment = GenerateDoxygenComment(SanitizeDescription(field.description) or f"{field_name} field", 4)
    # 获取位域信息
    start_bit = field.bit_offset if field.bit_offset is not None else 0
    bit_width = field.bit_width if field.bit_width is not None else 1
    # 获取访问权限
    access = "::EmbeddedPP::LowLevel::Accessibility::ReadWrite"
    if field.access is not None:
        if field.access == "read-only":
            access = "::EmbeddedPP::LowLevel::Accessibility::ReadOnly"
        elif field.access == "write-only":
            access = "::EmbeddedPP::LowLevel::Accessibility::WriteOnly"
        elif field.access == "read-writeOnce":
            access = "::EmbeddedPP::LowLevel::Accessibility::ReadWrite"
    # 解析枚举值
    enum_values = ParseEnumratedValues(field)
    enum_str = ""
    if enum_values:
        enum_str = f"\n    /** @details Possible values:\n"
        for enum_val in enum_values:
            desc = enum_val['description'] or "No description"
            enum_str += f"     *          - {enum_val['name']}: {desc} (value: {enum_val['value']})\n"
        enum_str += "     */\n"
    # 生成位域定义
    result = f"{comment}{enum_str}    using {field_name} = ::EmbeddedPP::LowLevel::BitField<{GetCppTypeFromWidth(bit_width)}, {start_bit}, {bit_width}, {access}>;\n"
    return result


def GenerateRegisterDefinition(register: SVDRegister, peripheral_name: str, arch: Architecture) -> str:
    """生成寄存器定义"""
    if register.name is None:
        logging.warning(f"[Register Generator]Register has no name in peripheral {peripheral_name}")
        return ""
    register_name = SanitizeName(register.name)
    # 生成Doxygen注释
    comment = GenerateDoxygenComment(SanitizeDescription(register.description) or f"{register_name} register", 4)
    # 获取寄存器信息
    address = register.address_offset if register.address_offset is not None else 0
    size = register.size if register.size is not None else 32  # 默认32位
    # 获取访问权限
    access = "::EmbeddedPP::LowLevel::Accessibility::ReadWrite"
    if register.access is not None:
        if register.access == "read-only":
            access = "::EmbeddedPP::LowLevel::Accessibility::ReadOnly"
        elif register.access == "write-only":
            access = "::EmbeddedPP::LowLevel::Accessibility::WriteOnly"
        elif register.access == "read-writeOnce":
            access = "::EmbeddedPP::LowLevel::Accessibility::ReadWrite"
    # 生成寄存器定义
    cpp_type = GetCppTypeFromWidth(size)
    result = f"{comment}    using {register_name} = ::EmbeddedPP::LowLevel::Register<{cpp_type}, 0x{address:X}, {access}>;\n"
    # 生成位域定义
    if register.fields is not None:
        for field in register.fields:
            if isinstance(field, SVDField):
                field_def = GenerateFieldDefinition(field, register_name)
                if field_def:
                    result += field_def
    return result


def GeneratePeripheralDefinition(peripheral: SVDPeripheral, device_name: str, arch: Architecture) -> str:
    """生成外设定义"""
    if peripheral.name is None:
        logging.warning("[Peripheral Generator]Peripheral has no name")
        return ""
    peripheral_name = SanitizeName(peripheral.name)
    # 生成Doxygen注释
    comment = GenerateDoxygenComment(SanitizeDescription(peripheral.description) or f"{peripheral_name} peripheral", 0)
    # 生成包含头文件（移到命名空间外部）
    includes = "#include <cstdint>\n"
    includes += "#include \"Core/Common.hpp\"\n"
    includes += "#include \"Core/BitField.hpp\"\n"
    includes += "#include \"Core/Register.hpp\"\n\n"
    # 生成设备特定的命名空间
    namespace_name = SanitizeName(device_name)
    result = f"{comment}namespace EmbeddedPP::{namespace_name}::{peripheral_name}::Register {{\n\n"
    # 生成寄存器定义
    if peripheral.registers is not None:
        for register in peripheral.registers:
            if isinstance(register, SVDRegister):
                register_def = GenerateRegisterDefinition(register, peripheral_name, arch)
                if register_def:
                    result += register_def
    
    result += "}\n\n"
    # 将includes移到最前面
    return includes + result


def GetCppTypeFromWidth(width: int) -> str:
    """根据位宽获取对应的C++类型"""
    if width <= 8:
        return "uint8_t"
    elif width <= 16:
        return "uint16_t"
    elif width <= 32:
        return "uint32_t"
    else:
        return "uint64_t"


def GenerateDeviceHeader(device: SVDDevice, output_dir: str, arch: Architecture) -> None:
    """为设备生成头文件"""
    if device.name is None:
        logging.error("[Device Generator]Device has no name")
        return
    device_name = SanitizeName(device.name)
    # 确保输出目录存在
    os.makedirs(output_dir, exist_ok=True)
    # 为每个外设生成头文件
    if device.peripherals is not None:
        # 使用tqdm显示进度条
        peripherals = [p for p in device.peripherals if isinstance(p, SVDPeripheral)]
        with tqdm.tqdm(total=len(peripherals), desc="Generating peripherals") as pbar:
            for peripheral in peripherals:
                if peripheral.name is None:
                    logging.warning("[Device Generator]Peripheral has no name")
                    pbar.update(1)
                    continue
                peripheral_name = SanitizeName(peripheral.name)
                filename = f"{peripheral_name}.hpp"
                filepath = os.path.join(output_dir, filename)
                # 生成外设定义
                content = "/* Auto-generated file. Do not edit manually. */\n\n"
                content += f"#ifndef EMBEDDED_PP_{device_name.upper()}_{peripheral_name.upper()}_HPP\n"
                content += f"#define EMBEDDED_PP_{device_name.upper()}_{peripheral_name.upper()}_HPP\n\n"
                peripheral_def = GeneratePeripheralDefinition(peripheral, device_name, arch)
                if peripheral_def:
                    content += peripheral_def
                content += "#endif\n"
                # 写入文件
                with open(filepath, 'w', encoding='utf-8') as f:
                    f.write(content)
                pbar.update(1)
    logging.info("Code generation completed.")


def main():
    parser = argparse.ArgumentParser(description='Generate C++ register definitions from SVD file')
    parser.add_argument('--device-name', required=True, help='Device name')
    parser.add_argument('--svd-file', required=True, help='Path to SVD file')
    parser.add_argument('--output-directory', required=True, help='Output directory for generated files')
    parser.add_argument('--arch', required=True, choices=['ARMv6M', 'ARMv7M'], help='Target architecture')
    args = parser.parse_args()
    # 设置日志
    logging.basicConfig(level=logging.INFO, handlers=[LoggerHandler()])
    # 解析SVD文件
    logging.info(f"Parsing SVD file: {args.svd_file}")
    parser = SVDParser.for_xml_file(args.svd_file)
    device = parser.get_device() 
    # 生成代码
    GenerateDeviceHeader(device, args.output_directory, args.arch)


if __name__ == "__main__":
    main()