�}�"   �6���[�M��u
��T�Մm�+}�n4d:(�Ӵ��צ��t^�u���@C @݅�uY?]�~s�z��5�Q0��J�|�Ri�hEr��<�9��@Kp��9Y�R�t�l!�D���0ל2����^@b=�=��h<�ص��/�W��:�_�ș���퇀ݡ�r�H=�@Q�'�~�RO�J�"1�5�e��U�k��޲;���'��i1"���{m�3�Aqbی,}*NRIl��&�O�w�����;�-K�"���%䧓ٓ\�K���!�Ԩ
�B
$0\+�Al$�c�X����|��ݟv�����
�~ǥ���j�ī�䑰0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lue: 40

(4) SPI_MODE
    Possible value: QIO/QOUT/DIO/DOUT
    Default value: QIO

(4) SPI_SIZE_MAP
    Possible value: 0/2/3/4/5/6
    Default value: 0

For example:
    make COMPILE=gcc BOOT=new APP=1 SPI_SPEED=40 SPI_MODE=QIO SPI_SIZE_MAP=0

2��You can also use gen_misc to make and generate specific bin you needed.
    Linux: ./gen_misc.sh
    Windows: gen_misc.bat
    Follow the tips and steps.