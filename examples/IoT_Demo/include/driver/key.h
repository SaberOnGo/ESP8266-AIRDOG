�}�"  �������\�0��u
��ET��H�[e�v�.�2,�(Zѩ-� �ZPav��y���}�?�)����3���fcZ�Y�vJ�����6WL�	f�V��k𨴕��Tyq�c5��a����r�yu#��;X��AK����єdO�.蟮�r�{!\���X����ԛpz[�P��u]��*�[nջn�0�9���<<��[&��1)��zܟ��2�P�pxk�� �и%�A�J��֪�n� ӝ=w�k�[�����O!#O��#�,Up�V��D��0����xX�YV����4a�ꕩ��Y��j ~h)�FP�"7�&�3�:�\Ux�G��T��8�0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD-���9pڌ;��{m�]�!i���R��ۅ<-�`�4�vO߅o�"E�i�)e����Vwu�BR%ޟ�Y;7h��j p䜕�,�R��}�%����wv��7�����]��M?"� R�0�h6e �Oۥ6��QW�)�+y#��&���鞹�K��#x��ET�WƳa9(���`�����r�(Vŭ����3��3����Ȍ��9`�AȐ[���KU.���YMsJ5��X�+����p=��!;
S��b��v�`B8�8�zl��p0wy2ڕ��꯸Xe�-钶�R��W��w�=o�y��]��p9�2s���cKƐ\SÅ�p��^u�x�5rN�����to���_s��+&M�$���Ǎ#��y�6��狍�~;�������E��0��V��Υ�g �cF���u�ag�:a�Ï͋��匌��؁_�#�k��&�z©Z��J]�Yk=�<�E^	�l�L;ƫ{���G~}��7l�+�A![�����UAz�ms�L�n��x���06�����+pb �;I��غC���)🇙n؃T[0�!�j�E�WG�w��I���Y(^ɚў/�B���]��޿܂�*)��Ea@����U�~�|�>��i�%���/aLERx2'��k	��y���o�a�s�|�S���g$�-1��'(�j]I�t瀌���F�.����M,��K ���ܷ�J�7al��G���O��=O�noX�`T_˺�ɠ�6
6�������k@Q�_����ߩ���9��y���yzn�S�f�9Jo�,}V����0����\vy�i<�aG�tI$��/�����ᓫ��	_���.���zC��Q+��v�gucY�y7et�ې��O���t��37��y�����M���ˢ��4�����@@�J�~�e@����f��)���RŒ<f���2�:gK3u��z�C�d���E�����iGd}��z�E��G(�g_press;
};

struct keys_param {
    uint8 key_num;
    struct single_key_param **single_key;
};

struct single_key_param *key_init_single(uint8 gpio_id, uint32 gpio_name, uint8 gpio_func, key_function long_press, key_function short_press);
void key_init(struct keys_param *key);

#endif
