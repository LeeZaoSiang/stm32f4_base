# stm32f4_threadx

This branch includes Eclipse ThreadX RTOS for STM32F4 MCUs. Following indicates its folder structure:

### Directory layout

    stm32f4_base
    ├── submodules                         
    │   ├── drivers   
    │   │   ├── bsp                            
    │   │   │   └── 32f429idiscovery-bsp @ STMicroelectronics    # Board Support Packages from ST Microelectronics
    |   |   ├── cmsis                 
    │   │   │   ├── cmsis-core @ STMicroelectronics              # CMSIS core from ST Microelectronics, cloned from ARM limited           
    │   │   │   └── cmsis-device-f4 @ STMicroelectronics         # CMSIS STM32F4 device Peripheral Access Layer header and startup files
    |   |   └── hal                 
    │   │       └── stm32f4xx-hal-driver @ STMicroelectronics    # STM32F4 HAL         
    |   └── rtos                
    |       └── eclipse_threadx 
    |           ├── threadx @ eclipse-threadx                    # Eclipse ThreadX RTOS
    |           └── components
    |               ├── filex @ eclipse-threadx                  # FAT compatible file system for ThreadX
    |               ├── netxduo @ eclipse-threadx                # TCP/IP network stack for ThreadX
    |               └── usbx @ eclipse-threadx                   # USB component for ThreadX
    └── stm32f429                                                # Application folder for STM32F429 devices

### Basic Demonstration of Eclipse ThreadX

The project in each STM32F4XX folder demonstrates basic features of ThreadX RTOS such as thread creation, stack allocation, priority setting, and thread preemption. For the time being, ThreadX is ported only to STM32F429 MCU. Other MCUs will be included soon.

For more information regarding Eclipse ThreadX, please refer to: https://threadx.io/.

### Building and Debugging

To build and program the code into your target:

1. Navigate into stm32f429 folder in command prompt and type "make" to build the code. An Executable and Linkable Format file (.elf) file will be generated inside a folder named "build".
2. Type "make program" to program your target.

For debugging:

1. Type "make debug".
2. Open a new command prompt and navigate it into the stm32f429 folder and type "make start_debug".
3. Once the GNU Debugger is invoked, type this to connect it to the OpenOCD: target extended-remote:3333

For more information on OpenOCD and GDB, please refer to: https://openocd.org/pages/documentation.html and https://www.sourceware.org/gdb/.

To clean up all the generated files during compilation, type "make clean".