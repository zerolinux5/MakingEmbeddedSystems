# Project 3a
## Diagram
![STM32 Block Diagram](stm32_hardware_block_diagram.png?raw=true "STM32 Hardware Block Diagram")

## Investigate Project Board Prompt
Look at the datasheet for the processor and other documents. Answer these questions:
- What kind of processor is it?
- How much Flash and RAM does it have? Any other memory types?
- Does it have any special peripherals? (List 3-5 that you noted as being interesting.)
- Does it have a floating point unit?
- If it has an ADC, what are the features?
- Look at one application note for this processor.

### Project Board
[STM32F3DISCOVERY](https://www.st.com/en/evaluation-tools/stm32f3discovery.html#documentation)

### Investigation Findings
The processor on this board is an Arm Cortex-M4. It contains 256 Kbytes of Flash and 48 Kbytes of RAM. The special peripherals I find interesting are: ST MEMS E-compass, ST MEMS Gyroscope and eight onboard user LEDs. This board does have a floating point unit. Four 12-bit ADC are present on the board with 5 MSPS and 21 ns sampling time. I read the [Peripheral firmware examples](https://www.st.com/resource/en/application_note/an4157-stm32f3discovery-peripheral-firmware-examples-stmicroelectronics.pdf) application notes which gives an overview of the example folder that comes with board firmware application package.