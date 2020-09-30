#include "rom_api_flash.h"
status_t flexspi_nor_flash_erase_all(uint32_t instance, flexspi_nor_config_t *config)
{
	return g_bootloaderTree->flexSpiNorDriver->erase_all(instance, config);
}

status_t flexspi_nor_flash_init(uint32_t instance, flexspi_nor_config_t *config)
{
	return g_bootloaderTree->flexSpiNorDriver->init(instance, config);
}

status_t flexspi_nor_get_config(uint32_t instance, flexspi_nor_config_t *config,
serial_nor_config_option_t *option)
{
	return g_bootloaderTree->flexSpiNorDriver->get_config(instance, config, option);
}

status_t flexspi_nor_flash_page_program(uint32_t instance, flexspi_nor_config_t
*config, uint32_t dstAddr, const uint32_t *src)
{
	return g_bootloaderTree->flexSpiNorDriver->program(instance, config, dstAddr, src);
}

status_t flexspi_nor_flash_erase(uint32_t instance, flexspi_nor_config_t *config,
uint32_t start, uint32_t length)
{
	return g_bootloaderTree->flexSpiNorDriver->erase(instance, config, start, length);
}

int flash_test(bool erase_all)
{
	flexspi_nor_config_t config;
	serial_nor_config_option_t option;
	status_t status;
	uint32_t instance = 0;
	option.option0.U = 0xC0000008;
	
	status = flexspi_nor_get_config(instance, &config, &option);
	if (status != kStatus_Success)
	{
		return status;
	}
	
	status = flexspi_nor_flash_init(instance, &config);
	if (status != kStatus_Success)
	{
		return status;
	}
	
	if(erase_all){
		status = flexspi_nor_flash_erase_all(instance, &config);
		if (status != kStatus_Success)
		{
			return status;
		}
	}		
	
	status =  flexspi_nor_flash_erase(instance, &config, 0x0, 4096);
	if (status != kStatus_Success)
	{
		return status;
	}
	
	uint32_t data[256 / sizeof(uint32_t)] = {0};
	status = flexspi_nor_flash_page_program(instance, &config, 0x0, data);
	if (status != kStatus_Success)
	{
		return status;
	}
	
	return kStatus_Success;
}