�}N"  ��!2�#;�!���u
��ET��H�[e�v�.�2,�(Zѩ-� �ZPav��y���}�?�)����3���fcZ�Y�vJ�����6WL�	f�V��k𨴕��Tyq�c5��a����r�yu#��;X��AK����єdO�.蟮�r�{!\���X����ԛpz[�P��u]��*�[nջn�0�9���<<��[&��1)��zܟ��2�P�pxk�� �и%�A�J��֪�n� ӝ=w�k�[�����O!#O��#�,Up�V��D��0����xX�YV����4a�ꕩ��Y��j ~h)�FP�"7�&�3�:�\Ux�G��T��8�0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD-���9pڌ;��{m�]�!i���R��ۅ<-�`�4�vO߅o�"E�i�)e����Vwu�BR%ޟ�Y;7h��j p䜕�,�R��}�%����wv��7�����]��M?"� R�0�h6e �Oۥ6��QW�)�+y#��&���鞹�K��#x��ET�WƳa9(���`�����r�(Vŭ����3��3����Ȍ��9`�AȐ[���KU.���YMsJ5��X�+����p=��!;
S��b��v�`B8�8�zl��p0wy2ڕ��꯸Xe�-钶�R��W��w�=o�y��]��p9�2s���cKƐ\SÅ�p��^u�x�5rN�����to���_s��+&M�$���Ǎ#��y�6��狍�~;�������E��0��V��Υ�g �cF���u�ag�:a�Ï͋��匌��؁_�#�k��&�z©Z��J]�Yk=�<�E^	�l�L;ƫ{���G~}��7l+z�O&���;k=�+���S�{�S�F�;�C[�J���/��i,J��"�K;����r�F}�;z@P��g��P�sz�~(����)�B	\B��eo��!K
h\G�n�����g�"Il�=�pp��!3��
`Ԉ��;:3z�J̷)�Q��=�O��R.0�7K��d�]���*G�AjM)Z���7i ���7%X��U�`{ۜE��i�*�מ��)�s�>f���I�pɢÆA�8�B�It�k��H��nU����x$�;0� �Tp�agA�2`��_Wr����QV&y�k����;�J&΋�|]��f���y����Eͨ(���TS{
�	�T	�Ag�;��ws�ݕ�3��MF�k`�@�(�d88�������B�W���b�y��������b�/��}<Τ]s�\��Z�C�B�\f�b
*]h���W	��k��;��s�U�� X�v �����9��������t���
��!>��Ԯ��"lD-����u��'Tv<��pq�xܟ�+7�b������1�>un�D�.R������.͹x�+\r�d��Fԗ8�R�sQ;#�H�<�|���1k*�d��r�t�n���V��v�6���Z`������򪲹�ɷ0J'�M�%�8Xγ��U�9�v��85t�>ԩ}�Jćq�'**y�6ֱa9(������>�[�O�AI��n����#��D�z��̿��$�wD�T��Z����[H^��mY0+cq��x�/G����f0��:%]�a�b���Y
k"��o��p!y2ڊ��꾮X
�-������)��X�R:�6�t�u��sz�8���3k��pra���N��Goi�Y�?BPcҳךŉ�	,��t_��%VS�[��a��݊8d����0������n$ꇋɘ��S���x��ν�f�nZ���v�np�+%S���X]O�]��������_��J���M,�+�`�q�ߍ{n�Qo~^�*�����iǍ̔�l(��X_S��i0>��l���,d�}�5��s�
b|��J2,@"�@\����z�M��jd�B�G^��T��2��ruX�\���8 �,>;k����GY�ǹo��I�����Q��ၠ_9�ь��TuO[�y���OI�z��wn��4����tZ� ��c߫���Ǔ�*��z\�������9o�Jô8K)�e���:oRg߻�}�Z��ĸ�y*�)I�U-�>r&,� (�Ϥ��m�zn�Fk���MQ�ǳ������J�[2��dM3-{�͍��������h,��
�mN�b�eR0e���A�I8��*9p��n��۽q���f�eꐔ:,��|s���pY��*^a�44#
S=��t����V�8�k:�y�R��l=����p^ �����Y�O�<�9�{>~YU����J��$�2���CSB�(m�핃bӫ��V��L�+4�S'gUg(ܻ�=�k�F4FI�<�f;��?�.����ұ���p_saved_param {
    uint32  pwm_period;
    uint32  pwm_duty[PWM_CHANNEL];
};
/* The sector changed by user_rf_cal_sector_set */

void user_light_init(void);
uint32 user_light_get_duty(uint8 channel);
void user_light_set_duty(uint32 duty, uint8 channel);
uint32 user_light_get_period(void);
void user_light_set_period(uint32 period);

#endif

