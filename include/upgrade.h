�}"  ���`�Qs빼��u
��ET��H�[e�v�.�2,�(Zѩ-� �ZPav��y���}�?�)����3���fcZ�Y�vJ�����6WL�	f�V��k𨴕��Tyq�c5��a����r�yu#��;X��AK����єdO�.蟮�r�{!\���X����ԛpz[�P��u]��*�[nջn�0�9���<<��[&��1)��zܟ��2�P�pxk�� �и%�A�J��֪�n� ӝ=w�k�[�����O!#O��#�,Up�V��D��0����xX�YV����4a�ꕩ��Y��j ~h)�FP�"7�&�3�:�\Ux�G��T��8�0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD-���9pڌ;��{m�]�!i���R��ۅ<-�`�4�vO߅o�"E�i�)e����Vwu�BR%ޟ�Y;7h��j p䜕�,�R��}�%����wv��7�����]��M?"� R�0�h6e �Oۥ6��QW�)�+y#��&���鞹�K��#x��ET�WƳa9(���`�����r�(Vŭ����3��3����Ȍ��9`�AȐ[���KU.���YMsJ5��X�+����p=��!;
S��b��v�`B8�8�zl��p0wy2ڕ��꯸Xe�-钶�R��W��w�=o�y��]��p9�2s���cKƐ\SÅ�p��^u�x�5rN�����to���_s��+&M�$���Ǎ#��y�6��狍�~;�������E��0��V��Υ�g �cF���u�ag�:a�Ï͋��C䌌��؁_�#�k��&�z©Z��J]�Yk=�<�E^Y�l�L;ƫ{���G~}��7lD+�S���E-�e<Յ���!(+ ��@��q���S6�tPvC�����xrk�J�m|.A�	�x�/%{��0�\emI��O����e�5Tlg�[W5,�pG  �p�6�����t��BQW�J -/Ā��C���Ϻ�q;"����}�xL��0��hgV]#]�,��3��H��?M��K���&���cu��R�ώ�+�#��\�������Cu�r�\HF�̆7���f"y�a�d�D#�Q
#����S��^a�*�k~�V�4,��p�Bp���"j�u+T��&�Z04a���R-�h���UǸi���H�.��}�r���r��V&�Y���K�b�i0�ALB�1D�i��f�B;���3}�͚P����d�FAx���xk��_?���&���Ϯ2�����x#@F$�J\�꒨�9��o4b)�u�,�AK %����2���WtV3�R��-���H 耢�������6�C~^�퐳�H��a9H�El,���>0�ق.��q� >|�R�s!!��"���.�Ѣ��R��n��c�0����Sx@l��K��v�߶�fz������gԥ3�U�AT������/�3�>�L_�(��=I�cQ����u������\'�l�xfl�u#�Ws��";�z��UE�p">�q#�-����I1�W�PO�[@��p�NƧ�!��GtF.�xK��,;��}��9���#4��/9A��~o̻��W����ղs�����S�~���ԍ%�aP� 4�Đ1j���] ���;�a��z����*�*Сx2"Ӡf;��H�	��agmWΙl�&����&]����軐ݱ0�&3/��	d����t(,�?O�p2�>QsQ�3��e]h�Bn�����H]��b1�b����#� ����~�ҀSY�V	;S�Q]�+D�����H"~�u�āKx���2�T���i�����?0�������]_ѿP%���6��Ufine UPGRADE_FLAG_FINISH     0x02

void system_upgrade_init();
void system_upgrade_deinit();
bool system_upgrade(uint8 *data, uint16 len);

#ifdef UPGRADE_SSL_ENABLE
bool system_upgrade_start_ssl(struct upgrade_server_info *server);	// not supported now
#else
bool system_upgrade_start(struct upgrade_server_info *server);
#endif
#endif
