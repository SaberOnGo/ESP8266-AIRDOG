�}5"  ڐ�+�!om8�֗�u
��@T�
l�+y�b#�tŉ���#� !o�`Y)=z��s@G�c�9��1�]�T��̰�bT�����9��w�~!|�����I `���6�(��+X�`Z��і��!-.��<�Ķ�==E��ܥSxݩ �����n���{R��6,XV =A��T[�Tn�D�D7��������-�]��>\�����2��H�؜��3�U��	z���2Ntr�CHi���Ś���g;:X��"�}�Vx{�ó]H��lK�|�@HNܺ�)�_+� D�D���66Av�5�*�:��Z::�ϫͨ��طql���u�k�gQ�䑰0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�l�1�����i&�l�׆o��0��	��T�oݺ�Y&8��6��"�s�/�-}�&�,�����jgV��� �3ďM/zZ��ɪ����2�l��yF��a5NMh����6�����>oOR�]�Z��f�J'�w'f煶��+e�.�L^)T����A���@/#?s�ְ%��q��N(��x�"�ey�"�m�a;�Ҍ`h������L$��f�!��?v�I�eN��1�J>J���¾�cȲ�N����@�Z�CIb���?UG<.t$��݋�
+d0ܒ�+�m�&��=<$gk�X���`�s�}ƪ���m�������aJļ�O���g��jZ�qF���4.��Bx4�t��L1�r�B�_�w��է��:8 ���7ԼBR�?)��b���\.�L]��?ՑN�pK���?�q˲�@��%cvI��6�+�>�U��ɢ�v��Q �+Cr���.�v{UՍ@������7��%��x�>h�YI���cM��R );
}

void mbedtls_version_get_string( char *string )
{
    memcpy( string, MBEDTLS_VERSION_STRING,
            sizeof( MBEDTLS_VERSION_STRING ) );
}

void mbedtls_version_get_string_full( char *string )
{
    memcpy( string, MBEDTLS_VERSION_STRING_FULL,
            sizeof( MBEDTLS_VERSION_STRING_FULL ) );
}

#endif /* MBEDTLS_VERSION_C */
