import os
import json
import logging
import argparse
from typing import Literal
from cmsis_svd.parser import SVDParser
from cmsis_svd.model import SVDPeripheral, SVDPeripheralArray, SVDInterrupt

SupportedArchitectures = Literal[
    'CM0', 'CM0P', 'CM3', 'CM4', 'CM7', 'CM23', 'CM33'
]


def ParseArguments() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description='Generate Start Code For Embedded++ Project')
    parser.add_argument('--Output-Directory', type=str, required=True, help='Output Directory Path')
    parser.add_argument('--SVD-File', type=str, required=True, help='SVD File Path')
    parser.add_argument('--Target-Architecture', type=str, required=True, help='Target Architecture: one of [CM0, CM0P, CM3, CM4, CM7, CM23, CM33]')
    args = parser.parse_args()
    return args

def ArchitectureToExceptionDatabaseKey(Architecture: SupportedArchitectures) -> str:
    return Architecture.replace('CM', 'CortexM').replace('P', '+')

def VerifyArguments(args: argparse.Namespace):
    if not os.path.exists(os.path.join(os.path.dirname(__file__), 'Resources', 'Interrupts.hpp')):
        raise FileNotFoundError('Template \'Interrupts.hpp\' not found')
    if not os.path.exists(os.path.join(os.path.dirname(__file__), 'Resources', 'Startup.cpp')):
        raise FileNotFoundError('Template \'Startup.cpp\' not found')
    if not os.path.exists(os.path.join(os.path.dirname(__file__), 'Resources', 'SystemExceptions.json')):
        raise FileNotFoundError('Template \'SystemExceptions.json\' not found')
    if not os.path.exists(args.SVD_File):
        raise FileNotFoundError(f'SVD File \'{args.SVD_File}\' not found')
    if args.Target_Architecture not in SupportedArchitectures.__args__:
        raise ValueError(f'Invalid Target Architecture: {args.Target_Architecture}')


def GenerateStartCode(args: argparse.Namespace):
    # Verify Arguments
    VerifyArguments(args)
    # Make Output Directory
    os.makedirs(args.Output_Directory, exist_ok=True)
    # Parse SVD File To Get Peripheral Interrupts
    device = SVDParser.for_xml_file(args.SVD_File).get_device()
    peripherals: list[SVDPeripheral] = []
    for item in device.peripherals:
        if isinstance(item, SVDPeripheral):
            peripherals.append(item)
        elif isinstance(item, SVDPeripheralArray):
            peripherals.extend(item.peripherals)
        else:
            raise TypeError(f'Invalid Peripheral Type: {type(item)}')
    peripheral_interrupts: list[SVDInterrupt] = []
    for peripheral in peripherals:
        if peripheral.interrupts is None:
            logging.warning(f"[Startup Generator]Peripheral \'{peripheral.name}\' has no interrupts, skipping...")
            continue
        if not peripheral.interrupts:
            logging.warning(f"[Startup Generator]Peripheral \'{peripheral.name}\' has no interrupts, skipping...")
            continue
        assert isinstance(peripheral.interrupts, list)
        peripheral_interrupts.extend(peripheral.interrupts)
    # Parse Json File To Get System Exceptions
    with open(os.path.join(os.path.dirname(__file__), 'Resources', 'SystemExceptions.json'), 'r', encoding='utf-8') as file:
        system_exceptions = json.load(file)
        assert isinstance(system_exceptions, dict)
    Architecture = ArchitectureToExceptionDatabaseKey(args.Target_Architecture)
    SystemInterrupts = system_exceptions[Architecture]
    assert isinstance(SystemInterrupts, list)
    # Generate Interrupts Header
    ExistsInterruptNumbers = []
    with open(os.path.join(os.path.dirname(__file__), 'Resources', 'Interrupts.hpp'), 'r', encoding='utf-8') as file:
        HeaderTemplate = file.read()
    InterruptDefineLines = ''
    InterruptNumberLines = ''
    for exception in SystemInterrupts:
        if exception["Number"] in ExistsInterruptNumbers:
            logging.warning(f"[Startup Generator]Interrupt number {exception['Number']} is already defined, skipping...")
            continue
        InterruptNumberLines += f'constexpr uint32_t InterruptNumber_{exception["Name"]} = {exception["Number"]};\n'
        InterruptDefineLines += f'extern "C" void {exception["Name"]}_Handler(void) noexcept;\n'
        ExistsInterruptNumbers.append(exception["Number"])
    for Interrupt in peripheral_interrupts:
        if Interrupt.name is None:
            logging.warning(f"[Startup Generator]Interrupt has no name, skipping...")
            continue
        if Interrupt.value is None:
            logging.warning(f"[Startup Generator]Interrupt has no value, skipping...")
            continue
        if Interrupt.value in ExistsInterruptNumbers:
            logging.warning(f"[Startup Generator]Interrupt \'{Interrupt.name}\' is already defined, skipping...")
            continue
        InterruptNumberLines += f'constexpr uint32_t InterruptNumber_{Interrupt.name} = {Interrupt.value};\n'
        InterruptDefineLines += f'extern "C" void {Interrupt.name}_IRQHandler(void) noexcept;\n'
        ExistsInterruptNumbers.append(Interrupt.value)
    Header = HeaderTemplate.format(interrupt_defines=InterruptDefineLines, interrupt_numbers=InterruptNumberLines)
    with open(os.path.join(args.Output_Directory, 'Interrupts.hpp'), 'w', encoding='utf-8') as file:
        file.write(Header)
    # Generate Startup Code
    with open(os.path.join(os.path.dirname(__file__), 'Resources', 'Startup.cpp'), 'r', encoding='utf-8') as file:
        StartupTemplate = file.read()
    AliasLines = '\n'
    InterruptVectorLines = '\nextern "C" [[gnu::section(".InterruptVector"), gnu::used]] void(*volatile const isr_vectors[])(void) = {\n'
    InterruptVectorLines = InterruptVectorLines + '    reinterpret_cast<void(*)()>(&_StackTop),\n'
    for i in range(1, max(ExistsInterruptNumbers) + 1):
        if i not in ExistsInterruptNumbers:
            InterruptVectorLines += '    nullptr,\n'
            continue
        name = ''
        for exception in SystemInterrupts:
            if exception["Number"] == i:
                name = exception["Name"]
                break
        if name != '':
            InterruptVectorLines += f'    {name}_Handler,\n'
            AliasLines += f'AliasDefault void {name}_Handler(void) noexcept;\n'
            continue
        for Interrupt in peripheral_interrupts:
            if Interrupt.value == i:
                name = Interrupt.name
                break
        if name != '':
            InterruptVectorLines += f'    {name}_IRQHandler,\n'
            AliasLines += f'AliasDefault void {name}_IRQHandler(void) noexcept;\n'
            continue
        raise ValueError(f'Invalid Interrupt Number: {i}')
    InterruptVectorLines += '};'
    Startup = StartupTemplate + AliasLines
    Startup = Startup + InterruptVectorLines
    with open(os.path.join(args.Output_Directory, 'Startup.cpp'), 'w', encoding='utf-8') as file:
        file.write(Startup)


def main():
    args = ParseArguments()
    VerifyArguments(args)
    GenerateStartCode(args)

if __name__ == '__main__':
    main()
    
