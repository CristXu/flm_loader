import lief 
import argparse

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    # C:\Keil_v5\ARM\flash\Embedfire_RT1052_QSPI_R1.FLM
    # C:\Keil_v5\ARM\flash\MIMXRT_QSPIFLASH_GD3v3.FLM
    # C:\Keil_v5\ARM\PACK\NXP\MIMXRT1062_DFP\12.0.0\arm\MIMXRT106x_QSPI_4KB_SEC.FLM
    # C:\Keil_v5\ARM\PACK\NXP\MIMXRT1052_DFP\11.0.1\arm\MIMXRT105x_QuadSPI_4KB_SEC.FLM
    parser.add_argument('-f','--file', help='FLM file name', type=str, default=r'C:\Keil_v5\ARM\flash\Embedfire_RT1052_QSPI_R1.FLM')
    args, unknown = parser.parse_known_args()

    flm_file = args.file
    flm = lief.parse(flm_file)

    functions = ['Init', 'UnInit', 'EraseSector', 'ProgramPage', 'EraseChip']
    sections = ['PrgCode', 'PrgData'] # 'DevDscr' is not used by the api
    
    data_size = 0
    code_size = 0
    with open('flash.h', 'w') as f:
        # find the size of the ZI + RW, but only the offset of the RW, because these one need to be assigned 
        for sec in flm.sections:
            if sec.name == 'PrgData':
                data_size += sec.size
                if str(sec.type) == 'SECTION_TYPES.PROGBITS': 
                    f.write('#define RW_VALUE_SIZE %d\n'%(sec.size))
                    f.write('#define RW_VALUE_OFFSET %d\n'%(sec.offset - flm.header.header_size))
        f.write('#define ZI_SIZE (%d - RW_VALUE_SIZE)\n'%(data_size))
        # dump the offset value
        for func in functions:
            f.write("#define %s_OFFSET %d\n"%(func.upper(), flm.get_symbol(func).value - 1))

        #dump the contents 
        f.write('const __attribute__((section(".FLASH_OPS"))) char flash_datas[] = { \n\t')
        for sec in sections:
            for i, content in enumerate(flm.get_section(sec).content):
                f.write("%d, "%content)
                code_size += 1
                if ((i+1) % 16) == 0:
                    f.write("\n\t")
        f.write("};\n")
        f.close()
    with open('scf_params.h', 'w') as f:
        f.write("#define RO_SIZE %d\n"%code_size)
        f.write('#define RW_ZI_SIZE %d\n'%data_size)
        f.close()

    print("Done!")