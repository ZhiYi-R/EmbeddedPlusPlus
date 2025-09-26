import re
import os
import sys
import tqdm
import logging
import argparse
import glob
from typing import Literal, List, Any
from cmsis_svd.parser import SVDParser
from cmsis_svd.model import SVDDevice, SVDPeripheral, SVDRegister, SVDField, SVDEnumeratedValue

Architecture = Literal['ARMv6M', 'ARMv7M']


class LoggerHandler(logging.Handler):
    def __init__(self, level=logging.DEBUG) -> None:
        super().__init__(level)
    
    def emit(self, record: logging.LogRecord) -> None:
        try:
            msg = self.format(record)
            tqdm.tqdm.write(msg)
            self.flush()
        except Exception:
            self.handleError(record)


def SanitizeDescription(description: str) -> str:
    if not description:
        return ""
    description = description.replace('\n', ' ').replace('\r', ' ')
    description = re.sub(r' +', ' ', description)
    return description.strip()


def SanitizeName(name: str) -> str:
    name = re.sub(r'[^a-zA-Z0-9_]', '_', name)
    if name and name[0].isdigit():
        name = 'VAL_' + name
    return name


def GenerateDoxygenComment(description: str, indent: int = 0) -> str:
    if not description:
        return ""
    indent_str = ' ' * indent
    lines = [line.strip() for line in description.split('\n') if line.strip()]
    if len(lines) == 1:
        return f"{indent_str}/** @brief {lines[0]} */\n"
    else:
        result = f"{indent_str}/** @brief {lines[0]}\n"
        for line in lines[1:]:
            result += f"{indent_str} *        {line}\n"
        result += f"{indent_str} */\n"
        return result


def get_register_bit_width(register: SVDRegister, peripheral: SVDPeripheral) -> int:
    if register.size is not None:
        return register.size
    elif peripheral.size is not None:
        return peripheral.size
    else:
        return 32


def get_register_cpp_type(bit_width: int) -> str:
    if bit_width <= 8:
        return "std::uint8_t"
    elif bit_width <= 16:
        return "std::uint16_t"
    elif bit_width <= 32:
        return "std::uint32_t"
    else:
        logging.warning(f"Unsupported register width: {bit_width} bits. Defaulting to std::uint32_t.")
        return "std::uint32_t"


def extract_enumerated_values(field: SVDField) -> List[dict]:
    """
    正确提取 field.enumerated_values 中的所有枚举项。
    在 cmsis-svd >= 2.0 中，enumerated_values 是一个列表，每个元素是一个 SVDEnumeratedValues 对象，
    其 .enumerated_values 是 SVDEnumeratedValue 列表。
    """
    result = []
    if not hasattr(field, 'enumerated_values') or not field.enumerated_values:
        return result

    ev_list = field.enumerated_values
    if not isinstance(ev_list, list):
        ev_list = [ev_list]

    for ev_group in ev_list:
        if hasattr(ev_group, 'enumerated_values') and ev_group.enumerated_values:
            for item in ev_group.enumerated_values:
                if isinstance(item, SVDEnumeratedValue) and item.name is not None:
                    result.append({
                        'name': item.name,
                        'description': SanitizeDescription(item.description),
                        'value': item.value
                    })
        else:
            # Fallback: some versions put items directly in the group
            if isinstance(ev_group, SVDEnumeratedValue):
                result.append({
                    'name': ev_group.name,
                    'description': SanitizeDescription(ev_group.description),
                    'value': ev_group.value
                })
    return result


def GenerateFieldDefinition(field: SVDField, register_name: str, register_cpp_type: str) -> str:
    if field.name is None:
        logging.warning(f"[Field Generator] Field has no name in register {register_name}")
        return ""

    field_name = SanitizeName(field.name)
    bitfield_name = f"{register_name}_{field_name}"
    comment = GenerateDoxygenComment(SanitizeDescription(field.description) or f"{field_name} field", 4)

    start_bit = field.bit_offset if field.bit_offset is not None else 0
    bit_width = field.bit_width if field.bit_width is not None else 1

    access_map = {
        "read-only": "::EmbeddedPP::LowLevel::Accessibility::ReadOnly",
        "write-only": "::EmbeddedPP::LowLevel::Accessibility::WriteOnly",
        "read-write": "::EmbeddedPP::LowLevel::Accessibility::ReadWrite",
        "read-writeOnce": "::EmbeddedPP::LowLevel::Accessibility::ReadWrite",
    }
    access = access_map.get(field.access, "::EmbeddedPP::LowLevel::Accessibility::ReadWrite")

    # 提取枚举值
    enum_values = extract_enumerated_values(field)
    enum_constants = ""
    if enum_values:
        enum_constants += "    /** @details Possible values:\n"
        for ev in enum_values:
            desc = ev['description'] or "No description"
            enum_constants += f"     *          - {ev['name']}: {desc} (value: {ev['value']})\n"
        enum_constants += "     */\n"

        for ev in enum_values:
            # ✅ 关键修复：使用 Register_Field_Enum 命名
            full_enum_name = f"{register_name}_{field_name}_{SanitizeName(ev['name'])}"
            enum_desc = SanitizeDescription(ev['description']) or f"{ev['name']} value"
            enum_comment = GenerateDoxygenComment(enum_desc, 4).rstrip()
            if enum_comment:
                enum_constants += f"    {enum_comment}\n"
            # 生成 constexpr（无 static）
            enum_constants += f"    constexpr {register_cpp_type} {full_enum_name} = {ev['value']};\n"
        enum_constants += "\n"

    result = f"{comment}    using {bitfield_name} = ::EmbeddedPP::LowLevel::BitField<{register_cpp_type}, {start_bit}, {bit_width}, {access}>;\n"
    if enum_constants:
        result += enum_constants
    return result


def GenerateRegisterDefinition(register: SVDRegister, peripheral: SVDPeripheral, arch: Architecture) -> str:
    if register.name is None:
        logging.warning(f"[Register Generator] Register has no name in peripheral {peripheral.name}")
        return ""

    register_name = SanitizeName(register.name)
    comment = GenerateDoxygenComment(SanitizeDescription(register.description) or f"{register_name} register", 4)

    address = register.address_offset if register.address_offset is not None else 0
    bit_width = get_register_bit_width(register, peripheral)
    reg_cpp_type = get_register_cpp_type(bit_width)

    access_map = {
        "read-only": "::EmbeddedPP::LowLevel::Accessibility::ReadOnly",
        "write-only": "::EmbeddedPP::LowLevel::Accessibility::WriteOnly",
        "read-write": "::EmbeddedPP::LowLevel::Accessibility::ReadWrite",
        "read-writeOnce": "::EmbeddedPP::LowLevel::Accessibility::ReadWrite",
    }
    access = access_map.get(register.access, "::EmbeddedPP::LowLevel::Accessibility::ReadWrite")

    result = f"{comment}    using {register_name} = ::EmbeddedPP::LowLevel::Register<{reg_cpp_type}, 0x{address:X}, {access}>;\n"

    if register.fields is not None:
        for field in register.fields:
            if isinstance(field, SVDField):
                field_def = GenerateFieldDefinition(field, register_name, reg_cpp_type)
                if field_def:
                    result += field_def
    return result


def GeneratePeripheralDefinition(peripheral: SVDPeripheral, device_name: str, arch: Architecture) -> str:
    if peripheral.name is None:
        logging.warning("[Peripheral Generator] Peripheral has no name")
        return ""

    peripheral_name = SanitizeName(peripheral.name)
    comment = GenerateDoxygenComment(SanitizeDescription(peripheral.description) or f"{peripheral_name} peripheral", 0)

    includes = "#include <cstdint>\n"
    includes += "#include \"Core/Common.hpp\"\n"
    includes += "#include \"Core/BitField.hpp\"\n"
    includes += "#include \"Core/Register.hpp\"\n\n"

    namespace = f"{SanitizeName(device_name)}::{peripheral_name}"
    result = f"{comment}namespace {namespace} {{\n\n"

    if peripheral.registers is not None:
        for register in peripheral.registers:
            if isinstance(register, SVDRegister):
                reg_def = GenerateRegisterDefinition(register, peripheral, arch)
                if reg_def:
                    result += reg_def

    result += "}\n\n"
    return includes + result


def GenerateDeviceHeader(device: SVDDevice, output_dir: str, arch: Architecture, device_name: str = None) -> None:
    if device_name is None:
        if device.name is None:
            logging.error("[Device Generator] Device has no name in SVD file")
            return
        device_name = SanitizeName(device.name)
    else:
        device_name = SanitizeName(device_name)

    device_output_dir = os.path.join(output_dir, device_name)
    os.makedirs(device_output_dir, exist_ok=True)

    peripherals = [p for p in device.peripherals if isinstance(p, SVDPeripheral)]
    with tqdm.tqdm(total=len(peripherals), desc="Generating peripherals") as pbar:
        for peripheral in peripherals:
            if peripheral.name is None:
                logging.warning("[Device Generator] Peripheral has no name")
                pbar.update(1)
                continue

            peripheral_name = SanitizeName(peripheral.name)
            filename = f"{peripheral_name}.hpp"
            filepath = os.path.join(device_output_dir, filename)

            content = "/* Auto-generated file. Do not edit manually. */\n\n"
            guard = f"EMBEDDED_PP_{device_name.upper()}_{peripheral_name.upper()}_HPP"
            content += f"#ifndef {guard}\n"
            content += f"#define {guard}\n\n"

            peripheral_def = GeneratePeripheralDefinition(peripheral, device_name, arch)
            if peripheral_def:
                content += peripheral_def

            content += "#endif\n"

            with open(filepath, 'w', encoding='utf-8') as f:
                f.write(content)
            pbar.update(1)

    logging.info(f"Code generation completed. Files generated in: {device_output_dir}")


def process_svd_files(svd_files: list, output_dir: str, arch: str, device_name: str = None):
    for svd_file in svd_files:
        if not os.path.exists(svd_file):
            logging.error(f"SVD file not found: {svd_file}")
            continue

        logging.info(f"Parsing SVD file: {svd_file}")
        try:
            parser = SVDParser.for_xml_file(svd_file)
            device = parser.get_device()

            if device_name is None and (not device.name or not device.name.strip()):
                logging.warning(f"No device name found in SVD file: {svd_file}")
                user_input = input(f"Please enter device name for {svd_file}: ").strip()
                if not user_input:
                    logging.error("Device name cannot be empty. Skipping this file.")
                    continue
                actual_device_name = user_input
            else:
                actual_device_name = device_name

            GenerateDeviceHeader(device, output_dir, arch, actual_device_name)
        except Exception as e:
            logging.error(f"Error processing SVD file {svd_file}: {str(e)}", exc_info=True)


def main():
    parser = argparse.ArgumentParser(description='Generate C++ register definitions from SVD file')
    parser.add_argument('--svd-file', required=True, help='Path to SVD file (supports wildcards)')
    parser.add_argument('--output-directory', required=True, help='Output directory for generated files')
    parser.add_argument('--arch', required=True, choices=['ARMv6M', 'ARMv7M'], help='Target architecture')
    parser.add_argument('--device-name', help='Device name (optional)')

    args = parser.parse_args()
    logging.basicConfig(level=logging.INFO, handlers=[LoggerHandler()])

    svd_files = glob.glob(args.svd_file) if ('*' in args.svd_file or '?' in args.svd_file) else [args.svd_file]
    if not svd_files:
        logging.error(f"No files match the pattern: {args.svd_file}")
        return

    process_svd_files(svd_files, args.output_directory, args.arch, args.device_name)


if __name__ == "__main__":
    main()