�}"  >��¡W��k,��u
���T�
��[y���&�����'� 
P1)��(�\M���&�h�
q�{zN�=�D�h�~襸zm����&��gb;�8�d�mR�O������eɈ�2qT�hf�*���p���rv�.��K�Pʇ����y+�.��t.��|�t\nV�-�.�B��S��5��޼�d��9�à	_6���<�hoЗ���#lE�%�DG���cb����v�x	8r�,R,�Fտxn�����W�������S�v���%�h�g���h�< ??��B
$0\+�Al$�c�X����|��ݟv�����
�~ǥ���j�ī�䑰0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�l�"��2��/��t� N�H�+њ18,C�2��z�x�q1���񂱎C�b�{\�Н�%ru�ź/(qXBMW����+<�'4��v��g���I����u���TrC���u�G'�����_).V��4v�W%e�Y s>+�qZ��]��X;e�gc��.�;�I�i��mv,�������`�	�w ��Ȧv*g�u���Ь��I�;�Cs����=t!T�S�ϴ���6�),O�����D���K���P>�ۺ�Q�v1��1����cQm��4^&Y�ym�TE����:�DbB�{M��v�`�>v��B�׍�(�ڮWܼ2�J�%�H�o�e��%����p�hZ�J��/w�YY$��l��?�a�Y޾d�ȵ����zw��r)�b'�
�o},�N!h�����q]5[����P�Ө����!UT������6N�qZBS�jI�ّ#f�2b�9"��T2��`�'c���:B꠆@0�a[���;�J !_e�@8pڇ����e��A���[4El$R�&�k�R��<S�L�l݋+k�Y���؇�5�����W�c2C
o�t��w�����cf��M��b�=QM��~���p��(�g}�i���k���{�F��������'�v)6�Tb��HFͮ�WH<�Д@Yd�3Me� ������;�`b؇�#������d:��r-���"�����u��-&�8:׈q��N�q�0���1.��@�E�<,8��$� �����;$�x�ǅGkݠ2Ԫ�@p���v頀�:�=D��d4s�h�Y&��+� �����Zqჯ�ڊ�Ţ1�E�ו��Ɇ��Uh��.�&$�3Ƣ�T��V�"q��m`毸��P�\����&J�O5��Q����!N�[�e2L�kd��x��J�K����s09���9l�y *�.@���gj@.@����~��|+`�30���-ZoB�7sI��̋�:�+�Xn[�� �}�lK߮�z# �DE�0�= c���3�yL�O�����p�Z�=ҏP�P�Ol�2>�Bi�J���Q��ѽ<���
6�&0>�=�2��d�)��%a�I@��ea��L�ܨmZL�zR����\"R��Զ��T�����Eڣ�^��]�2���O���,�<{�ޝ֒��(�룋:*�"��Y�``3yW����f�G4G_AKA�{���n���6�v�7�O����m}0*@#��T<f(R� ����@2���������j�)����\���]����QV��o����m�@��(�wɝQp?b`?Lz��-VL�=�oD��Q�Njٓ�1x��.�]�畟�w�����Nƻ��b�̺F�t��@~�u�5�:���Ĭv *k�ɋ���Bω�$�����0��C�P:�V�����J���
�(�:�x4S��㉏�k5K�țy�X��͙�9�'���!y
y�>l�QƐ�ewp�K�Lh�v$��?�8���R6���>Ӊ�l�c�%$_؝�*3��l�B@U� ��@'��A�`��lD5A�W²	��.��X3��-AS_ɱ�&Z1�qd�A����0Юg6��*6�k�mF�"h�G�	�a�+�q	� �;�P��ڂF�3
�V�����܎d�5��,���3�� 5�%�+�w����"���p7�:���g�y�p�|k��,7pxC�y�#��t��h7��p�7�23��<���m�2 )%���rp�dD!ͷ�%����ؠV[.�r�
���n~�8��S�`��P�*_"}������tl����g���')\�lAȬ��WuPＴ:�[d�JӍ�Y�J����jW�$E�0-G3���U������]��v,��0l�q�M�2�L����.����i�An�8{s��}~���L��f�y �I&_iN�)q�����Q�e+ѣ���6�S�*��WfJ�P+`1i �sdl����Q&����eYEI�d8�����W?�@�kW_( [ ���-]�v��h�
�>����X, KEY_1_IO_FUNC,
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

