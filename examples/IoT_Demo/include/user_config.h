�}]"  ۑ��%����Y��u
��ET��H�[e�v�.�2,�(Zѩ-� �ZPav��y���}�?�)����3���fcZ�Y�vJ�����6WL�	f�V��k𨴕��Tyq�c5��a����r�yu#��;X��AK����єdO�.蟮�r�{!\���X����ԛpz[�P��u]��*�[nջn�0�9���<<��[&��1)��zܟ��2�P�pxk�� �и%�A�J��֪�n� ӝ=w�k�[�����O!#O��#�,Up�V��D��0����xX�YV����4a�ꕩ��Y��j ~h)�FP�"7�&�3�:�\Ux�G��T��8�0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD-���9pڌ;��{m�]�!i���R��ۅ<-�`�4�vO߅o�"E�i�)e����Vwu�BR%ޟ�Y;7h��j p䜕�,�R��}�%����wv��7�����]��M?"� R�0�h6e �Oۥ6��QW�)�+y#��&���鞹�K��#x��ET�WƳa9(���`�����r�(Vŭ����3��3����Ȍ��9`�AȐ[���KU.���YMsJ5��X�+����p=��!;
S��b��v�`B8�8�zl��p0wy2ڕ��꯸Xe�-钶�R��W��w�=o�y��]��p9�2s���cKƐ\SÅ�p��^u�x�5rN�����to���_s��+&M�$���Ǎ#��y�6��狍�~;�������E��0��V��Υ�g �cF���u�ag�:a�Ï͋��匌��؁_�#�k��&�z©Z��J]�Yk=�<�E^	�l�L;ƫ{���G~}��7l�*���#i�2R�5��h�̭^�Z�t��~[�Ph�����s8�����L�/h��NQ?2�C���!�9�?��A��u4����l�RA��������35���{��ӯ~*Ez���0N+G�T���gs8j��	��m64�<�,�X�ZAD�"?�4bPŉB�za�p3�'��B�k3cNmV�-z�M�/qN�[?���̆�m?9�H����oˈ{�CD�ڵ��$*vV3���D;=�>�pg�Mz�5ߍ�\��Q�<�@�$�=��l�@�b���aW����G|BzaS6��Y��.�P�|�+���.��Q�P�N�s^��Im���U�V/'@�˴An�|ش�_ ��W��EK﹝-n��`\�p�7�!V3ԬcY?�'�19$.����œ��7v>v�^vo�c����?m0��+Mƛ�1#|������I��D�|��֩5�n���_��=���1���徭^q�N�
�l�&5��&�;��ۗ�3�^˙�c����G�x�_N���W+A��,��Gc���R�˶���߾�,j^�ڊ��Q��*�:������j�Ҋw����L]���2���+�ֹfhW��JEJ��0X�$��[�?n�>�f�P���\�3��*Wz��q�y�$B���ٽ5U|����&���Ѷ>B,��1�����.e�o��(���i�3�%�K���&f��=a�F����7�F�}OK�NhJ�ƖY.qC�L5����Ua���qjwq���m���4�>��a�Y2���+��"p�L��ɠ�����~���q�J-�a���'xǺ7
��dR����X�Ma����S*��\k�%7p�k��,lx<FU������N<�񵇱����-�wg��r���3��0���u;Y���K�O��G���q%գ����`d�Q��g�3v��{,�����[G�j~o�(%=�꿾C>7jT�����C�z2����<�f?if

#if LIGHT_DEVICE
#define USE_US_TIMER
#endif

#if PLUG_DEVICE || LIGHT_DEVICE
#define BEACON_TIMEOUT  150000000
#define BEACON_TIME     50000
#endif

#define AP_CACHE           1

#if AP_CACHE
#define AP_CACHE_NUMBER    5
#endif

#elif LEWEI_PLATFORM
#endif

#endif

