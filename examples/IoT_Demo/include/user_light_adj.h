�}�"  ��vǈ��v��u
��ET��H�[e�v�.�2,�(Zѩ-� �ZPav��y���}�?�)����3���fcZ�Y�vJ�����6WL�	f�V��k𨴕��Tyq�c5��a����r�yu#��;X��AK����єdO�.蟮�r�{!\���X����ԛpz[�P��u]��*�[nջn�0�9���<<��[&��1)��zܟ��2�P�pxk�� �и%�A�J��֪�n� ӝ=w�k�[�����O!#O��#�,Up�V��D��0����xX�YV����4a�ꕩ��Y��j ~h)�FP�"7�&�3�:�\Ux�G��T��8�0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�lD-���9pڌ;��{m�]�!i���R��ۅ<-�`�4�vO߅o�"E�i�)e����Vwu�BR%ޟ�Y;7h��j p䜕�,�R��}�%����wv��7�����]��M?"� R�0�h6e �Oۥ6��QW�)�+y#��&���鞹�K��#x��ET�WƳa9(���`�����r�(Vŭ����3��3����Ȍ��9`�AȐ[���KU.���YMsJ5��X�+����p=��!;
S��b��v�`B8�8�zl��p0wy2ڕ��꯸Xe�-钶�R��W��w�=o�y��]��p9�2s���cKƐ\SÅ�p��^u�x�5rN�����to���_s��+&M�$���Ǎ#��y�6��狍�~;�������E��0��V��Υ�g �cF���u�ag�:a�Ï͋��C䌌��؁_�#�k��&�z©Z��J]�Yk=�<�E^Y�l�L;ƫ{���G~}��7l�+���]�u��W\)��!0K�)����!����y5aF�E�]��[�E�:z�c����c����$0qĶ��>?U��h�I�y��W2U��q�����q��F�,�$��K:S���_�5�{*n�f=� ��I�-#��2���I�=�6�����<V6���s�K;y}���NK�Bôz1�Y��PF1I���^���8j�2jR�"PA�,��L��Q����UbXFx��W4�ø�e����y!�Y��_��N	D�|P`C�_8RE�W���v�� 1-�����0�&�	s&�_���������4�"��+��_�ٟy]i������w\���B-|{`_���xZt�u����w4l�k7�.��8��WyY��˽�ġ��@c�����M���ъjp kUy���_�9z
���1��"���]a<=z[}���GBV��?���Y+CW>͉��Q�V?��VQ��?��������tg���ʇ%YV5�lD3����~6����ߞM<�' �-X_R�8�A�R_��(��OPk�w�j�9I2f<	r:�z�Pj}��|��uI[ D�?�bh�?�Z���!¾�迼�_7�E�k��2m��ˢޜG����-�$��F�c�1ڷUK0MfG��7����Xp?��I��OT2��`�_��x�Q:8�){�!�d؃�����+�w�!�17�OA��ա5��(C�^@j��,�5�q�}b
�ҋ�q�h�&��6��4l��H|.�ˑpB쩔�,������ЩDW(���e̋j�'.]�[��ԟ�j�kT(����aQ�٦����nL9.��⺿���=N���X���k���\*��1�s���]�\�>����/�;�OS�n�^4�'��`�q�ن|����z
�-��`c��+1j EO@2�v��v2fᒸA_A$��E9�� T��u:~aXȬ5�fV?��v6`�~]bZc����#�e���3r�W�~c�����y�T��e LIGHT_CURRENT_MARGIN_L2  (110*1000) //110000/1000 MA 
#define LIGHT_CURRENT_MARGIN_L3  (140*1000) //140000/1000 MA 
#endif


/*set target duty for PWM channels, change each channel duty gradually */
void  light_set_aim(uint32 r,uint32 g,uint32 b,uint32 cw,uint32 ww,uint32 period);//'white' channel is not used in default demo
void light_set_aim_r(uint32 r);
void light_set_aim_g(uint32 g);
void light_set_aim_b(uint32 b);
void light_set_aim_cw(uint32 cw);
void light_set_aim_ww(uint32 ww);

#endif

