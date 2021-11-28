# Diagrams

## 2.1 Lesson
### Idea Project Diagram Prompt
Make a block diagram describing an embedded system you’d like to have or make. Be
imaginative. Reality does not apply here.

### Idea Project
See [Hexapod Prompt](https://github.com/zerolinux5/MakingEmbeddedSystems/blob/main/chapter1/assigment1.md) for background on my imaginary system.

### Block Diagrams
![Hardware Block Diagram](imaginary_hardware_diagram.png?raw=true "Hardware Block Diagram")
![Software Block Diagram](imaginary_software_diagram.png?raw=true "Software Block Diagram")

## 2.2 Lesson
### Mbed Diagram
- Go to https://os.mbed.com/platforms/
- Add to Mbed Compiler (button on right)
- Load a simple sounding template
- Create a block diagram for this program, briefly explain why you chose the platform
and template you did

### Block Diagrams
![Hardware Block Diagram](mbed_hardware_diagram.png?raw=true "Hardware Block Diagram")
![Software Block Diagram](mbed_software_diagram.png?raw=true "Software Block Diagram")

### Reason
I chose the [DISCO-L476VG](https://os.mbed.com/platforms/ST-Discovery-L476VG/) because I'm thinking of using an STM board with an M4 Processor and IMU built in peripheral. The template I chose is `Basic example showing how to use the Compass (LSM303 device)` My thought process is to abstract device specific logic into its own layer in case we want to switch peripherals. This layer is above the common HAL layer which directly updates the registers.