# stm32f4_base
Template for STM32F4 MCUs. Folders are organized as follows:

stm32f4_base<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;&ensp;&ensp;&ensp;&ensp;+-----repositories<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----drivers<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----bsp<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----32f429idiscovery-bsp @ STMicroelectronics<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----cmsis<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----cmsis-core @ STMicroelectronics<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----cmsis-device-f4 @ STMicroelectronics<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----hal<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----stm32f4xx-hal-driver @ STMicroelectronics<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----rtos<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----threadx @ eclipse-threadx<br />
&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;&ensp;&ensp;&ensp;&ensp;+-----stm32f429<br />  


The repositories folder contains public repositories (dependency like library and driver) required by all the STM32F4 MCUs and each of them has its own folder that contains individual source code, header, and Makefile. As for now only stm32f429 is created.