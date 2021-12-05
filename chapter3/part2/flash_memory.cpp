#include "flash_memory.h"

void FlashMemory::setWriteBit() {
  isWriteable = true;
}

FlashMemory::FlashMemory():
  isWriteable(false),
  sectorSize(10),
  memorySize(100) {
    memoryBlock = std::make_unique<uint8_t []>(memorySize);
}

void FlashMemory::writeToAddress(uint8_t* pBuffer, uint32_t WriteAddr, uint16_t NumByteToWrite) {
  if (isWriteable && WriteAddr < memorySize) {
    for (int index = 0; index < NumByteToWrite; index++) {
      memoryBlock[WriteAddr + index] = pBuffer[index];
    }
  }
}

void FlashMemory::readFromAddress(uint8_t* pBuffer, uint32_t WriteAddr, uint16_t NumByteToWrite) {
  if (WriteAddr < memorySize) {
    for (int index = 0; index < NumByteToWrite; index++) {
      pBuffer[index] = memoryBlock[WriteAddr + index];
    }
  }
}

// Per Datasheet https://www.winbond.com/resource-files/w25q80dv%20dl_revh_10022015.pdf
// This sets the sector data to all 1s if writeEnable is set
void FlashMemory::eraseFromAddress(uint32_t SectorAddr) {
  if (isWriteable && SectorAddr < (memorySize/sectorSize)) {
    uint16_t SectorAddressAsBlockNum = SectorAddr * sectorSize;
    for (int index = SectorAddressAsBlockNum; index < SectorAddressAsBlockNum + sectorSize; index++) {
      memoryBlock[index] = 1;
    } 
  }
}