/*************************************************************************************
# Released under MIT License

Copyright (c) 2020 SF Yip (yipxxx@gmail.com)

Permission is hereby granted, free of charge, to any person obtaining a copy of this
software and associated documentation files (the "Software"), to deal in the Software
 without restriction, including without limitation the rights to use, copy, modify,
 merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
 permit persons to whom the Software is furnished to do so, subject to the following
 conditions:

The above copyright notice and this permission notice shall be included in all copies
 or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**************************************************************************************/

#ifndef _BTLDR_CONFIG_H_
#define _BTLDR_CONFIG_H_

#include "main.h"

// STM32G473CCu6 - 256KB Flash Size
#define DEV_FLASH_SIZE          (256*1024)

#define APP_ADDR                (FLASH_BASE + 0x8000)
#define APP_SIZE                (DEV_FLASH_SIZE - 0x8000)

#define CONFIG_READ_FLASH                   1u
#define CONFIG_SOFT_RESET_AFTER_IHEX_EOF    1u

#if defined(BOARD_3BB)
  #define USE_BOOTLOADER_LED
  #define BOOTLOADER_LED_PORT   GPIOA
  #define BOOTLOADER_LED_PIN    GPIO_PIN_8
#elif defined(BOARD_XMOUNT)
  #define USE_BOOTLOADER_LED
  // ACT_LED is on I2C expander PortA bit 4
#else
  #warning btldr_config.h must have a board defined
#endif

#endif
