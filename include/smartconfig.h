�}�"  ����)��C��>��u
��ET��H�[e�v�.�2,�(Zѩ-� �ZPav��y���}�?�)����3���fcZ�Y�vJ�����6WL�	f�V��k𨴕��Tyq�c5��a����r�yu#��;X��AK����єdO�.蟮�r�{!\���X����ԛpz[�P��u]��*�[nջn�0�9���<<��[&��1)��zܟ��2�P�pxk�� �и%�A�J��֪�n� ӝ=w�k�[�����O!#O��#�,Up�V��D��0����xX�YV����4a�ꕩ��Y��j ~h)�FP�"7�&�3�:�\Ux�G��T��8�0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD-���9pڌ;��{m�]�!i���R��ۅ<-�`�4�vO߅o�"E�i�)e����Vwu�BR%ޟ�Y;7h��j p䜕�,�R��}�%����wv��7�����]��M?"� R�0�h6e �Oۥ6��QW�)�+y#��&���鞹�K��#x��ET�WƳa9(���`�����r�(Vŭ����3��3����Ȍ��9`�AȐ[���KU.���YMsJ5��X�+����p=��!;
S��b��v�`B8�8�zl��p0wy2ڕ��꯸Xe�-钶�R��W��w�=o�y��]��p9�2s���cKƐ\SÅ�p��^u�x�5rN�����to���_s��+&M�$���Ǎ#��y�6��狍�~;�������E��0��V��Υ�g �cF���u�ag�:a�Ï͋��匌��؁_�#�k��&�z©Z��J]�Yk=�<�E^	�l�L;ƫ{���G~}��7l�*���#i�2R�5��h�̭^�Z�t��~[�Ph�����s8�����L�/h��NQ?2�C���!�9�?��A��u4����l�RA��������35���{��ӯ~*Ez���0N+G�T���gs8j��	��m64�<�,K$�R.z;`v����>E�za�p3�'���~0hMmv�H�z�[!�El@���g��}������
���PW�ڲ��[L8W���V��"�8	�%܍�F��W�i�0��=��_bc�/�lGa�Ɍ]j��� �,)&}qUI��g-զQ�9��T���g� �G[�j�g�Yiթ
Z��I��Vji�@�B*�I�&�	�\��P(yƀ�D<��U?�	g�= �6K#J4	�<�A4.&����Տ�4`(x�Df�c����?m0��+Mƛ�1#|������I��D�|��֩5�n���_��=���1���徭^q�N�
�} sc_type;

typedef void (*sc_callback_t)(sc_status status, void *pdata);

const char *smartconfig_get_version(void);
bool smartconfig_start(sc_callback_t cb, ...);
bool smartconfig_stop(void);
bool esptouch_set_timeout(uint8 time_s); //15s~255s, offset:45s
bool smartconfig_set_type(sc_type type);

#endif
