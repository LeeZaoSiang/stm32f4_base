CC=arm-none-eabi-gcc
CFLAGS=-mcpu=cortex-m4 -mthumb --specs=nano.specs
CPPFLAGS=-DSTM32F429xx \
                 -DUSE_STM32F429I_DISCO \
				 -DUSE_HAL_DRIVER \
                 -Iinc \
				 -I../submodules/drivers/cmsis/cmsis-device-f4/Include  \
				 -I../submodules/drivers/hal/stm32f4xx-hal-driver/Inc \
				 -I../submodules/drivers/bsp/32f429idiscovery-bsp \
				 -I../submodules/drivers/cmsis/cmsis-core/Include \
							

LINKER_FILE=linker/STM32F429ZITX_FLASH.ld
LDFLAGS=-T $(LINKER_FILE) -u _printf_float

ELF = stm32f429i-disco_test.elf
BINARY = stm32f429i-disco_test.bin

PROGRAMMER = openocd
PROGRAMMER_FLAGS = -f interface/stlink-v2.cfg -f target/stm32f4x.cfg

DEBUGGER = gdb-multiarch
DEBUGGER_ELF = ./$(ELF)

all: $(ELF)

$(ELF): main.o startup_stm32f429zitx.o system_stm32f4xx.o stm32f4xx_hal_msp.o stm32f4xx_it.o syscalls.o sysmem.o stm32f4xx_hal.o \
        stm32f4xx_hal_cortex.o stm32f4xx_hal_dma.o stm32f4xx_hal_dma_ex.o stm32f4xx_hal_flash.o stm32f4xx_hal_flash_ex.o stm32f4xx_hal_gpio.o \
		stm32f4xx_hal_i2c.o stm32f4xx_hal_i2c_ex.o stm32f4xx_hal_pwr.o stm32f4xx_hal_pwr_ex.o \
        stm32f4xx_hal_rcc.o stm32f4xx_hal_rcc_ex.o stm32f4xx_hal_spi.o stm32f429i_discovery.o stm32f4xx_hal_tim.o stm32f4xx_hal_tim_ex.o stm32f4xx_hal_exti.o \
		stm32f4xx_hal_flash_ramfunc.o
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $^ -o $(ELF)

main.o: source/main.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

startup_stm32f429zitx.o: startup/startup_stm32f429zitx.s
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

system_stm32f4xx.o: source/system_stm32f4xx.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_msp.o: source/stm32f4xx_hal_msp.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_it.o: source/stm32f4xx_it.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

syscalls.o: source/system/syscalls.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

sysmem.o: source/system/sysmem.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_cortex.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_cortex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
stm32f4xx_hal_dma.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_dma.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_dma_ex.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_dma_ex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_flash.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_flash.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_flash_ex.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_flash_ex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_gpio.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_gpio.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_i2c.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_i2c.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_i2c_ex.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_i2c_ex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_pwr.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_pwr.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_pwr_ex.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_pwr_ex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_rcc.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_rcc.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_rcc_ex.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_rcc_ex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_spi.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_spi.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_tim.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_tim.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_tim_ex.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_tim_ex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_exti.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_exti.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_flash_ramfunc.o: ../submodules/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_flash_ramfunc.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f429i_discovery.o: ../submodules/drivers/bsp/32f429idiscovery-bsp/stm32f429i_discovery.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g


.PHONY: clean

genbin:
	arm-none-eabi-objcopy -O binary $(ELF) $(BINARY)

clean:
	rm -f *.o *.elf *.bin

program: $(ELF)
	$(PROGRAMMER) $(PROGRAMMER_FLAGS) -c "program $(ELF) verify reset exit"

debug:
	$(PROGRAMMER) $(PROGRAMMER_FLAGS)

start_debug:
	$(DEBUGGER) $(DEBUGGER_ELF)
