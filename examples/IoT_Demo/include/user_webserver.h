�})"  ��M�s\��0���u
��ET��H�[e�v�.�2,�(Zѩ-� �ZPav��y���}�?�)����3���fcZ�Y�vJ�����6WL�	f�V��k𨴕��Tyq�c5��a����r�yu#��;X��AK����єdO�.蟮�r�{!\���X����ԛpz[�P��u]��*�[nջn�0�9���<<��[&��1)��zܟ��2�P�pxk�� �и%�A�J��֪�n� ӝ=w�k�[�����O!#O��#�,Up�V��D��0����xX�YV����4a�ꕩ��Y��j ~h)�FP�"7�&�3�:�\Ux�G��T��8�0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD-���9pڌ;��{m�]�!i���R��ۅ<-�`�4�vO߅o�"E�i�)e����Vwu�BR%ޟ�Y;7h��j p䜕�,�R��}�%����wv��7�����]��M?"� R�0�h6e �Oۥ6��QW�)�+y#��&���鞹�K��#x��ET�WƳa9(���`�����r�(Vŭ����3��3����Ȍ��9`�AȐ[���KU.���YMsJ5��X�+����p=��!;
S��b��v�`B8�8�zl��p0wy2ڕ��꯸Xe�-钶�R��W��w�=o�y��]��p9�2s���cKƐ\SÅ�p��^u�x�5rN�����to���_s��+&M�$���Ǎ#��y�6��狍�~;�������E��0��V��Υ�g �cF���u�ag�:a�Ï͋��匌��؁_�#�k��&�z©Z��J]�Yk=�<�E^	�l�L;ƫ{���G~}��7l+z�O>����;j=�+����8�%Q+������ޠ�B�����7&��r:�!�6߆تoܟJ���S���=e-,��@��K�B[�Y���ĕy^�
>�zI���&�Nt�s/�|���5H��9
�/��X ���i�=!wN��77bp0a�����YdMHB��M�aSk�H��d�G���r>u�iO<j�W��*cN���yf��h�$&����f�*�����!�m�$
���i�L!�����1V��FzS�]��K�JID����l(�:8�4�D`�QG\^�S!ճ/>��+ƊBz�A��Q��:�u:��j�=k��3������� վ*���Sy�	�HK�Ko���w٘֔��)l|��d�af���Y����H��ၾ��b�.��������^�P���4�v-��Y�\��Z�C�B�\f�b
*]h���W	��k��;��s�U�� X�v �����9��������t���
��!>��Ԯ��" SWITCH_STATUS = 0,
    INFOMATION,
    WIFI,
    SCAN,
	REBOOT,
    DEEP_SLEEP,
    LIGHT_STATUS,
    CONNECT_STATUS,
    USER_BIN
} ParmType;

typedef struct URL_Frame {
    enum ProtocolType Type;
    char pSelect[URLSize];
    char pCommand[URLSize];
    char pFilename[URLSize];
} URL_Frame;

typedef struct _rst_parm {
    ParmType parmtype;
    struct espconn *pespconn;
} rst_parm;

void user_webserver_init(uint32 port);

#endif
