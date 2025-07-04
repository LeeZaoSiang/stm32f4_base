# stm32f4_threadx

This branch includes Eclipse ThreadX RTOS for STM32F4 MCUs. Following indicates its folder structure:

### Directory layout

    stm32f4_base
    ├── repositories                         
    │   ├── drivers   
    │   │   ├── bsp                            
    │   │   │   └── 32f429idiscovery-bsp @ STMicroelectronics    # Board Support Packages from ST Microelectronics
    |   |   ├── cmsis                 
    │   │   │   ├── cmsis-core @ STMicroelectronics              # CMSIS core from ST Microelectronics, cloned from ARM limited           
    │   │   │   └── cmsis-device-f4 @ STMicroelectronics         # CMSIS STM32F4 device Peripheral Access Layer header and startup files
    |   |   └── hal                 
    │   │       └── stm32f4xx-hal-driver @ STMicroelectronics    # STM32F4 HAL         
    |   └── rtos                
    |       └── threadx @ eclipse-threadx                        # Eclipse ThreadX RTOS
    └── stm32f429                                                # Application folder for STM32F429 devices

### Basic Demonstration of Eclipse ThreadX

The project in each STM32F4XX folder demonstrates basic features of ThreadX RTOS such as thread creation, stack allocation, priority setting, and thread preemption. For the time being, ThreadX is ported only to STM32F429 MCU. Other MCUs will be included soon.

For more information regarding Eclipse ThreadX, please refer to: https://threadx.io/.

### Building and Debugging

Please refer to the readme file in the main branch.
