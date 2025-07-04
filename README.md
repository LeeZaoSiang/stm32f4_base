# stm32f4_base

This repository is dedicated for STM32F4 series microcontrollers. It provides a basic template with standard libraries like CMSIS, HAL, and Board Support Packages from ARM and ST Microelectronics. RTOSes like FreeRTOS and ThreadX are being included as the repository grows. Following indicates its folder structure and it varies from branch to branch.

### Directory Layout

    stm32f4_base
    ├── submodules                         
    │   └── drivers   
    │       ├── bsp                            
    │       │   └── 32f429idiscovery-bsp @ STMicroelectronics    # Board Support Packages from ST Microelectronics
    |       ├── cmsis                 
    │       │   ├── cmsis-core @ STMicroelectronics              # CMSIS core from ST Microelectronics, cloned from ARM limited           
    │       │   └── cmsis-device-f4 @ STMicroelectronics         # CMSIS STM32F4 device Peripheral Access Layer header and startup files
    |       └── hal                 
    │           └── stm32f4xx-hal-driver @ STMicroelectronics    # STM32F4 HAL                           
    └── stm32f429                                                # Application folder for STM32F429 devices


The submodules folder contains all the public repositories (dependency like library and driver) required by all the STM32F4 MCUs. For the time being, only stm32f429 is created and other MCUs will be included soon.

### Required Tools

For Windows users, MSYS2 is required: https://www.msys2.org

Once MSYS2 is installed, install the follwoing packages in command prompt:

1. GCC Arm Compiler: pacman -S mingw-w64-x86_64-arm-none-eabi-gcc
2. OpenOCD: pacman -S mingw-w64-x86_64-openocd
3. GNU Debugger(GDB): pacman -S mingw-w64-x86_64-gdb-multiarch

Once the packages above are installed, add this to your System PATH: C:\msys64\mingw64\bin

#### Note: 
All the demo projects in this repository were developed solely under OpenOCD but they can be migrated into any IDE like Keil MDK and STM32Cube if necessary. For the time being, most of the demo projects were tested using a STM32F429I-DISC1 discovery kit (https://www.st.com/en/evaluation-tools/32f429idiscovery.html) but they can be ported over to other STM32F4 demo kits. ST-LINK was used as the programmer and debugger so it's necessary to install its USB driver (STSW-LINK009): https://www.st.com/en/development-tools/stsw-link009.html.

### Building and Debugging

To build and program the code into your target:

1. Navigate into stm32f429 folder in command prompt and type "make" to build the code. An Executable and Linkable Format file (.elf) file will be generated.
2. Once it has finished building, type "make genbin". This will generate the required binary (.bin) file from the Executable and Linkable Format file above.
3. Type "make program" to program your target.

For debugging:

1. Type "make debug".
2. Open a new command prompt and navigate it into the stm32f429 folder and type "make start debug".
3. Once the GNU Debugger is invoked, type this to connect it to the OpenOCD: target extended-remote:3333

For more information on OpenOCD and GDB, please refer to: https://openocd.org/pages/documentation.html and https://www.sourceware.org/gdb/.

To clean up all the generated files during compilation, type "make clean".
