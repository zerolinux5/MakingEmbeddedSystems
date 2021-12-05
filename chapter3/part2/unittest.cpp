#include <iostream>
#include "spi_flash.h"

void printBufferToScreen(uint8_t* buffer, uint16_t size) {
  for (uint16_t i = 0; i < size; i++) {
    std::cout << buffer[i];
  }
  std::cout << std::endl;
}

void testWritingWithoutSettingEnableBit() {
  uint8_t testWriteArray[3] = {'1', '2', '3'};
  uint8_t outputArray[3] = {0, 0, 0};
  sFLASH_WriteBuffer(testWriteArray, 0, 3);
  sFLASH_ReadBuffer(outputArray, 0, 3);
  printBufferToScreen(outputArray, 3);
}

void testValidWrite() {
  uint8_t testWriteArray[3] = {'1', '2', '3'};
  uint8_t outputArray[3] = {0, 0, 0};
  sFLASH_WriteEnable();
  sFLASH_WriteBuffer(testWriteArray, 0, 3);
  sFLASH_ReadBuffer(outputArray, 0, 3);
  printBufferToScreen(outputArray, 3);
}

void testWritingOverSectorSize() {
  uint8_t testWriteArray[12] = {'1', '2', '3', '1', '2', '3', '1', '2', '3', '1', '2', '3'};
  uint8_t outputArray[12];
  sFLASH_WriteEnable();
  sFLASH_WriteBuffer(testWriteArray, 0, 12);
  sFLASH_ReadBuffer(outputArray, 0, 12);
  printBufferToScreen(outputArray, 12);
}

void testErasingSector() {
  uint8_t testWriteArray[12] = {'1', '2', '3', '1', '2', '3', '1', '2', '3', '1', '2', '3'};
  uint8_t outputArray[12];
  sFLASH_WriteEnable();
  sFLASH_WriteBuffer(testWriteArray, 0, 12);
  sFLASH_EraseSector(0);
  sFLASH_ReadBuffer(outputArray, 0, 12);
  printBufferToScreen(outputArray, 12);
}

int main()
{
  sFLASH_Init();
  testWritingWithoutSettingEnableBit();
  testValidWrite();
  testWritingOverSectorSize();
  testErasingSector();
}