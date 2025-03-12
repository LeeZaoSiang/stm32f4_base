CC=arm-none-eabi-gcc
CFLAGS=-mcpu=cortex-m4 -mthumb --specs=nano.specs
CPPFLAGS=-DSTM32F429xx \
                 -DUSE_STM32F429I_DISCO \
				 -DUSE_HAL_DRIVER \
                 -Iinc \
				 -I../repositories/drivers/cmsis/cmsis-device-f4/Include  \
				 -I../repositories/drivers/hal/stm32f4xx-hal-driver/Inc \
				 -I../repositories/drivers/bsp/32f429idiscovery-bsp \
				 -I../repositories/drivers/cmsis/cmsis-core/Include \
							

LINKER_FILE=linker/STM32F429ZITX_FLASH.ld
LDFLAGS=-T $(LINKER_FILE) -u _printf_float

ELF = stm32f429i-disco_test.elf
BINARY = stm32f429i-disco_test.bin

PROGRAMMER = openocd
PROGRAMMER_FLAGS = -f interface/stlink.cfg -f target/stm32f4x.cfg

all: $(ELF)

$(ELF): main.o startup_stm32f429zitx.o system_stm32f4xx.o stm32f4xx_it.o syscalls.o sysmem.o stm32f4xx_hal.o \
        stm32f4xx_hal_cortex.o stm32f4xx_hal_dma.o stm32f4xx_hal_flash.o stm32f4xx_hal_flash_ex.o stm32f4xx_hal_gpio.o \
		stm32f4xx_hal_i2c.o stm32f4xx_hal_i2c_ex.o stm32f4xx_hal_pwr.o stm32f4xx_hal_pwr_ex.o \
        stm32f4xx_hal_rcc.o stm32f4xx_hal_rcc_ex.o stm32f4xx_hal_spi.o stm32f429i_discovery.o
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $^ -o $(ELF)

main.o: source/main.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g


startup_stm32f429zitx.o: startup/startup_stm32f429zitx.s
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

system_stm32f4xx.o: source/system_stm32f4xx.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_it.o: source/stm32f4xx_it.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

syscalls.o: source/system/syscalls.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

sysmem.o: source/system/sysmem.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_cortex.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_cortex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
stm32f4xx_hal_dma.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_dma.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_flash.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_flash.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_flash_ex.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_flash_ex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_gpio.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_gpio.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_i2c.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_i2c.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_i2c_ex.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_i2c_ex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_pwr.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_pwr.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_pwr_ex.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_pwr_ex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_rcc.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_rcc.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_rcc_ex.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_rcc_ex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_spi.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_spi.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

	
stm32f429i_discovery.o: ../repositories/drivers/bsp/32f429idiscovery-bsp/stm32f429i_discovery.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g


.PHONY: clean

genbin:
	arm-none-eabi-objcopy -O binary $(ELF) $(BINARY)

clean:
	rm -f *.o *.elf *.bin

flash: $(ELF)
	$(PROGRAMMER) $(PROGRAMMER_FLAGS) -c "program $(ELF) verify reset exit"

debug:
	$(PROGRAMMER) $(PROGRAMMER_FLAGS)