�}�"  =��#	���/;��u
��
T�ʘi�[}�v���Y�����<�p���U"W=��SI{�޺jS��g�Bc����i������hjuG���p�CA��%�ӥΥ�A6�ľBSO�)���O8\����-�ތ͓B��0Vt��3�;���z�Њ�mj��q���B4Nh��,��y��|�����=��y�G-��.�(��_r_�@Fp���Mxj���+��+ړ����S!� Vǩ��b<����682o7�Ճ��]�B壌N�Ȗ��qT.�?��B
$0\+�Al$�c�X����|��ݟv�����
�~ǥ���j�ī�䑰0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-� = EVENT_LED0_Ctrl,
     E_INFO_CO2,
     E_INFO_temp,
     E_INFO_hcho_ppb,
     E_INFO_humi,
     E_INFO_tvoc_ppb,
     E_INFO_pm10_ug,
     E_INFO_pm2p5_ug,
     E_INFO_END,
}E_INFO_TYPE;



#pragma pack (1)
typedef struct
{
   uint8_t cmd;
   E_RESULT (*ParseCmdFunc)(void *pMsg);  // ���������
}T_CMD_MAP;  // ����ӳ�䴦����
#pragma upack (1)

// ���ڷ�������
#define uart_send(buf, len)    uart0_tx_buffer(buf, len)
void gizwits_usr_init(void);



#endif


