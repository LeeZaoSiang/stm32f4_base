CC=arm-none-eabi-gcc
CFLAGS=-mcpu=cortex-m4 -mthumb --specs=nano.specs
CPPFLAGS=-DSTM32F429xx \
                 -DTX_INCLUDE_USER_DEFINE_FILE \
				 -DUSE_HAL_DRIVER \
				 -DUSE_STM32F429I_DISCO \
                 -Iinc \
				 -I../repositories/drivers/cmsis/cmsis-device-f4/Include  \
				 -I../repositories/drivers/hal/stm32f4xx-hal-driver/Inc \
				 -I../repositories/drivers/hal/stm32f4xx-hal-driver/Inc/Legacy \
				 -I../repositories/drivers/bsp/32f429idiscovery-bsp \
				 -I../repositories/drivers/cmsis/cmsis-core/Include \
				 -I../repositories/rtos/threadx/common/inc \
				 -I../repositories/rtos/threadx/ports/cortex_m4/gnu/inc


LINKER_FILE=linker/STM32F429ZITX_FLASH.ld
LDFLAGS=-T $(LINKER_FILE) -u _printf_float

ELF = stm32f429i-disco_test.elf
BINARY = stm32f429i-disco_test.bin

PROGRAMMER = openocd
PROGRAMMER_FLAGS = -f interface/stlink.cfg -f target/stm32f4x.cfg

all: $(ELF)

$(ELF): main.o \
        startup_stm32f429zitx.o \
		system_stm32f4xx.o \
		stm32f4xx_hal_msp.o \
		stm32f4xx_hal_timebase_tim.o \
		stm32f4xx_it.o \
		syscalls.o \
		sysmem.o \
		stm32f4xx_hal.o \
        stm32f4xx_hal_cortex.o \
		stm32f4xx_hal_dma.o \
		stm32f4xx_hal_dma_ex.o \
		stm32f4xx_hal_flash.o \
		stm32f4xx_hal_flash_ex.o \
		stm32f4xx_hal_gpio.o \
		stm32f4xx_hal_i2c.o \
		stm32f4xx_hal_i2c_ex.o \
		stm32f4xx_hal_pwr.o \
		stm32f4xx_hal_pwr_ex.o \
        stm32f4xx_hal_rcc.o \
		stm32f4xx_hal_rcc_ex.o \
		stm32f4xx_hal_spi.o \
		stm32f429i_discovery.o \
		stm32f4xx_hal_tim.o \
		stm32f4xx_hal_tim_ex.o \
		stm32f4xx_hal_exti.o \
		stm32f4xx_hal_flash_ramfunc.o \
		tx_initialize_low_level.o \
        app_eclipse_rtos.o \
        app_threadx.o \
        tx_block_allocate.o \
        tx_block_pool_cleanup.o \
        tx_block_pool_create.o \
        tx_block_pool_delete.o \
        tx_block_pool_info_get.o \
        tx_block_pool_initialize.o \
        tx_block_pool_prioritize.o \
        tx_block_release.o \
        tx_byte_allocate.o \
        tx_byte_pool_cleanup.o \
        tx_byte_pool_create.o \
        tx_byte_pool_delete.o \
        tx_byte_pool_info_get.o \
        tx_byte_pool_initialize.o \
        tx_byte_pool_prioritize.o \
        tx_byte_pool_search.o \
        tx_byte_release.o \
        tx_event_flags_cleanup.o \
        tx_event_flags_create.o \
        tx_event_flags_delete.o \
        tx_event_flags_get.o \
        tx_event_flags_info_get.o \
        tx_event_flags_initialize.o \
        tx_event_flags_set.o \
        tx_event_flags_set_notify.o \
        tx_initialize_high_level.o \
        tx_initialize_kernel_enter.o \
        tx_initialize_kernel_setup.o \
        tx_mutex_cleanup.o \
        tx_mutex_create.o \
        tx_mutex_delete.o \
        tx_mutex_get.o \
        tx_mutex_info_get.o \
        tx_mutex_initialize.o \
        tx_mutex_prioritize.o \
        tx_mutex_priority_change.o \
        tx_mutex_put.o \
        tx_queue_cleanup.o \
        tx_queue_create.o \
        tx_queue_delete.o \
        tx_queue_flush.o \
        tx_queue_front_send.o \
        tx_queue_info_get.o \
        tx_queue_initialize.o \
        tx_queue_prioritize.o \
        tx_queue_receive.o \
        tx_queue_send.o \
        tx_queue_send_notify.o \
        tx_semaphore_ceiling_put.o \
        tx_semaphore_cleanup.o \
        tx_semaphore_create.o \
        tx_semaphore_delete.o \
        tx_semaphore_get.o \
        tx_semaphore_info_get.o \
        tx_semaphore_initialize.o \
        tx_semaphore_prioritize.o \
        tx_semaphore_put.o \
        tx_semaphore_put_notify.o \
        tx_thread_context_restore.o \
        tx_thread_context_save.o \
        tx_thread_create.o \
        tx_thread_delete.o \
        tx_thread_entry_exit_notify.o \
        tx_thread_identify.o \
        tx_thread_info_get.o \
        tx_thread_initialize.o \
        tx_thread_interrupt_control.o \
        tx_thread_preemption_change.o \
        tx_thread_priority_change.o \
        tx_thread_relinquish.o \
        tx_thread_reset.o \
        tx_thread_resume.o \
        tx_thread_schedule.o \
        tx_thread_shell_entry.o \
        tx_thread_sleep.o \
        tx_thread_stack_analyze.o \
        tx_thread_stack_build.o \
        tx_thread_stack_error_handler.o \
        tx_thread_stack_error_notify.o \
        tx_thread_suspend.o \
        tx_thread_system_preempt_check.o \
        tx_thread_system_resume.o \
        tx_thread_system_return.o \
        tx_thread_system_suspend.o \
        tx_thread_terminate.o \
        tx_thread_time_slice.o \
        tx_thread_time_slice_change.o \
        tx_thread_timeout.o \
        tx_thread_wait_abort.o \
        tx_time_get.o \
        tx_time_set.o \
        tx_timer_activate.o \
        tx_timer_change.o \
        tx_timer_create.o \
        tx_timer_deactivate.o \
        tx_timer_delete.o \
        tx_timer_expiration_process.o \
        tx_timer_info_get.o \
        tx_timer_initialize.o \
        tx_timer_interrupt.o \
        tx_timer_system_activate.o \
        tx_timer_system_deactivate.o \
        tx_timer_thread_entry.o \
        txe_block_allocate.o \
        txe_block_pool_create.o \
        txe_block_pool_delete.o \
        txe_block_pool_info_get.o \
        txe_block_pool_prioritize.o \
        txe_block_release.o \
        txe_byte_allocate.o \
        txe_byte_pool_create.o \
        txe_byte_pool_delete.o \
        txe_byte_pool_info_get.o \
        txe_byte_pool_prioritize.o \
        txe_byte_release.o \
        txe_event_flags_create.o \
        txe_event_flags_delete.o \
        txe_event_flags_get.o \
        txe_event_flags_info_get.o \
        txe_event_flags_set.o \
        txe_event_flags_set_notify.o \
        txe_mutex_create.o \
        txe_mutex_delete.o \
        txe_mutex_get.o \
        txe_mutex_info_get.o \
        txe_mutex_prioritize.o \
        txe_mutex_put.o \
        txe_queue_create.o \
        txe_queue_delete.o \
        txe_queue_flush.o \
        txe_queue_front_send.o \
        txe_queue_info_get.o \
        txe_queue_prioritize.o \
        txe_queue_receive.o \
        txe_queue_send.o \
        txe_queue_send_notify.o \
        txe_semaphore_ceiling_put.o \
        txe_semaphore_create.o \
        txe_semaphore_delete.o \
        txe_semaphore_get.o \
        txe_semaphore_info_get.o \
        txe_semaphore_prioritize.o \
        txe_semaphore_put.o \
        txe_semaphore_put_notify.o \
        txe_thread_create.o \
        txe_thread_delete.o \
        txe_thread_entry_exit_notify.o \
        txe_thread_info_get.o \
        txe_thread_preemption_change.o \
        txe_thread_priority_change.o \
        txe_thread_relinquish.o \
        txe_thread_reset.o \
        txe_thread_resume.o \
        txe_thread_suspend.o \
        txe_thread_terminate.o \
        txe_thread_time_slice_change.o \
        txe_thread_wait_abort.o \
        txe_timer_activate.o \
        txe_timer_change.o \
        txe_timer_create.o \
        txe_timer_deactivate.o \
        txe_timer_delete.o \
        txe_timer_info_get.o
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $^ -o $(ELF)


main.o: source/main.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

startup_stm32f429zitx.o: startup/startup_stm32f429zitx.s
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

system_stm32f4xx.o: source/system_stm32f4xx.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_msp.o: source/stm32f4xx_hal_msp.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_timebase_tim.o: source/stm32f4xx_hal_timebase_tim.c
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

stm32f4xx_hal_dma_ex.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_dma_ex.c
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

stm32f4xx_hal_tim.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_tim.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_tim_ex.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_tim_ex.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_exti.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_exti.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f4xx_hal_flash_ramfunc.o: ../repositories/drivers/hal/stm32f4xx-hal-driver/Src/stm32f4xx_hal_flash_ramfunc.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

stm32f429i_discovery.o: ../repositories/drivers/bsp/32f429idiscovery-bsp/stm32f429i_discovery.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g


#ThreadX RTOS:
tx_initialize_low_level.o: startup/tx_initialize_low_level.S
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

app_eclipse_rtos.o: source/app_eclipse_rtos.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

app_threadx.o: source/app_threadx.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_block_allocate.o: ../repositories/rtos/threadx/common/src/tx_block_allocate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_block_pool_cleanup.o: ../repositories/rtos/threadx/common/src/tx_block_pool_cleanup.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_block_pool_create.o: ../repositories/rtos/threadx/common/src/tx_block_pool_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_block_pool_delete.o: ../repositories/rtos/threadx/common/src/tx_block_pool_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_block_pool_info_get.o: ../repositories/rtos/threadx/common/src/tx_block_pool_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_block_pool_initialize.o: ../repositories/rtos/threadx/common/src/tx_block_pool_initialize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_block_pool_prioritize.o: ../repositories/rtos/threadx/common/src/tx_block_pool_prioritize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_block_release.o: ../repositories/rtos/threadx/common/src/tx_block_release.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_byte_allocate.o: ../repositories/rtos/threadx/common/src/tx_byte_allocate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_byte_pool_cleanup.o: ../repositories/rtos/threadx/common/src/tx_byte_pool_cleanup.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_byte_pool_create.o: ../repositories/rtos/threadx/common/src/tx_byte_pool_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_byte_pool_delete.o: ../repositories/rtos/threadx/common/src/tx_byte_pool_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_byte_pool_info_get.o: ../repositories/rtos/threadx/common/src/tx_byte_pool_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_byte_pool_initialize.o: ../repositories/rtos/threadx/common/src/tx_byte_pool_initialize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_byte_pool_prioritize.o: ../repositories/rtos/threadx/common/src/tx_byte_pool_prioritize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_byte_pool_search.o: ../repositories/rtos/threadx/common/src/tx_byte_pool_search.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_byte_release.o: ../repositories/rtos/threadx/common/src/tx_byte_release.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_event_flags_cleanup.o: ../repositories/rtos/threadx/common/src/tx_event_flags_cleanup.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_event_flags_create.o: ../repositories/rtos/threadx/common/src/tx_event_flags_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_event_flags_delete.o: ../repositories/rtos/threadx/common/src/tx_event_flags_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_event_flags_get.o: ../repositories/rtos/threadx/common/src/tx_event_flags_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_event_flags_info_get.o: ../repositories/rtos/threadx/common/src/tx_event_flags_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_event_flags_initialize.o: ../repositories/rtos/threadx/common/src/tx_event_flags_initialize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_event_flags_set.o: ../repositories/rtos/threadx/common/src/tx_event_flags_set.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_event_flags_set_notify.o: ../repositories/rtos/threadx/common/src/tx_event_flags_set_notify.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_initialize_high_level.o: ../repositories/rtos/threadx/common/src/tx_initialize_high_level.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_initialize_kernel_enter.o: ../repositories/rtos/threadx/common/src/tx_initialize_kernel_enter.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_initialize_kernel_setup.o: ../repositories/rtos/threadx/common/src/tx_initialize_kernel_setup.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_mutex_cleanup.o: ../repositories/rtos/threadx/common/src/tx_mutex_cleanup.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_mutex_create.o: ../repositories/rtos/threadx/common/src/tx_mutex_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_mutex_delete.o: ../repositories/rtos/threadx/common/src/tx_mutex_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_mutex_get.o: ../repositories/rtos/threadx/common/src/tx_mutex_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_mutex_info_get.o: ../repositories/rtos/threadx/common/src/tx_mutex_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_mutex_initialize.o: ../repositories/rtos/threadx/common/src/tx_mutex_initialize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_mutex_prioritize.o: ../repositories/rtos/threadx/common/src/tx_mutex_prioritize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_mutex_priority_change.o: ../repositories/rtos/threadx/common/src/tx_mutex_priority_change.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_mutex_put.o: ../repositories/rtos/threadx/common/src/tx_mutex_put.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_queue_cleanup.o: ../repositories/rtos/threadx/common/src/tx_queue_cleanup.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_queue_create.o: ../repositories/rtos/threadx/common/src/tx_queue_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_queue_delete.o: ../repositories/rtos/threadx/common/src/tx_queue_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_queue_flush.o: ../repositories/rtos/threadx/common/src/tx_queue_flush.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_queue_front_send.o: ../repositories/rtos/threadx/common/src/tx_queue_front_send.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_queue_info_get.o: ../repositories/rtos/threadx/common/src/tx_queue_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_queue_initialize.o: ../repositories/rtos/threadx/common/src/tx_queue_initialize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_queue_prioritize.o: ../repositories/rtos/threadx/common/src/tx_queue_prioritize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_queue_receive.o: ../repositories/rtos/threadx/common/src/tx_queue_receive.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_queue_send.o: ../repositories/rtos/threadx/common/src/tx_queue_send.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_queue_send_notify.o: ../repositories/rtos/threadx/common/src/tx_queue_send_notify.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_semaphore_ceiling_put.o: ../repositories/rtos/threadx/common/src/tx_semaphore_ceiling_put.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_semaphore_cleanup.o: ../repositories/rtos/threadx/common/src/tx_semaphore_cleanup.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_semaphore_create.o: ../repositories/rtos/threadx/common/src/tx_semaphore_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_semaphore_delete.o: ../repositories/rtos/threadx/common/src/tx_semaphore_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_semaphore_get.o: ../repositories/rtos/threadx/common/src/tx_semaphore_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_semaphore_info_get.o: ../repositories/rtos/threadx/common/src/tx_semaphore_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_semaphore_initialize.o: ../repositories/rtos/threadx/common/src/tx_semaphore_initialize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_semaphore_prioritize.o: ../repositories/rtos/threadx/common/src/tx_semaphore_prioritize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_semaphore_put.o: ../repositories/rtos/threadx/common/src/tx_semaphore_put.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
		
tx_semaphore_put_notify.o: ../repositories/rtos/threadx/common/src/tx_semaphore_put_notify.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_context_restore.o: ../repositories/rtos/threadx/ports/cortex_m4/gnu/src/tx_thread_context_restore.S
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_context_save.o: ../repositories/rtos/threadx/ports/cortex_m4/gnu/src/tx_thread_context_save.S
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_create.o: ../repositories/rtos/threadx/common/src/tx_thread_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_delete.o: ../repositories/rtos/threadx/common/src/tx_thread_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_entry_exit_notify.o: ../repositories/rtos/threadx/common/src/tx_thread_entry_exit_notify.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_identify.o: ../repositories/rtos/threadx/common/src/tx_thread_identify.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_info_get.o: ../repositories/rtos/threadx/common/src/tx_thread_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_initialize.o: ../repositories/rtos/threadx/common/src/tx_thread_initialize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_interrupt_control.o: ../repositories/rtos/threadx/ports/cortex_m4/gnu/src/tx_thread_interrupt_control.S
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_preemption_change.o: ../repositories/rtos/threadx/common/src/tx_thread_preemption_change.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_thread_priority_change.o: ../repositories/rtos/threadx/common/src/tx_thread_priority_change.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_relinquish.o: ../repositories/rtos/threadx/common/src/tx_thread_relinquish.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_reset.o: ../repositories/rtos/threadx/common/src/tx_thread_reset.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_resume.o: ../repositories/rtos/threadx/common/src/tx_thread_resume.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_schedule.o: ../repositories/rtos/threadx/ports/cortex_m4/gnu/src/tx_thread_schedule.S
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g	

tx_thread_shell_entry.o: ../repositories/rtos/threadx/common/src/tx_thread_shell_entry.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_sleep.o: ../repositories/rtos/threadx/common/src/tx_thread_sleep.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_stack_analyze.o: ../repositories/rtos/threadx/common/src/tx_thread_stack_analyze.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_stack_build.o: ../repositories/rtos/threadx/ports/cortex_m4/gnu/src/tx_thread_stack_build.S
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_stack_error_handler.o: ../repositories/rtos/threadx/common/src/tx_thread_stack_error_handler.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_stack_error_notify.o: ../repositories/rtos/threadx/common/src/tx_thread_stack_error_notify.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_suspend.o: ../repositories/rtos/threadx/common/src/tx_thread_suspend.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_system_preempt_check.o: ../repositories/rtos/threadx/common/src/tx_thread_system_preempt_check.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_system_resume.o: ../repositories/rtos/threadx/common/src/tx_thread_system_resume.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_thread_system_return.o: ../repositories/rtos/threadx/ports/cortex_m4/gnu/src/tx_thread_system_return.S
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_system_suspend.o: ../repositories/rtos/threadx/common/src/tx_thread_system_suspend.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_thread_terminate.o: ../repositories/rtos/threadx/common/src/tx_thread_terminate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_time_slice.o: ../repositories/rtos/threadx/common/src/tx_thread_time_slice.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_time_slice_change.o: ../repositories/rtos/threadx/common/src/tx_thread_time_slice_change.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_timeout.o: ../repositories/rtos/threadx/common/src/tx_thread_timeout.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_thread_wait_abort.o: ../repositories/rtos/threadx/common/src/tx_thread_wait_abort.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_time_get.o: ../repositories/rtos/threadx/common/src/tx_time_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_time_set.o: ../repositories/rtos/threadx/common/src/tx_time_set.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_timer_activate.o: ../repositories/rtos/threadx/common/src/tx_timer_activate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_timer_change.o: ../repositories/rtos/threadx/common/src/tx_timer_change.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_timer_create.o: ../repositories/rtos/threadx/common/src/tx_timer_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_timer_deactivate.o: ../repositories/rtos/threadx/common/src/tx_timer_deactivate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_timer_delete.o: ../repositories/rtos/threadx/common/src/tx_timer_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_timer_expiration_process.o: ../repositories/rtos/threadx/common/src/tx_timer_expiration_process.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_timer_info_get.o: ../repositories/rtos/threadx/common/src/tx_timer_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_timer_initialize.o: ../repositories/rtos/threadx/common/src/tx_timer_initialize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_timer_interrupt.o: ../repositories/rtos/threadx/ports/cortex_m4/gnu/src/tx_timer_interrupt.S
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
tx_timer_system_activate.o: ../repositories/rtos/threadx/common/src/tx_timer_system_activate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_timer_system_deactivate.o: ../repositories/rtos/threadx/common/src/tx_timer_system_deactivate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

tx_timer_thread_entry.o: ../repositories/rtos/threadx/common/src/tx_timer_thread_entry.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_block_allocate.o: ../repositories/rtos/threadx/common/src/txe_block_allocate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_block_pool_create.o: ../repositories/rtos/threadx/common/src/txe_block_pool_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_block_pool_delete.o: ../repositories/rtos/threadx/common/src/txe_block_pool_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_block_pool_info_get.o: ../repositories/rtos/threadx/common/src/txe_block_pool_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_block_pool_prioritize.o: ../repositories/rtos/threadx/common/src/txe_block_pool_prioritize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_block_release.o: ../repositories/rtos/threadx/common/src/txe_block_release.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_byte_allocate.o: ../repositories/rtos/threadx/common/src/txe_byte_allocate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_byte_pool_create.o: ../repositories/rtos/threadx/common/src/txe_byte_pool_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_byte_pool_delete.o: ../repositories/rtos/threadx/common/src/txe_byte_pool_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_byte_pool_info_get.o: ../repositories/rtos/threadx/common/src/txe_byte_pool_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_byte_pool_prioritize.o: ../repositories/rtos/threadx/common/src/txe_byte_pool_prioritize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_byte_release.o: ../repositories/rtos/threadx/common/src/txe_byte_release.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_event_flags_create.o: ../repositories/rtos/threadx/common/src/txe_event_flags_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_event_flags_delete.o: ../repositories/rtos/threadx/common/src/txe_event_flags_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_event_flags_get.o: ../repositories/rtos/threadx/common/src/txe_event_flags_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_event_flags_info_get.o: ../repositories/rtos/threadx/common/src/txe_event_flags_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_event_flags_set.o: ../repositories/rtos/threadx/common/src/txe_event_flags_set.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_event_flags_set_notify.o: ../repositories/rtos/threadx/common/src/txe_event_flags_set_notify.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_mutex_create.o: ../repositories/rtos/threadx/common/src/txe_mutex_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_mutex_delete.o: ../repositories/rtos/threadx/common/src/txe_mutex_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
		
txe_mutex_get.o: ../repositories/rtos/threadx/common/src/txe_mutex_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_mutex_info_get.o: ../repositories/rtos/threadx/common/src/txe_mutex_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_mutex_prioritize.o: ../repositories/rtos/threadx/common/src/txe_mutex_prioritize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_mutex_put.o: ../repositories/rtos/threadx/common/src/txe_mutex_put.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_queue_create.o: ../repositories/rtos/threadx/common/src/txe_queue_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_queue_delete.o: ../repositories/rtos/threadx/common/src/txe_queue_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_queue_flush.o: ../repositories/rtos/threadx/common/src/txe_queue_flush.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_queue_front_send.o: ../repositories/rtos/threadx/common/src/txe_queue_front_send.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_queue_info_get.o: ../repositories/rtos/threadx/common/src/txe_queue_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_queue_prioritize.o: ../repositories/rtos/threadx/common/src/txe_queue_prioritize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_queue_receive.o: ../repositories/rtos/threadx/common/src/txe_queue_receive.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_queue_send.o: ../repositories/rtos/threadx/common/src/txe_queue_send.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_queue_send_notify.o: ../repositories/rtos/threadx/common/src/txe_queue_send_notify.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_semaphore_ceiling_put.o: ../repositories/rtos/threadx/common/src/txe_semaphore_ceiling_put.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_semaphore_create.o: ../repositories/rtos/threadx/common/src/txe_semaphore_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_semaphore_delete.o: ../repositories/rtos/threadx/common/src/txe_semaphore_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_semaphore_get.o: ../repositories/rtos/threadx/common/src/txe_semaphore_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_semaphore_info_get.o: ../repositories/rtos/threadx/common/src/txe_semaphore_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_semaphore_prioritize.o: ../repositories/rtos/threadx/common/src/txe_semaphore_prioritize.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_semaphore_put.o: ../repositories/rtos/threadx/common/src/txe_semaphore_put.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_semaphore_put_notify.o: ../repositories/rtos/threadx/common/src/txe_semaphore_put_notify.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_thread_create.o: ../repositories/rtos/threadx/common/src/txe_thread_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_thread_delete.o: ../repositories/rtos/threadx/common/src/txe_thread_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_thread_entry_exit_notify.o: ../repositories/rtos/threadx/common/src/txe_thread_entry_exit_notify.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_thread_info_get.o: ../repositories/rtos/threadx/common/src/txe_thread_info_get.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_thread_preemption_change.o: ../repositories/rtos/threadx/common/src/txe_thread_preemption_change.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_thread_priority_change.o: ../repositories/rtos/threadx/common/src/txe_thread_priority_change.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_thread_relinquish.o: ../repositories/rtos/threadx/common/src/txe_thread_relinquish.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_thread_reset.o: ../repositories/rtos/threadx/common/src/txe_thread_reset.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_thread_resume.o: ../repositories/rtos/threadx/common/src/txe_thread_resume.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_thread_suspend.o: ../repositories/rtos/threadx/common/src/txe_thread_suspend.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_thread_terminate.o: ../repositories/rtos/threadx/common/src/txe_thread_terminate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_thread_time_slice_change.o: ../repositories/rtos/threadx/common/src/txe_thread_time_slice_change.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_thread_wait_abort.o: ../repositories/rtos/threadx/common/src/txe_thread_wait_abort.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_timer_activate.o: ../repositories/rtos/threadx/common/src/txe_timer_activate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_timer_change.o: ../repositories/rtos/threadx/common/src/txe_timer_change.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_timer_create.o: ../repositories/rtos/threadx/common/src/txe_timer_create.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_timer_deactivate.o: ../repositories/rtos/threadx/common/src/txe_timer_deactivate.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g

txe_timer_delete.o: ../repositories/rtos/threadx/common/src/txe_timer_delete.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -c -g
	
txe_timer_info_get.o: ../repositories/rtos/threadx/common/src/txe_timer_info_get.c
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