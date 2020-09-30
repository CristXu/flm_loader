#ifndef _FLM_API_FLASH_H_
#define _FLM_API_FLASH_H_
#define CAST_VALUE_TO_FUNC(v, type) (__typeof__(type))((v) + 1u)
extern char Image$$FLASH_DATA$$Base[];
extern char Image$$FLASH_OPS$$Base[];
#define BASE_ADDR Image$$FLASH_DATA$$Base
#define OPS_OFFSET Image$$FLASH_OPS$$Base
#define ulong unsigned long
#define uchar unsigned char 
typedef struct {
	void (*Reloc)(ulong base);
	int (*Init)(ulong adr, ulong clk, ulong fnc);
	int (*UnInit)(ulong fnc);
	int (*EraseSector)(ulong adr);
	int (*ProgramPage)(ulong adr, ulong sz, uchar* buf);
	int (*EraseChip)(void);
}flash_ops_t;
#define INIT_FLASH_OPS(ops) \
	flash_ops_t ops = {  \
		.Reloc = Reloc,  \
		.Init = CAST_VALUE_TO_FUNC(OPS_OFFSET + INIT_OFFSET, ops.Init), \
		.UnInit = CAST_VALUE_TO_FUNC(OPS_OFFSET + UNINIT_OFFSET, ops.UnInit), \
		.EraseSector = CAST_VALUE_TO_FUNC(OPS_OFFSET + ERASESECTOR_OFFSET, ops.EraseSector), \
		.ProgramPage = CAST_VALUE_TO_FUNC(OPS_OFFSET + PROGRAMPAGE_OFFSET, ops.ProgramPage), \
		.EraseChip = CAST_VALUE_TO_FUNC(OPS_OFFSET + ERASECHIP_OFFSET, ops.EraseChip),	 \
	};
	
#include "flash.h"
#include "rom_api_flash.h"
static inline void Reloc(ulong base){
	memset((void*)(BASE_ADDR + RW_VALUE_SIZE), 0, ZI_SIZE);
	ulong tmp = base;
	__asm volatile (
		"ldr r9, [%0]\r\n"
		::"r"(&tmp):"memory"
	);
	memcpy((void*)base, (void*)(OPS_OFFSET + RW_VALUE_OFFSET), RW_VALUE_SIZE);
}
#endif //_FLM_API_FLASH_H_
