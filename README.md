# stm32f4_base
Template for STM32F4 MCUs. Folders are organized as follows:

stm32f4_base<br />
&ensp;|<br />
&ensp;+-----repositories<br />
&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----drivers<br />
&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|<br />
&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;+-----bsp<br />
&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;|&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;<br />
    |                   |      +-----32f429idiscovery-bsp @ STMicroelectronics<br />
    |                   |<br />
    |                   |<br />
    |                   +-----cmsis<br />
    |                   |       |<br />
    |                   |       +-----cmsis-core @ STMicroelectronics<br />
    |                   |       +-----cmsis-device-f4 @ STMicroelectronics<br />
    |                   |<br />
    |                   |<br />
    |                   +-----hal<br />
    |                          |<br />
    |                          +-----stm32f4xx-hal-driver @ STMicroelectronics<br />
    |<br />
    +-----stm32f429<br />  


The repositories folder contains public repositories (dependency like library and driver) required by all the STM32F4 MCUs and each of them has its own folder that contains individual source code, header, and Makefile. As for now only stm32f429 is created.