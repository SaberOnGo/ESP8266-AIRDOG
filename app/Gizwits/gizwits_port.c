
#include "gizwits_port.h"
#include "gizwits_protocol.h"
#include "gizwits_product.h"
#include "gizwits_uart.h"

void giz_send_ctrl_dev(E_INFO_TYPE type, uint32_t info)
{
            uint8_t buf[32];
            uint8_t sum = 0;
            uint8_t len = 0;
            
            os_memset(buf, 0, sizeof(buf));
            buf[len++] = 0xFF;
            buf[len++] = 0xFF;
            buf[len++] = 0;
            buf[len++] = 7;  // 7B, 包括 校验字节
            sum += buf[len++] = (uint8_t)CMD_W2M_CtrlDev;
            sum += buf[len++] = (uint8_t)type;
            sum += buf[len++] = (uint8_t)(info >> 24);
            sum += buf[len++] = (uint8_t)(info >> 16);
            sum += buf[len++] = (uint8_t)(info >> 8);
            sum += buf[len++] = (uint8_t)info;
            buf[len++] = sum;

            uart_send(buf, len);
}

// cloud command mcu to do some process to ctrl periphal
void  ICACHE_FLASH_ATTR 
gizwits_user_event_process( dataPoint_t * dataPointPtr,  uint8_t event)
{
       if(dataPointPtr == NULL)
       {
                GIZWITS_LOG("dataPointPtr is null \r\n");
                return;
       }
       
       switch(event)
       {
                case EVENT_Relay_Ctrl :
                       currentDataPoint.valueRelay_Ctrl = dataPointPtr->valueRelay_Ctrl;
                       GIZWITS_LOG("Evt: EVENT_Relay_Ctrl %d \n", currentDataPoint.valueRelay_Ctrl);
                       /*
                       if(0x01 == currentDataPoint.valueRelay_Ctrl)
                       {
                           //user handle
                              
                       }
                       else
                       {
                           //user handle
                       }
                */
                       giz_send_ctrl_dev(E_INFO_Relay_Ctrl,  (uint32_t)currentDataPoint.valueRelay_Ctrl);
                       break;
              case EVENT_LED0_Ctrl :
                       currentDataPoint.valueLED0_Ctrl = dataPointPtr->valueLED0_Ctrl;
                       GIZWITS_LOG("Evt: EVENT_LED0_Ctrl %d \n", currentDataPoint.valueLED0_Ctrl);
                       /*
                       if(0x01 == currentDataPoint.valueLED0_Ctrl)
                       {
                                // user handle
                       }
                       else
                       {
                              //  user handle
                       }
                       */
                       giz_send_ctrl_dev(E_INFO_LED0_Ctrl, (uint32_t)currentDataPoint.valueLED0_Ctrl);
              break;
       }
}

