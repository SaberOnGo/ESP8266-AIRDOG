#ifndef __USER_DEF_H_
#define __USER_DEF_H_

#include "ets_sys.h"
#include "os_type.h"
#include "osapi.h"
#include "mem.h"
#include "user_interface.h"
#include "user_config.h"


#define FLASH_SAVE ICACHE_FLASH_ATTR
#define RO_DATA_IN_FLASH  ICACHE_RODATA_ATTR


typedef enum
{
   SYS_OK     = 0,
   SYS_ERR   = 1,
   SYS_NULL = 0xFF,
}E_RESULT;

typedef enum
{
   E_TRUE = 1,
   E_FALSE = 0,
}E_BOOL;

typedef enum
{
   OS_OK = 0,
   OS_ERROR = 1,
}OS_RESULT;



#endif

