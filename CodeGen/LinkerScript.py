import os
import argparse


# 解析命令行参数
def ParseArgmuents():
    parser = argparse.ArgumentParser(description='Generate Linker Script For Embedded++ Project')
    parser.add_argument('--Output-File', type=str, required=True, help='Output File Path')
    parser.add_argument('--SRAM-Size', type=str, required=True, help='SRAM Size')
    parser.add_argument('--Flash-Size', type=str, required=True, help='Flash Size')
    parser.add_argument('--SRAM-Start', type=str, default='0x20000000', help='SRAM Start Address')
    parser.add_argument('--Flash-Start', type=str, default='0x8000000', help='Flash Start Address')
    parser.add_argument('--Heap-Size', type=str, default='0x400', help='Heap Size')
    parser.add_argument('--Stack-Size', type=str, default='0x200', help='Stack Size')
    args = parser.parse_args()
    return args

# 生成链接脚本
def GenerateLinkerScript(args, TemplatePath: os.PathLike) -> str:
    with open(TemplatePath, 'r') as f:
        Template = f.read()
    result = Template.format(
        SRAM_Origin = args.SRAM_Start,
        SRAM_Length = args.SRAM_Size,
        FLASH_Origin = args.Flash_Start,
        FLASH_Length = args.Flash_Size,
        HeapSize = args.Heap_Size,
        StackSize = args.Stack_Size,
    )
    return result

# 主函数
def main():
    args = ParseArgmuents()
    TemplatePath = os.path.join(os.path.dirname(__file__), 'Resources', 'LinkerScript.ld')
    result = GenerateLinkerScript(args, TemplatePath)
    with open(args.Output_File, 'w') as f:
        f.write(result)
    print(f'Linker Script Generated: {args.Output_File}')


if __name__ == '__main__':
    main()
