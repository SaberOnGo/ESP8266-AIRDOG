�}�"  ���'PH=���Ǘ�u
��T��h�[}�F��b��7.]�����fN��0�:C[��~J ����f��<�9����h�k�ұվM�>e)��~���f�U���ԓ�����I�a���4�Q�K=����!���#U��(VLJ:(�'�:{:��&��l����%[�%lި�RN�$F�%7}�թ��W�����������מw��~ CgA���i=��9���B��3rg=�◂���嚑o���O�,|��;���8�W<Ōn���"�8���n�}��h'�����%�L]��$`�͹�c�X����|��ݟv�����
�~ǥ���j�ī�䑰0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD,�~j~�aT�.��4��6{<��s*.�H��&Y;c���DW2֪�ɱ�O�������Wbp湺".�g�%0Rd��<K��N����1�����}f�RZ'�&�p>`��x t![l�UH���fi����s�C!�N�$�ŃN��*$��v�����3��e�+m6?���"��^*x���器O@���N�� �c��ܬXh�m$}(�b�dä)�q����,�����R'v5
�3ӂ�.{#M�chB9�^!���`d�2�!�G�ܿ����츫��(�׻��qw�%��Y��I���KK�E�q?@���yQ�����%�k���)���?E���,����޴���%�nߧ�������weA4T���q~��%��w/�yZ�B�>tk�t^�C���� v�7Ѩ����0h_���uc��&���K�A	�T�Wg�	%;�ٞ����V<5�����,:��Ï]��G9梻�N�������$E������
void sntp_setserver(u8_t idx, ip_addr_t *addr);
ip_addr_t sntp_getserver(u8_t idx);

#if SNTP_SERVER_DNS
void sntp_setservername(u8_t idx, char *server);
char *sntp_getservername(u8_t idx);
#endif /* SNTP_SERVER_DNS */

#if SNTP_GET_SERVERS_FROM_DHCP
void sntp_servermode_dhcp(int set_servers_from_dhcp);
#else /* SNTP_GET_SERVERS_FROM_DHCP */
#define sntp_servermode_dhcp(x)
#endif /* SNTP_GET_SERVERS_FROM_DHCP */

#ifdef __cplusplus
}
#endif

#endif /* LWIP_SNTP_H */
