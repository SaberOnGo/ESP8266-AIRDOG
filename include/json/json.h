�}`"  ����>=�Rp�T��u
��TL�rM�[e�n�#/k<A�lQv����j=(la��F_U�s��СSIG��^O�=�S�. 
ĿH�;Yˡ]^h�D�<Ә�a�y4�F$�C'�Q��M$�Z��GI̫t=w�3I�=%�{>�-�ֲ9��#}=A�X�g�+������\k?O��f+O&��^�P�ֻ{��*~5o�]��/��T�x�c[Rȧ��u�a8����jhz$��5�)��ē�ʃ���M���b��kړD����8G�x�ۍ�����h�< ??��B
$0\+�Al$�c�X����|��ݟv�����
�~ǥ���j�ī�䑰0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�l*|=4�Pח:k?v���m������q�^H(Y|�
�S��9jP�V��K����.���Y�VL<g����L����{�z����9^qxj�nEI'UoԳr�cょ[��	 u��֚�L�'�9�<R�ꪙCu-�b�|aq�T����[
��adK�{kfo��T�[i ��7w�	e+��<�fr��4or���1�J�~�3|%	;��G}f(��4VƷ�'��Sߴ*�:�kA�K�����LPf^9^Ӌy/��������Z.(49�$}n���SW{(��BL ��Q��m����
�e�~��t�1q�����)����k�[��'u �H�����N=�?��i�N��H%�3m:*��?=	���� 4~�sh!B�}�h�t�e�f�V ��-]�e�k�L�f��Y=l�k��H)�K�{��f]tO�W�,����/eҢ2�Ε����E���+|����-�5	�U�w�`��mš�W�]�
�lD+�K�=��r)4��>�����Tg�%8 t�r��g�n^]����W2�k-�O�v\r�#�ɶ��k�]�6�mw��O�3ƹ�����q�v��My*2@}ȅO�c��-:=��ǉ�7,.z�,���i��������FieH]�/8t�=��U_��4�8`q��#��3��_��	>�p�X���=�����7Ľ��B�D��%�����$0j�v�\RQ�؅&���OI���	n�a?3	Ö��NО^	�^��/�[J��� 	����-.�[n��!�V,K`��a�3No�h�l��6��i���D���8�X�f��r�k�@.�K���@�j� azN�4\�un�H���@@���%h�/��d��id�'hk*���/���~��2�����	6�����p>DOV�F\���֮�F�Yx�\?�oƉ�Cp=�E����$�j�^x.�V$����\�h���F��r��	� /�P{-��؀dlD.	"A8q[mq�<����š2�<P�wC�������ؔ�Aʢ� �d�n]�A�0vݧ����${�"0>V?�����o� =����VfM�2�~n��XF�BV�ت~��}��>p��C�����'���+�L��IP\r ���](M|D�������p�gI�� �,kٺYu��6Bz�������A]���f
�_0m�i�n+^������m�m�O�(73��>0)�f�!�(�\t^;՟~��ݒ ?���RV����)���:ȴ%/�*_jW���w�Y�]�� PA\���>���ﱸHM��*�>���w�>��W�y�P��,z2�3[��A\Sk�7���HG؟R��u����.��pg�=��!�X�{S�-N���1S��-�?�ɒ,KX�V�<�/Ӆf��O�+g�P�uM��-��@/�#ů ٍ�@IE��}
�4p5��2�Ɔ��&��^���k��5هN��D@�^Oq��O,?��9D=n ��YI�s�aS�<"/E_INT 'I'
#define JSON_TYPE_NUMBER '0'
#define JSON_TYPE_ERROR 0

/* how should we handle null vs false - both can be 0? */
#define JSON_TYPE_NULL 'n'
#define JSON_TYPE_TRUE 't'
#define JSON_TYPE_FALSE 'f'

#define JSON_TYPE_CALLBACK 'C'

enum {
    JSON_ERROR_OK,
    JSON_ERROR_SYNTAX,
    JSON_ERROR_UNEXPECTED_ARRAY,
    JSON_ERROR_UNEXPECTED_END_OF_ARRAY,
    JSON_ERROR_UNEXPECTED_OBJECT,
    JSON_ERROR_UNEXPECTED_STRING
};

#define JSON_CONTENT_TYPE "application/json"

#endif /* __JSON_H__ */
