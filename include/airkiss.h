�}"  ����pW鸭���u
��TtʄI�[y�V���Jhz<6r��"ˤF�%�J�gW~�E�*^��_��br�w��{J��b�:NR$�J�t�/�O�Iq�Aq��k��[ߜ&�2��IH�9F%��q�/�aM�B��>'Y��0��b�K��B�
�17Z6�ʌ\��	�oSur��W����{�����W0�?�#�8���?����='�o��K��[�F���#�Y���	���M�����<Q�xQQ	����+@�g��Az��h�< ??��B
$0\+�Al$�c�X����|��ݟv�����
�~ǥ���j�ī�䑰0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�l'��a�:!��w+E]��G��������Td���E��EnǜD���`./T6>s�X�U��i�TV�����>��t�.c������n-��E;a_����ܨ�0Y�H�-��� �:�m�4脴�\�hRT�=I4����ݟN �&�؎�;���r���t�	����dƂ4EIr�!'ۭ��p�M��
ѧ�Fj���<h"�{*�BY�p�s����I��[q���0R�����w��{#}Tn:`߫ף��0�Xț���G���X^_
PL�FCU���0 !c�Z	�V
>���%��5��W7q�u�ˈ��^�/u����ԑ���R6`9��,�e���YJGר�5
���8b������E�x�����b�j��jM�]����^N˥V��wt_�I�1;Y�tf�Y�T�ɡQ������9�5�vv1�?�s�Z�Ct�%	H?�J�jJ0(���GD1\;\�@+�cs<�$WM�=��Ĵ���G�v�ClD+�c�C�s1�N��ī�y�%=��6O��b7��-�5?9ʊn�I8�:!����@�{Z��8R�\ۙ���J��������H��n�Q�����������ѷ2��[0ue,��u��^�?���d�%E�����.�,d�8x�cV<������y�
�%<=]����3��;}��
2�g�0�m��s䶽v��|��j�|����Ϟ���M��'
�ć9���.ecQ���hi�QV���!�`��>y#�U�*0��`S��Z�h4ɉ��dh�v,O���#"q��f�-Az��k��*��{�넹;b�2��V���s��H.�M���U�r�b=�Ay�e�
���L:���-u�ߎK��
��y�9r,i ���#>��[��������1�����_Lz?�`S���RUΪBR�g>g`����ʳ�;T7m呣�<�P�q�Q��V�ƍ�c����;���n����H:�`�5)�^� ��1l+z�O.�o��;���t��Ag<0�In,kFп� �ψz�M��	7�C�)�~�G���r`7I�ƙz�n?-��2�H���Ca�ḩ��:D�C����g)�5��×�}�'�ֵ<y����ޏ�����m&�ՏJ��������)�$�HQ^1��K��d�o��� HS�Xta���0#e���4c<��U�bw����n�1��?���4���H�z��Ƅh�^�G�F+�N��]��`����0>�,6��=�hpKH�?4��}u7��ƍ<BG'�k��[؟;�R:ۍ@�=�f�Է<����IΣ?���P[y �J�V�Ci�<� �95g�̩�i���J�B�%�9Y[�������B��֗���H�5�襶��Q٠�у�(�FO.��'�A���*���&���τ�)���X��ԛ��ź�!AG,���
l�g�Qx�B��n0`�n��s��J���כ�t&|jB p��hx� ��$lD+�S���s1�5����EA���5gS4;b6c�_i�-��u?�g��oa؎Ul��3ᳪz��<�������:lq��z���(��o=�S���T�J-H�M�>��,-�067}�7�#l}~�>�֕��	�h�>��7����`��H �6���t������3��O��7M�r�{�5��Y���UE��s�Վ�n�~��J�ދ����M3��(Ws����k~��DUe�q�0�:HD�VV9���8�u��!p�o�8;��,��p�!��!.�37T���zKP��G�RdU�-�_��Uݸ=L�h6�j��4�v�'ۼO�)�)�#j���'�b]�;GR �Q\h�:H�*��"�:d��V���n��1��U6�U_.���q/��W#�V��A����4����^az.�	����B6EuV(�(��#���$~l�I�M�W�vӰ5����N�\70�r��٤�2<�g���9a��;j�#���D�"��^�5E�Vgth : the size of data buffer.
  * @param     const airkiss_config_t* config : input struct airkiss_config_t
  *
  * @return    >=0 : succeed (reference airkiss_lan_ret_t)
  * @return    <0  : error code (reference airkiss_lan_ret_t)
  */

int airkiss_lan_pack(airkiss_lan_cmdid_t ak_lan_cmdid, void* appid, void* deviceid, void* _datain, unsigned short inlength, void* _dataout, unsigned short* outlength, const airkiss_config_t* config);

#ifdef __cplusplus
}
#endif

#endif /* AIRKISS_H_ */
