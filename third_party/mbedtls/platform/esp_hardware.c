�}"  ���y��]e�)��u
��FT��H�[e�v���2,�(Zѩ-� �Zpav��y���}�?�����3��q|c��Y�~JEP���7��4tQts���F^���3�P�`TIz�w,�H�nR��Y��2��w[���7��F+mH��"|���-/ߡz�h��G߰��C�%<{�u���{�^���n�@�*�fk5���P�Tf��3ջ&�-CmVR=�$儔�ˁ@�<TK��K{�>��(�@� ?�L5Q���������~qp�1�R�1��}Qb{L�\sQ�/\��j�BJ�r ؉��pS�x���EɈ5�M�F���&�ӗ�vv^�OV����O��Ѥ�Hd�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD-���9pڌ;��{m�]�!i���R��ۅ<-�`�4�vO�廽d��۪�s<�Hh��P?4V�1����r2+3��9Soh^=�B���~s�J�%��)�/G��hO6&� DJoH�ͤ��i2i�T��[q�r�Q�j���W�w+C��,d�N�8��n��`�a9(������z�|��2'ˡq����2��%��������Xo�8��\����V],��m6P+`?ݴ\�.����w0��,<4�����dF%�\�a��}U o!چ����7l�@ᅧ�[��B��r� bb�� �V��)�8���*��OUɓ�}�b�[r�d�kj:x*�����oh���Wx��%OJ�J��k��̗Wh��y��*��󊑶c:m��̽���I��;��Y�릢�o�b5�|�p�bi�\h�Ï͋��#猌��؁_�#�k��&�z©Z��J]�Yk=�<�E^y�l�L;ƫ{���G~}��7l�.�	jYNz|:�H����G�n�K��ݵ���xS�b��\�I`ٸ��93n.�Ho��x�E��&���[������#��k�n6���B�$U9 p���=G�A����̓B�G��ь�,Ԅ�G׫NK�֞s9m֌�^����u�>�8��ɛt�6&��3@��|E�2^�oт�F�=a����&�g���~�]�^�~62�n�a:�!�g��[N��
nP���*�w�������˵k��q���8!I�O�}rlB]+�P����0M��sV� �,�m���#V�� �|����V��m��s+�E#��У���QX��=[�S�.P�V[>/\)I����A�),�����9Ӎ�O-�UE"�}{S�\Y�iA�B��S}����*KW�v�DK6*���L�YL�=ÎM����z�W�߯m�m�%I��$��RC�MYR$mË+q��J)q��DzF�!vPC�1��O"|�ߦ���Ǟ�����P���M�0J��'�U�!by mbed TLS!
 *                  See \c MBEDTLS_ENTROPY_HARDWARE_ALT in config.h.
 *
 * \note            This must accept NULL as its first argument.
 */
int mbedtls_hardware_poll( void *data,
                           unsigned char *output, size_t len, size_t *olen )
{
	os_get_random(output, len);
	*olen = len;
	return 0;
}
#endif

