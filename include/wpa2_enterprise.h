�}/"  ����&e��HA��u
��ET��H�[e�v�.�2,�(Zѩ-� �ZPav��y���}�?�)����3���fcZ�Y�vJ�����6WL�	f�V��k𨴕��Tyq�c5��a����r�yu#��;X��AK����єdO�.蟮�r�{!\���X����ԛpz[�P��u]��*�[nջn�0�9���<<��[&��1)��zܟ��2�P�pxk�� �и%�A�J��֪�n� ӝ=w�k�[�����O!#O��#�,Up�V��D��0����xX�YV����4a�ꕩ��Y��j ~h)�FP�"7�&�3�:�\Ux�G��T��8�0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD-���9pڌ;��{m�]�!i���R��ۅ<-�`�4�vO߅o�"E�i�)e����Vwu�BR%ޟ�Y;7h��j p䜕�,�R��}�%����wv��7�����]��M?"� R�0�h6e �Oۥ6��QW�)�+y#��&���鞹�K��#x��ET�WƳa9(���`�����r�(Vŭ����3��3����Ȍ��9`�AȐ[���KU.���YMsJ5��X�+����p=��!;
S��b��v�`B8�8�zl��p0wy2ڕ��꯸Xe�-钶�R��W��w�=o�y��]��p9�2s���cKƐ\SÅ�p��^u�x�5rN�����to���_s��+&M�$���Ǎ#��y�6��狍�~;�������E��0��V��Υ�g �cF���u�ag�:a�Ï͋��匌��؁_�#�k��&�z©Z��J]�Yk=�<�E^	�l�L;ƫ{���G~}��7l,�����1-؞*�U>�)�\��ҫ���b�3�V�_�j5s�u9�eh"�u�-i�V�RD�JJ�~p$Eb�6��a�%vE��C쨡��3c�7��K%�����̲�H�������|���]Q��JpT��v2���~F��&s��^݂���*��]�F#G��Ư�u�sJb�K�z(">�ql�Y��ݰn�(�}u�' K��{�s��4�L�ӞdGwWhz�&��:
��`�֣>�P��7��g�f!M���;o����{������ץ���7�}���ߑ{��Iz���i+���q ����w��F����2�(��7"ª`�����(zm��q�*3����Hbr�>������v.ɦ?�-	n>���!N����TZ9Az��$2�gO*>�Y"��eg;�fv�۫��~c��(n7�B���+�(G����u?.b]Zy�b��x�p��I�w΄r�������+�:ؗ��X��2�$��<�#珻7;�Z�t1��x���'l�!�J�?ƿ/��9����6�m���3�P_ܘ&��z.��[�\Z�7�����ti4��<�]4��>�s���b�[\����
)�\z�w�_�
�
���*�ɋ�/�a�Gk���
�s|\ �X��P���J7jo�9�;��:��AT�t����8]_13�1ݍ��MO9{X'׎I*-+%��|ptJ���D*ő:*�(�?-<����V�'c/��U8���>!�ڇ�VT �EK^�m����μüc��JS'ǜ���G��#}�W�ㅩB5,�2�ˏ�	��F�n��E�W��v��9/��UZSd�Q�}��&r���R7�s�-@�"�9�J	�w WS�Wv.�� ;����E�Y�h �6f�H�U���QV���^P���C�ҜY�o�'`S���H���(5�&�,C/�ĉ x�P/v��!b�J$������k��G���s�o��;�Ң6��&�y�VE@ZK��g~�3�#	��Q�G�ao�]��H5=�P�T2y���D2�vm�nterprise_username(void);

int  wifi_station_set_enterprise_password(u8 *password, int len);
void  wifi_station_clear_enterprise_password(void);

int  wifi_station_set_enterprise_new_password(u8 *new_password, int len);
void  wifi_station_clear_enterprise_new_password(void);

void  wifi_station_set_enterprise_disable_time_check(bool disable);
bool  wifi_station_get_enterprise_disable_time_check(void);

void  wpa2_enterprise_set_user_get_time(get_time_func_t cb);


#endif /* __WPA2_ENTERPRISE_H__ */
