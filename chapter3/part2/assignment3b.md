# Project 3b

## Flash Simulator Prompt
Your assignment is to create a small module that compiles and runs on your computer that
implements your flash simulator. You will also need a main file to test out your simulator.

## File Definitions
### Main homework files
**unittest.cpp**

Contains my testing logic. I tested out writing/reading/erasing data and printing the results to the screen. Helper functions are used in case I wanted to add more edge cases.

**spi_flash.h**

Header file given to class, only modification was to remove the *#include "stm32f2xx.h"* and add in *#include <stdint.h>* for the definitions required.

**spi_flash_simulation.cpp**

Abstraction between the given header file and my implementation of the Flash simulator.

**flash_memory.h**

Header file for my implementation of the Flash simulator. Class which requests 100 bytes of data and manages reading/modifying it.

**flash_memory.cpp**

Implementation of Flash simulator. I essentially grab a chunk of memory and write/read from it so long as its valid.


**unitest output.PNG**
Picture of my output after running my unittest file.
