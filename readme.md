# ProjectEureka: A Multi Motor Drivers Design for Robot System and Bearingless Motor



ProjectEureka seeks to streamline the intricate design of robot systems, including communication, cable arrangements, and synchronization, by integrating several motor drivers (up to four) with a single microcontroller (DSP28377D). This can also be utilized as a testing platform for bearingless or any other kind of AC motors. For access to example codes, please visit the following link: [here](https://github.com/horychen/ProjectPanGu-C). Displayed below is an image representing the previous version.

![inverter](F:/ProjectEureka/assets/inverter-1721237191608-3.jpg)

## Characteristics

**Multi-board design is used in ProjectEureka.** Project Eureka includes the design for: 

1. Current sensor(LA55-P) [📂 PCBProject_SensorLEM](PCBProject_SensorLEM)
2. DAC data collect board(MAX5725)[📂PCBProject_SPI_MAX5307_DAC](PCBProject_SPI_MAX5307_DAC)
3. RS422/RS423 communication board [📂PCBProject_Encoder](PCBProject_Encoder)
4. Inverters (FNC42060F) [📂PCBProject_InverterFNC42060F](PCBProject_InverterFNC42060F)
5. Auxiliary power supply [📂PCBProject_Power](PCBProject_Power)
6. Mother board that connected all the boards above [📂PCBProject_Extension28377dBGA](PCBProject_Extension28377dBGA)
7. CAN/SCI/USB communication board[📂PCBProject_Can_SCI_USB](PCBProject_Can_SCI_USB)
8. RS485 communication board [📂PCBProject_Happy485](PCBProject_Happy485)

This means 

1. Convenient alternative for replacing one's own projects or addressing shortages of components.
2. Utilize a single board design in their own design.
3. quick update and easy for collaboration

**ProjectEureka can drive at most four AC motors.** Thanks to the TMS320F28377D from TI, ProjectEureka can drive at most four AC motors by adding necessary inverter blocks and corresponding current sensors, which means:

1. Facilitates communication and synchronization among motors.
2. Suitable for organizing cables in a user-friendly manner.

## Liscence

No liscence yet