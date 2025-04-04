# stm32f4_base

### Directory layout

    stm32f4_base
    ├── repositories                         
    │   └── drivers   
    │       ├── bsp                            
    │       │   └── 32f429idiscovery-bsp @ STMicroelectronics    # Board Support Packages from ST Microelectronics
    |       ├── cmsis                 
    │       │   ├── cmsis-core @ STMicroelectronics              # CMSIS core from ST Microelectronics, cloned from ARM limited           
    │       │   └── cmsis-device-f4 @ STMicroelectronics         # CMSIS STM32F4 device Peripheral Access Layer header and startup files
    |       └── hal                 
    │           └── stm32f4xx-hal-driver @ STMicroelectronics    # STM32F4 HAL                           
    └── stm32f429                                                # Application folder for STM32F429 devices


The repositories folder contains public repositories (dependency like library and driver) required by all the STM32F4 MCUs and each of them has its own folder that contains individual source code, header, and Makefile. As for now only stm32f429 is created.