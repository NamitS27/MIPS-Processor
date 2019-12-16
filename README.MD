# MIPS 16 bit Processor
MIPS (Microprocessor without Interlocked Pipeline Stages) is a type of microprocessor which has numerous applications ranging
from Modems, Office automation, set-top boxes, etc. It is a 5 stage 16 bit RISC based microprocessor capable of 29 instructions with a branch predictor algorithm. There is also a special hardware multiplier which is based upon Booth's Algorithm that can multiply two 8 bit numbers. Forwarding and Stalling are also implemented in the main processor to take care of different kinds of hazards

## Prerequisites

You will need Xilinx ISE or similar software to simulate this Processor. It is synthesizeable on Artix 7 FPGA. So, it can also be dumped onto it.

```
Xilinx ISE
Verilog
```

## Operations
The operations to be ran on it can be added based on the following table:
![Image description](https://github.com/NamitS27/MIPS-Processor/blob/master/Operations.png)

## Simulating the Processor
The processor can be simulated by changing the Program Memory. To do that, please regenerate the IPCore. The ROM is a 32 x 65536 memory. Init file to be added is the ROM_data.txt. Make necessary changes in it before generating the memory based on the previous image. Please stay calm while generating the IPCore as Xilinx ISE is a bit slow.

## Note
- Additional details of the processor can be found [**here**](https://github.com/NamitS27/MIPS-Processor/blob/master/MIPS.pdf)
- The branch prediction algorithm only predicts the Jump instructions. It doesnot actually flush the jump values. During that control hazard, the pipeline is stalled for 2 cycles.

## License

This project is licensed under the MIT License - see the [LICENSE.md](https://github.com/NamitS27/MIPS-Processor/blob/master/LICENSE) file for details

## Authors

* [**Namit Shah**](https://github.com/NamitS27)
* [**Martand Javia**](https://github.com/MRJ35)
* [**Harvish Jariwala**](https://github.com/harvishj)
