�}D"  ����3������u
��TlՄM�[y�v4df��3��ͷ������3P�����.A�)�pM�F9�X��ܼk?)����XQd�S,�=�Ce�(v�=֑�=cr���38rgm<��p���R�bvTƼ�ҏ�;�1K\��o���7��N/��%��<����� ew[IO�� "��p���!��|�M���
ޣg}��]M�EN"�so��G�Ŋ�����0�7���II���Rn���cl�0���X�ġp���X�"ʏ	�歇�����h�< ??��B
$0\+�Al$�c�X����|��ݟv�����
�~ǥ���j�ī�䑰0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�l�)v���lx?��z�D�����5��ڒۆ�x���Lf-Ixh:QQ�|�>6n�:��H
�S(Hop	�6�5aO��?X�HU�r'z�#���ذ�D��Ϧ���c� ��R�+��(�|e"	���Z�,��)���3���.��2鸺�3[��s�����2���t�L7��l?y=:��"11Hx���I�7۽y��yK`�q�)|ߠ�P�v���5љ�uo�9�y��]��K��������R����9g����:�Ul�+K1����<�����ʠ���/Fe�0�-�Bu�+�ˢ@�Zg�,�i-/7�j~;
F�~�&��9T�*M�gN��,�tՊns��G5��
�4�M��z�%~��L1���&��1����}��b%!-�/�#�?�xV�uJ�nj]&��q�`vq_,��E8 Eӏs�b2��pǱil%��e�]���.��C�_�1� V4A��7[Q�����h�)������d�T�|
A��2)�74Mtv�˘�!G,홣l�#-��-\���d�Ǳ_D*M�B�8����~M�Z�/ 5C�H�nܦ�+#h�eN�:TUH/�ثa:���p���L��!�Wu�⮱�ܤr8W��_����G�E�~����@���3� ��N��0ƽ�k�%���ȅ�⋒2;���d
D�7�r�E��ck�Ɔ4�cԾZ�:\g1���48+�[(��+�t])
LhF�}0Cwo=�e��7C���U���dx��?��8s�f��x�-�@�J�r(�E<֏��6�=>�.�
��e�%��.��I��0)��5z�4_�D����:�"�'̄�w�f��w(B�u>\d	��*�1u�G�C�?}�-��1}���3u��ҁ}��Bs��@�Ϋ-~�������O�ߟ�brBfGF_��FωjtGo�U�M9(���i3A*f���c:��X1D4�F�P=�H��FX�CX�6[VB>�1�	�&�"Ƀk��s2��A(��O�{V�)���a��v�Za�b�sЏtotal_bytes;
	uint32 total_time;
	sint8  ping_err;
};

bool ping_start(struct ping_option *ping_opt);
bool ping_regist_recv(struct ping_option *ping_opt, ping_recv_function ping_recv);
bool ping_regist_sent(struct ping_option *ping_opt, ping_sent_function ping_sent);

#endif /* __PING_H__ */
