import lief 
import argparse

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('-f','--file', help='FLM file name', type=str, default=r'C:\Keil_v5\ARM\PACK\NXP\MIMXRT1062_DFP\12.0.0\arm\MIMXRT106x_QSPI_4KB_SEC.FLM')
    args, unknown = parser.parse_known_args()

    flm_file = args.file
    flm = lief.parse(flm_file)

    functions = ['Init', 'UnInit', 'EraseSector', 'ProgramPage', 'EraseChip']
    sections = ['PrgCode', 'PrgData', 'DevDscr']
    
    with open('flash.h', 'w') as f:
        # dump the offset value
        for func in functions:
            f.write("#define %s_OFFSET %d\n"%(func.upper(), flm.get_symbol(func).value - 1))

        #dump the contents 
        tick = 0
        f.write('__attribute__((section(".FLASH_DATAS"))) char flash_datas[] = { \n\t')
        for sec in sections:
            for i, content in enumerate(flm.get_section(sec).content):
                f.write("%d, "%content)
                tick += 1
                if ((i+1) % 16) == 0:
                    f.write("\n\t")
        f.write("};")
        f.close()
