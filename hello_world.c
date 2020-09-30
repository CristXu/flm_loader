/*
 * Copyright (c) 2013 - 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_device_registers.h"
#include "fsl_debug_console.h"
#include "board.h"

#include "pin_mux.h"
#include "clock_config.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/


/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief Main function
 */

void HardFault_Handler(){
	__asm (
		"bx lr\r\n"
	);
}
#define CAST_VALUE_TO_FUNC(v, type) (__typeof__(type))(v + 1)
extern char Image$$FLASH_DATA$$Base[];
extern char Image$$FLASH_OPS$$Base[];
#define BASE_ADDR Image$$FLASH_DATA$$Base
#define OPS_OFFSET Image$$FLASH_OPS$$Base
#define FLASH_BASE (0x60000000)
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

#include "flash.h"

void Reloc(ulong base){
	ulong tmp = base;
	__asm (
		"ldr r9, [%0]\r\n"
		::"r"(&tmp):"memory"
	);
	memcpy((void*)base, (void*)(OPS_OFFSET + RW_VALUE_OFFSET), RW_VALUE_SIZE);
}

#define FLASH_BASE_ADDR (0x60000000U)
#define SECTOR_SIZE     (0x1000U)
#define PAGE_SIZE       (256U)
#define OP_NUM          (0U)

int main(void)
{
    /* Init board hardware. */
    BOARD_ConfigMPU();
    BOARD_InitPins();
    BOARD_InitBootClocks();
    BOARD_InitDebugConsole();
//	extern int flash_test(bool);
//	flash_test(false);
		
	flash_ops_t ops = {
		.Reloc = Reloc,
		.Init = CAST_VALUE_TO_FUNC(OPS_OFFSET + INIT_OFFSET, ops.Init),
		.UnInit = CAST_VALUE_TO_FUNC(OPS_OFFSET + UNINIT_OFFSET, ops.UnInit),
		.EraseSector = CAST_VALUE_TO_FUNC(OPS_OFFSET + ERASESECTOR_OFFSET, ops.EraseSector),
		.ProgramPage = CAST_VALUE_TO_FUNC(OPS_OFFSET + PROGRAMPAGE_OFFSET, ops.ProgramPage),
		.EraseChip = CAST_VALUE_TO_FUNC(OPS_OFFSET + ERASECHIP_OFFSET, ops.EraseChip),	
	};
	ops.Reloc((ulong)BASE_ADDR);
	ops.Init(0,0,0);
	ops.EraseChip();
	ops.EraseSector(FLASH_BASE_ADDR + OP_NUM * SECTOR_SIZE);
	char pool[PAGE_SIZE] = {0};
	memcpy(pool, (void*)FLASH_BASE_ADDR, sizeof(pool));
	memset(pool, 0x56, PAGE_SIZE);
	ops.ProgramPage(FLASH_BASE_ADDR + OP_NUM * PAGE_SIZE, PAGE_SIZE, (uchar*)pool);

    while (1)
    {
    }
}
