�}�"  �����~Aiח�u
��ET��H�[e�v�.�2,�(Zѩ-� �ZPav��y���}�?�)����3���fcZ�Y�vJ�����6WL�	f�V��k𨴕��Tyq�c5��a����r�yu#��;X��AK����єdO�.蟮�r�{!\���X����ԛpz[�P��u]��*�[nջn�0�9���<<��[&��1)��zܟ��2�P�pxk�� �и%�A�J��֪�n� ӝ=w�k�[�����O!#O��#�,Up�V��D��0����xX�YV����4a�ꕩ��Y��j ~h)�FP�"7�&�3�:�\Ux�G��T��8�0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD-���9pڌ;��{m�]�!i���R��ۅ<-�`�4�vO߅o�"E�i�)e����Vwu�BR%ޟ�Y;7h��j p䜕�,�R��}�%����wv��7�����]��M?"� R�0�h6e �Oۥ6��QW�)�+y#��&���鞹�K��#x��ET�WƳa9(���`�����r�(Vŭ����3��3����Ȍ��9`�AȐ[���KU.���YMsJ5��X�+����p=��!;
S��b��v�`B8�8�zl��p0wy2ڕ��꯸Xe�-钶�R��W��w�=o�y��]��p9�2s���cKƐ\SÅ�p��^u�x�5rN�����to���_s��+&M�$���Ǎ#��y�6��狍�~;�������E��0��V��Υ�g �cF���u�ag�:a�Ï͋��C䌌��؁_�#�k��&�z©Z��J]�Yk=�<�E^Y�l�L;ƫ{���G~}��7l+z�O&œ���;k%9��p�i^�
QS
_�Ɖs[�
�8��*o��5�-%��U�E��9�A^��9�+�����_�����\+�A�V������� L�*�aw@t�vdz�=٩����B�r�dqda-ֺ��һ���f��������^��kep����I�B��
�K��d�wѨ�So�Yp<3�T��J9U>���cv��e�@R����,�M����3�`�;��u�>Z����]u�=�(`V�\8��4|��x����Zm�
�)�rJ�.CWv�zG��AQ	�8�!�.#@.�k����-�@oߌ	�=��5���6����\��8�øH$CO�H�e[�Z,�:�L�3a����x��][�"J�F� �-D��Y��W��§����9��������F����"�O(��'�Y	��Z�C�B�\f�b
*]8���W	��k��;��s�U�� X�v �����9��������u���
��!>��Ԯ��"lD�)��xl�JӍ����LrDY�����(�M�/t�BX� ,�P_�A#%��iK�I׬��]]�~3#��-Қً�q�����6v�9�F��Vq��(��.z��t�jQ.�X(S��(�v����6a�z�giSl���m���H��f���YQ֚�A�a����Ƣ�e�ڏ>S<��nq*��s1�g�'��B�h���g଴����"!O��,�Ղw��T�B�����ca@l�ܴ���jN�_\Ä�����؂'�zQ�_�����SI%U�#G)Ȍ��D�.5�6:��`ת����5��c�kf��?���ǥ9m3��;�"oh4gs��[S�̱��@�3 �uD<'�B��P���<3}s�ϛP֐I����<sv`b4X����Y�9F8�R=c��@�%��t�"������|6c0h����H��]�� ��ޟ1��f�4fS�넖�!7l	���#3��)���%/|��S�Oַ'xm�X�grole);
int esp_now_get_peer_role(u8 *mac_addr);

int esp_now_set_peer_channel(u8 *mac_addr, u8 channel);
int esp_now_get_peer_channel(u8 *mac_addr);

int esp_now_set_peer_key(u8 *mac_addr, u8 *key, u8 key_len);
int esp_now_get_peer_key(u8 *mac_addr, u8 *key, u8 *key_len);

u8 *esp_now_fetch_peer(bool restart);

int esp_now_is_peer_exist(u8 *mac_addr);

int esp_now_get_cnt_info(u8 *all_cnt, u8 *encrypt_cnt);

int esp_now_set_kok(u8 *key, u8 len);

#endif
