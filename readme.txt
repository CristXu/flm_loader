Here is a flash loader based on the FLM files, Usage:
1. Run the gen_output.py: python gen_output.py -f path_to_your_flm_file, will generate the flash.h + scf_params.h
2. copy the flm_api_flash.h + flash.h + scf_params.h + rom_api_flash.h to your workspace
3. set --keep=*(.FLASH_OPS) to MISC-options under the link option
4. Change the ld file: add #include "../scf_params.h", and 
   FLASH_DATA mem_area EMPTY RW_ZI_SIZE{
   }  
   FLASH_OPS +0 ALIGN 4 RO_SIZE{
	* (.FLASH_OPS)
   }
   into LR_region, the mem_area is your specify location