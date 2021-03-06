
#include "gizwits_uart.h"
#include "driver/uart.h"
#include "gizwits_product.h"
#include "driver/gizwits_key.h"
#include "smartconfig.h"

#define CMD_HEADER_VAL     0xFF    // 消息头的固定值


#if   1
#define GIZ_PRINT   os_printf
#else
#define GIZ_PRINT(...)
#endif


// 计算校验和
static uint8_t FLASH_SAVE GIZ_GetSum(uint8_t * data,  int16_t len)
{
            uint8_t sum = 0;
            int16_t i;

            for(i = 0; i < len; i++)
            {
                  sum += data[i];
            }
            return sum;
}

// 判断报文是否是机智云串口协议命令
static E_RESULT FLASH_SAVE GIZ_IsCmdCorrect(uint8_t * data, int16_t len, uint8_t *outCmd)
{
        uint16_t cmd_len = 0;
        
        if(data[0] == CMD_HEADER_VAL && data[1] == CMD_HEADER_VAL)
        {
                cmd_len = ((uint16_t)data[2] << 8) | data[3];
                if(cmd_len <=  len)
                {
                        if(GIZ_GetSum(&data[4], cmd_len - 1) == data[4 + cmd_len - 1])
                        {
                                 *outCmd = data[4];
                                 GIZ_PRINT("cmd parse ok: 0x%x\r\n",  data[4]);
                                 return SYS_OK;
                        }
                        else
                        {
                                GIZ_PRINT("cmd sum err: new = 0x%x, old = 0x%x\r\n",  
                                                              GIZ_GetSum(&data[4], cmd_len - 1),  data[4 + cmd_len - 1]);    
                        }
                }
                else
                {
                        GIZ_PRINT("data len err,  cmd_len = %d, buf_len = %d\r\n",
                                                    cmd_len,  len);
                }
        }
        return SYS_ERR;
}

//  to find start of cmd head
static E_RESULT FLASH_SAVE GIZ_FindCmdBuf(uint8_t * data,  int16_t len,  int16_t * index)
{
           int16_t i;
           
           if(len < 2)return SYS_ERR;
           
           for(i = 0; i < (len - 1); i++)
           {
                   if(data[i] == CMD_HEADER_VAL)
                   {
                           if(data[i + 1] == CMD_HEADER_VAL)
                           {
                                  GIZ_PRINT("find cmd head success\r\n");
                                  if(index)*index= i;
                                  return SYS_OK;
                           }
                   }
           }
           return SYS_ERR;
}

static E_RESULT  FLASH_SAVE CMDFN_ParseNothing(void * msg)
{
        return SYS_OK;
}

static E_RESULT  FLASH_SAVE CMDFN_ParseSetWiFi(void * msg)
{
        uint8_t * cmd_buf = (uint8_t *)msg;
        uint8_t * buf = &cmd_buf[5];
        uint8_t mode = buf[0];
        
        GIZ_PRINT("set wifi mode %d \r\n", mode);

        if(mode == WIFI_AIRKISS_MODE)
        {
                smartconfig_stop();
                usr_airkiss_start();
         }
         else
         {
               gizwitsSetMode(mode);
         }

        return SYS_OK;
}

extern dataPoint_t currentDataPoint;
// MCU 上传数据 to wifi
static E_RESULT  FLASH_SAVE CMDFN_ParseInfoReport(void * msg)
{
        uint8_t * cmd_buf = (uint8_t *) msg;
        uint8_t * buf = &cmd_buf[5];
        
         uint8_t info_type;
         uint32_t info = 0;


          // buf[0]:  数据类型 ,  buf[1] - buf[4] 数据
         info_type = buf[0];

         info    = (uint32_t)buf[1] << 24;
         info |= (uint32_t)buf[2] << 16;
         info |= (uint32_t)buf[3] << 8;
         info |= (uint32_t)buf[4];
         GIZ_PRINT("parse info report: info type = %d, info = %ld\r\n",
                                       info_type,  info);
         switch(info_type)
         {
                  case E_INFO_Relay_Ctrl:
                  {
                           currentDataPoint.valueRelay_Ctrl = (bool)info;
                  }break;
                  case E_INFO_LED0_Ctrl:
                  {
                          currentDataPoint.valueLED0_Ctrl = (bool)info;
                  }break;
                  case E_INFO_CO2:
                  {
                         currentDataPoint.valueCO2 = info;
                  }break;
                  case E_INFO_temp:
                  {
                        currentDataPoint.valuetemp = (float)info;
                  }break;
                  case E_INFO_hcho_ppb:
                  {
                        currentDataPoint.valuehcho_ppb = info;
                  }break;
                  case E_INFO_humi:
                  {
                         currentDataPoint.valuehumi = (float)info;
                  }break;
                  case E_INFO_tvoc_ppb:
                  {
                        currentDataPoint.valuetvoc_ppb = info;
                  }break;
                  case E_INFO_pm10_ug:
                  {
                       currentDataPoint.valuepm10_ug = info;
                  }break;
                  case E_INFO_pm2p5_ug:
                  {
                       currentDataPoint.valuepm2p5_ug = info;
                  }break;
         }
}

// 命令映射表
static T_CMD_MAP MCU2WiFi_CMD[] = 
{
      {CMD_M2W_SetWiFi,             CMDFN_ParseSetWiFi,  },
      {CMD_M2W_InfoReport,       CMDFN_ParseInfoReport, },
    
      { CMD_M2W_Reserved,         CMDFN_ParseNothing,  },
};

#define  M2W_CMD_SIZE  (sizeof(MCU2WiFi_CMD) / sizeof(MCU2WiFi_CMD[0]))


static uint8_t  uart_buf[128];

void FLASH_SAVE GIZ_RxBuf(uint8_t * data,  int16_t len)
{
       int16_t index = 0;
       
       if(GIZ_FindCmdBuf(data, len, &index) == SYS_OK)
       {
               uint8_t cmdCode = 0;
               uint8_t cmdIdx = 0;
               
               if(GIZ_IsCmdCorrect(&data[index], len - index, &cmdCode) == SYS_OK)
               {
                       for(cmdIdx = 0; cmdIdx < M2W_CMD_SIZE; cmdIdx++)
                       {
                              if(cmdCode == MCU2WiFi_CMD[cmdIdx].cmd)
                              {
                                       GIZ_PRINT("exe cmd 0x%x \r\n",  cmdCode);
                                       MCU2WiFi_CMD[cmdIdx].ParseCmdFunc(&data[index]);
                                       break;
                              }
                       }
               }
               else
               {
                        GIZ_PRINT("cmd  error: idx = %d, len = %d, cmdCode = 0x%x, %s %d\r\n", 
                                                     index,  len,   cmdCode, __FILE__, __LINE__);
               }
       }
       else
       {
              GIZ_PRINT("not find cmd head\r\n");
       }
}


#define userTaskQLen    200                         
static os_event_t userTaskQ[userTaskQLen];        


static void FLASH_SAVE  userTask(os_event_t * events)
{
         if(events->sig == SIG_USR_UART_RX)
        {
                 uint16 fifo_len = (READ_PERI_REG(UART_STATUS(UART0))>>UART_RXFIFO_CNT_S)&UART_RXFIFO_CNT;
                 uint8 d_tmp = 0;
                 uint16 idx=0;
                 for(idx = 0; idx < fifo_len; idx++) 
                 {
                        d_tmp = READ_PERI_REG(UART_FIFO(UART0)) & 0xFF;//接收串口数据
                        uart_buf[idx] = d_tmp;
                 }
                 WRITE_PERI_REG(UART_INT_CLR(UART0), UART_RXFIFO_FULL_INT_CLR|UART_RXFIFO_TOUT_INT_CLR);
                 uart_rx_intr_enable(UART0);

                 #if 1
                 do
                {
                        GIZ_PRINT("rx uart data: \r\n");
                        for(idx = 0; idx < fifo_len; idx++)
                        {
                                 GIZ_PRINT("0x%x\t", uart_buf[idx]);
                        }
                        GIZ_PRINT("\r\n uart data end\r\n");
                 }while(0);
                 #endif
                 GIZ_RxBuf(uart_buf, fifo_len);
        }
}



void gizwits_usr_init(void)
{
        gizwitsInit();  
        system_os_task(userTask, USER_TASK_PRIO_0,  userTaskQ,  userTaskQLen);  // create a task
}


