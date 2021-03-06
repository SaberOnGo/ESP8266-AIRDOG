/*
 * ESPRESSIF MIT License
 *
 * Copyright (c) 2016 <ESPRESSIF SYSTEMS (SHANGHAI) PTE LTD>
 *
 * Permission is hereby granted for use on ESPRESSIF SYSTEMS ESP8266 only, in which case,
 * it is free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#include "ets_sys.h"
#include "osapi.h"
#include "ip_addr.h"
#include "espconn.h"
#include "mem.h"


#include "user_interface.h"
#include "smartconfig.h"
#include "airkiss.h"

//#include "gagent_soc.h"
#include "user_devicefind.h"
#include "user_webserver.h"
#include "gizwits_uart.h"


#if ESP_PLATFORM
#include "user_esp_platform.h"
#endif

#ifdef SERVER_SSL_ENABLE
#include "ssl/cert.h"
#include "ssl/private_key.h"
#else
#ifdef CLIENT_SSL_ENABLE
unsigned char *default_certificate;
unsigned int default_certificate_len = 0;
unsigned char *default_private_key;
unsigned int default_private_key_len = 0;
#endif
#endif



/******************************************************************************
 * FunctionName : user_rf_cal_sector_set
 * Description  : SDK just reversed 4 sectors, used for rf init data and paramters.
 *                We add this function to force users to set rf cal sector, since
 *                we don't know which sector is free in user's application.
 *                sector map for last several sectors : ABCCC
 *                A : rf cal
 *                B : rf init data
 *                C : sdk parameters
 * Parameters   : none
 * Returns      : rf cal sector
*******************************************************************************/
uint32 ICACHE_FLASH_ATTR
user_rf_cal_sector_set(void)
{
    enum flash_size_map size_map = system_get_flash_size_map();
    uint32 rf_cal_sec = 0;

    switch (size_map) {
        case FLASH_SIZE_4M_MAP_256_256:
            rf_cal_sec = 128 - 5;
            break;

        case FLASH_SIZE_8M_MAP_512_512:
            rf_cal_sec = 256 - 5;
            break;

        case FLASH_SIZE_16M_MAP_512_512:
        case FLASH_SIZE_16M_MAP_1024_1024:
            rf_cal_sec = 512 - 5;
            break;

        case FLASH_SIZE_32M_MAP_512_512:
        case FLASH_SIZE_32M_MAP_1024_1024:
            rf_cal_sec = 1024 - 5;
            break;

        case FLASH_SIZE_64M_MAP_1024_1024:
            rf_cal_sec = 2048 - 5;
            break;
        case FLASH_SIZE_128M_MAP_1024_1024:
            rf_cal_sec = 4096 - 5;
            break;
        default:
            rf_cal_sec = 0;
            break;
    }

    return rf_cal_sec;
}


void ICACHE_FLASH_ATTR
user_rf_pre_init(void)
{
}



void ICACHE_FLASH_ATTR
user_init(void)
{
       #if 1
       uint32_t system_free_size = 0;

        uart_init(115200,115200);
        UART_SetPrintPort(1);
        
       wifi_station_set_auto_connect(1);
       wifi_set_sleep_type(NONE_SLEEP_T);//set none sleep mode
       espconn_tcp_set_max_con(10);
       
       
       GIZWITS_LOG( "---------------SDK version:%s--------------\n", system_get_sdk_version());
       GIZWITS_LOG( "system_get_free_heap_size=%d\n",system_get_free_heap_size());

       #if 0
       struct rst_info *rtc_info = system_get_rst_info();
       GIZWITS_LOG( "reset reason: %x\n", rtc_info->reason);
       if (rtc_info->reason == REASON_WDT_RST ||
           rtc_info->reason == REASON_EXCEPTION_RST ||
           rtc_info->reason == REASON_SOFT_WDT_RST)
      {
           if (rtc_info->reason == REASON_EXCEPTION_RST)
           {
                  GIZWITS_LOG("Fatal exception (%d):\n", rtc_info->exccause);
           }
           GIZWITS_LOG( "epc1=0x%08x, epc2=0x%08x, epc3=0x%08x, excvaddr=0x%08x, depc=0x%08x\n",
                   rtc_info->epc1, rtc_info->epc2, rtc_info->epc3, rtc_info->excvaddr, rtc_info->depc);
      }
      #endif
      
       if (system_upgrade_userbin_check() == UPGRADE_FW_BIN1)
       {
               GIZWITS_LOG( "---UPGRADE_FW_BIN1---\n");
       }
       else if (system_upgrade_userbin_check() == UPGRADE_FW_BIN2)
       {
              GIZWITS_LOG( "---UPGRADE_FW_BIN2---\n");
       }
   
       gizwits_usr_init();
       GIZWITS_LOG("--- system_free_size = %d ---\n", system_get_free_heap_size());
       
       #else
       uart_init(115200,115200);
       UART_SetPrintPort(1);
       GIZWITS_LOG( "---------------SDK version:%s--------------\n", system_get_sdk_version());
       GIZWITS_LOG( "system_get_free_heap_size=%d\n",system_get_free_heap_size());

       usr_airkiss_start();
       #endif
}

