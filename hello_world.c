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

#include "flm_api_flash.h"
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

#define FLASH_BASE_ADDR (0x60000000U)
#define SECTOR_SIZE     (flash_config->sectorSize)
#define PAGE_SIZE       (flash_config->pageSize)
#define OP_NUM          (0U)
#define flash_config ((flexspi_nor_config_t*)(BASE_ADDR + RW_VALUE_SIZE))

int main(void)
{
    /* Init board hardware. */
    BOARD_ConfigMPU();
    BOARD_InitPins();
    BOARD_InitBootClocks();
    BOARD_InitDebugConsole();
//	extern int flash_test(bool);
//	flash_test(false);
		
	INIT_FLASH_OPS(ops);
	ops.Reloc((ulong)BASE_ADDR);
	ops.Init(0,0,0);
	ops.EraseChip();
	ops.EraseSector(FLASH_BASE_ADDR + OP_NUM * SECTOR_SIZE);
	char *pool = malloc(sizeof(char) * PAGE_SIZE);	
	memcpy(pool, (void*)FLASH_BASE_ADDR, PAGE_SIZE);
	memset(pool, 0x56, PAGE_SIZE);
	ops.ProgramPage(FLASH_BASE_ADDR + OP_NUM * PAGE_SIZE, PAGE_SIZE, (uchar*)pool);

    while (1)
    {
    }
}
