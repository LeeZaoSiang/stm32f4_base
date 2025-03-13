# stm32f4_base
Template for STM32F4 MCUs. Folders are organized as follows:

stm32f4_base
    |
    +-----repositories
    |          |
    |          +-----drivers
    |                   |
    |                   +-----bsp
    |                   |      |
    |                   |      +-----32f429idiscovery-bsp @ STMicroelectronics
    |                   |
    |                   |
    |                   +-----cmsis
    |                   |       |
    |                   |       +-----cmsis-core @ STMicroelectronics
    |                   |       +-----cmsis-device-f4 @ STMicroelectronics
    |                   |
    |                   |
    |                   +-----hal
    |                          |
    |                          +-----stm32f4xx-hal-driver @ STMicroelectronics
    |
    +-----stm32f429  


The repositories folder contains public repositories (dependency like library and driver) required by all the STM32F4 MCUs and each of them has its own folder that contains individual source code, header, and Makefile. As for now only stm32f429 is created.