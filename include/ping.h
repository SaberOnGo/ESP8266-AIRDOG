�}@"  ���b�q�CtN��u
��ET��H�[e�v�.�2,�(Zѩ-� �ZPav��y���}�?�)����3���fcZ�Y�vJ�����6WL�	f�V��k𨴕��Tyq�c5��a����r�yu#��;X��AK����єdO�.蟮�r�{!\���X����ԛpz[�P��u]��*�[nջn�0�9���<<��[&��1)��zܟ��2�P�pxk�� �и%�A�J��֪�n� ӝ=w�k�[�����O!#O��#�,Up�V��D��0����xX�YV����4a�ꕩ��Y��j ~h)�FP�"7�&�3�:�\Ux�G��T��8�0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD-���9pڌ;��{m�]�!i���R��ۅ<-�`�4�vO߅o�"E�i�)e����Vwu�BR%ޟ�Y;7h��j p䜕�,�R��}�%����wv��7�����]��M?"� R�0�h6e �Oۥ6��QW�)�+y#��&���鞹�K��#x��ET�WƳa9(���`�����r�(Vŭ����3��3����Ȍ��9`�AȐ[���KU.���YMsJ5��X�+����p=��!;
S��b��v�`B8�8�zl��p0wy2ڕ��꯸Xe�-钶�R��W��w�=o�y��]��p9�2s���cKƐ\SÅ�p��^u�x�5rN�����to���_s��+&M�$���Ǎ#��y�6��狍�~;�������E��0��V��Υ�g �cF���u�ag�:a�Ï͋��匌��؁_�#�k��&�z©Z��J]�Yk=�<�E^	�l�L;ƫ{���G~}��7l,�����1�ق����b;�w�B�I��>QL����l���214��n+W9�"¦?/0������eq:���; ���,4K����h\���,������P���4�H��YZ�&�HD/���	��1���{Da��əz��j�&Nxl��4x&�Bd1E�jm@��� �7 ">�qL�-���m�W�KD�rW��@�`��/�D���MG~o�o ��' ����6���aN��]�/:G���t,Է��W������������0����\�V{���i{���O}���;�p��m����!�;ǣ7?1��x��@�	�4zm��m�-G�߿�$���O�S����vͽ;�s\;�ƨR����SM?(�qO�5Rd�h\-�D8ΖH!�uv�б��hd��9X
<�E����e�~����R?.b]Zy�b��x�p��I�w΄r�������+�:ؗ��X��2�$��<�#珻7;�Z�t1��x���'	void* reverse;
};

struct ping_resp{
	uint32 total_count;
	uint32 resp_time;
	uint32 seqno;
	uint32 timeout_count;
	uint32 bytes;
	uint32 total_bytes;
	uint32 total_time;
	sint8  ping_err;
};

bool ping_start(struct ping_option *ping_opt);
bool ping_regist_recv(struct ping_option *ping_opt, ping_recv_function ping_recv);
bool ping_regist_sent(struct ping_option *ping_opt, ping_sent_function ping_sent);

#endif /* __PING_H__ */
