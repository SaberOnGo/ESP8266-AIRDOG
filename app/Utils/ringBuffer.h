�}�"   ��ԛ�*�]���u
��@T��h�[}�F�b�!�q!/e�Z{��e�nUP�n�
�ֶG���#�u���20��9gع��b(�a0�߄r�	ϸ
�7j�/,�ufR�i�2jȾ�+��a҆A��饖.�{;K:��ګ��쥇�PgA�`6�|��(��I��Z��x�L2��H$A��)O����Œ�>��"��Q���j��F�=���G�)<C&=jq��z�q�>@y��}57����bEet�B�
:ϒ�����j �Ɛ�$��%��}����mK(���&4r�H�"�!�Ґ<�)a��(P��7�,>���||O�+��WF[��䑰0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�ead;
    uint8_t  *rbTail;
    uint8_t  *rbBuff;
}rb_t;

int8_t rbCreate(rb_t* rb);
int8_t rbDelete(rb_t* rb);
int32_t rbCapacity(rb_t *rb);
int32_t rbCanRead(rb_t *rb);
int32_t rbCanWrite(rb_t *rb);
int32_t rbRead(rb_t *rb, void *data, size_t count);
int32_t rbWrite(rb_t *rb, const void *data, size_t count);

#endif
