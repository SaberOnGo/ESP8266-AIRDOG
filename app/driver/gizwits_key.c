
#include "driver/gizwits_key.h"
#include "driver/hal_key.h"


#include "ets_sys.h"
#include "os_type.h"
#include "osapi.h"
#include "mem.h"
#include "gpio.h"
#include "user_interface.h"

#include "driver/key.h"
#include "gizwits_product.h"

#include "smartconfig.h"
#include "airkiss.h"

#define GPIO_KEY_NUM                            2                           ///< Defines the total number of key members
#define KEY_0_IO_MUX                            PERIPHS_IO_MUX_GPIO0_U      ///< ESP8266 GPIO function
#define KEY_0_IO_NUM                            0                           ///< ESP8266 GPIO number
#define KEY_0_IO_FUNC                           FUNC_GPIO0                  ///< ESP8266 GPIO name
#define KEY_1_IO_MUX                            PERIPHS_IO_MUX_MTMS_U       ///< ESP8266 GPIO function
#define KEY_1_IO_NUM                            14                          ///< ESP8266 GPIO number
#define KEY_1_IO_FUNC                           FUNC_GPIO14                 ///< ESP8266 GPIO name
LOCAL key_typedef_t * singleKey[GPIO_KEY_NUM];                              ///< Defines a single key member array pointer
LOCAL keys_typedef_t keys;                                                  ///< Defines the overall key module structure pointer    



LOCAL void ICACHE_FLASH_ATTR key1ShortPress(void)
{
    GIZWITS_LOG("#### KEY1 short press ,Production Mode\n");
    
    gizwitsSetMode(WIFI_PRODUCTION_TEST);
}

/**
* Key1 key presses a long press
* @param none
* @return none
*/
LOCAL void ICACHE_FLASH_ATTR key1LongPress(void)
{
    GIZWITS_LOG("#### key1 long press, default setup\n");
    
    gizwitsSetMode(WIFI_RESET_MODE);
}

/**
* Key2 key to short press processing
* @param none
* @return none
*/
LOCAL void ICACHE_FLASH_ATTR key2ShortPress(void)
{
    GIZWITS_LOG("#### key2 short press, soft ap mode \n");

    gizwitsSetMode(WIFI_SOFTAP_MODE);
}

extern void ICACHE_FLASH_ATTR
airkiss_start_discover(void);


extern void ICACHE_FLASH_ATTR 
smartconfig_done(sc_status status, void *pdata);

//LOCAL 
void ICACHE_FLASH_ATTR key2LongPress(void)
{
    GIZWITS_LOG("#### key2 long press, airlink mode\n");
    
    gizwitsSetMode(WIFI_AIRLINK_MODE);
}

/**
* Key to initialize
* @param none
* @return none
*/
void ICACHE_FLASH_ATTR keyInit(void)
{
    singleKey[0] = keyInitOne(KEY_0_IO_NUM, KEY_0_IO_MUX, KEY_0_IO_FUNC,
                                key1LongPress, key1ShortPress);
    singleKey[1] = keyInitOne(KEY_1_IO_NUM, KEY_1_IO_MUX, KEY_1_IO_FUNC,
                                key2LongPress, key2ShortPress);
    keys.singleKey = singleKey;
    keyParaInit(&keys);
}

void ICACHE_FLASH_ATTR usr_airkiss_start(void)
{
       os_printf("user airkiss start\r\n");
       smartconfig_set_type(SC_TYPE_ESPTOUCH_AIRKISS); 
       wifi_set_opmode(STATION_MODE);    
       smartconfig_start(smartconfig_done);
}

