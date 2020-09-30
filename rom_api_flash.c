#include "stdint.h"
#include "board.h"
typedef struct _serial_nor_config_option
{
	union
	{
		struct
		{
			uint32_t max_freq : 4; //!< Maximum supported Frequency
			uint32_t misc_mode : 4; //!< miscellaneous mode
			uint32_t quad_mode_setting : 4; //!< Quad mode setting
			uint32_t cmd_pads : 4; //!< Command pads
			uint32_t query_pads : 4; //!< SFDP read pads
			uint32_t device_type : 4; //!< Device type
			uint32_t option_size : 4; //!< Option size, in terms of uint32_t, size = (option_size + 1) * 4
			uint32_t tag : 4; //!< Tag, must be 0x0E
		} B;
		uint32_t U;
	} option0;
	union
	{
		struct
		{
			uint32_t dummy_cycles : 8; //!< Dummy cycles before read
			uint32_t reserved0 : 8; //!< Reserved for future use
			uint32_t pinmux_group : 4; //!< The pinmux group selection
			uint32_t reserved1 : 8; //!< Reserved for future use
			uint32_t flash_connection : 4; //!< Flash connection option: 0 - Single Flash connected to port A
		} B;
	uint32_t U;
	} option1;
} serial_nor_config_option_t;

typedef struct _flexspi_nor_config {
	char memCfg[448];
	uint32_t pageSize, sectorSize, ipCmdSerialClkFreq;
	char Reserved[52];
} flexspi_nor_config_t;

typedef enum _FlexSPIOperationType
{
	kFlexSpiOperation_Command, //!< FlexSPI operation: Only command, both TX and
	//! RX buffer are ignored.
	kFlexSpiOperation_Config, //!< FlexSPI operation: Configure device mode, the
	//! TX FIFO size is fixed in LUT.
	kFlexSpiOperation_Write, //!< FlexSPI operation: Write, only TX buffer is
	//! effective
	kFlexSpiOperation_Read, //!< FlexSPI operation: Read, only Rx Buffer is
		//! effective.
	kFlexSpiOperation_End = kFlexSpiOperation_Read,
} flexspi_operation_t;
	
typedef struct _FlexSpiXfer
{
	flexspi_operation_t operation; //!< FlexSPI operation
	uint32_t baseAddress; //!< FlexSPI operation base address
	uint32_t seqId; //!< Sequence Id
	uint32_t seqNum; //!< Sequence Number
	bool isParallelModeEnable; //!< Is a parallel transfer
	uint32_t *txBuffer; //!< Tx buffer
	uint32_t txSize; //!< Tx size in bytes
	uint32_t *rxBuffer; //!< Rx buffer
	uint32_t rxSize; //!< Rx size in bytes
} flexspi_xfer_t;

typedef struct
{
	uint32_t version;
	status_t (*init)(uint32_t instance, flexspi_nor_config_t *config);
	status_t (*program)(uint32_t instance, flexspi_nor_config_t *config, uint32_t
	dst_addr, const uint32_t *src);
	status_t (*erase_all)(uint32_t instance, flexspi_nor_config_t *config);
	status_t (*erase)(uint32_t instance, flexspi_nor_config_t *config, uint32_t start,
	uint32_t lengthInBytes);
	status_t (*read)(
	uint32_t instance, flexspi_nor_config_t *config, uint32_t *dst, uint32_t addr,
	uint32_t lengthInBytes);
	void (*clear_cache)(uint32_t instance);
	status_t (*xfer)(uint32_t instance, flexspi_xfer_t *xfer);
	status_t (*update_lut)(uint32_t instance, uint32_t seqIndex, const uint32_t
	*lutBase, uint32_t seqNumber);
	status_t (*get_config)(uint32_t instance, flexspi_nor_config_t *config,
	serial_nor_config_option_t *option);
} flexspi_nor_driver_interface_t;

typedef struct
{
	const uint32_t version; //!< Bootloader version number
	const char *copyright; //!< Bootloader Copyright
	void (*runBootloader)(void *arg); //!< Function to start the bootloader executing
	const uint32_t *reserved0; //!< Reserved
	const flexspi_nor_driver_interface_t *flexSpiNorDriver; //!< FlexSPI NOR Flash API
	const uint32_t *reserved1[2]; //!< Reserved
	const void *rtwdogDriver; //rtwdog_driver_interface_t
	const void *wdogDriver; //wdog_driver_interface_t
	const uint32_t *reserved2;
} bootloader_api_entry_t;
#define g_bootloaderTree (*(bootloader_api_entry_t**)(0x0020001c))

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