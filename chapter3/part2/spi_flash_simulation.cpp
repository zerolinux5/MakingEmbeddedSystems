#include "spi_flash.h"
#include "flash_memory.h"

std::unique_ptr<FlashMemory> flashMemorySimulation;

void sFLASH_WriteEnable() {
  flashMemorySimulation->setWriteBit();
}

void sFLASH_Init() {
  flashMemorySimulation = std::make_unique<FlashMemory>();
}

void sFLASH_WriteBuffer(uint8_t* pBuffer, uint32_t WriteAddr, uint16_t NumByteToWrite) {
  flashMemorySimulation->writeToAddress(pBuffer, WriteAddr, NumByteToWrite);
}

void sFLASH_ReadBuffer(uint8_t* pBuffer, uint32_t ReadAddr, uint16_t NumByteToRead) {
  flashMemorySimulation->readFromAddress(pBuffer, ReadAddr, NumByteToRead);
}

void sFLASH_EraseSector(uint32_t SectorAddr) {
  flashMemorySimulation->eraseFromAddress(SectorAddr);
}
