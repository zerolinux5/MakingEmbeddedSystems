#pragma once

#include <memory>

// FlashMemory class and logic
class FlashMemory {
  bool isWriteable;
  std::unique_ptr<uint8_t[]> memoryBlock;
  uint16_t sectorSize;
  uint16_t memorySize;

  public:
    FlashMemory();
    void setWriteBit();
    void writeToAddress(uint8_t*, uint32_t, uint16_t);
    void readFromAddress(uint8_t*, uint32_t, uint16_t);
    void eraseFromAddress(uint32_t);
};