�}-"  ��^澄��r��u
��Tt�haZy�v�����s�}�𪔰��s%��1N<g̰��T'첪'A�.�vr�B�ɦ��sQ3�A�L�rw��ץ,� 
�F�O�WD xlu��'�4���?�t�^.z���F��J��]d�OU.��(�e]��'�B��OxLOs���N�E����aw5�f}�5�3b�!C��b��a����g������¥Qsȱ�4X�Z�3۞�y�x�K���N�o]Г��2nrf�`�9N�� ����]��	��$0\+�Al$�c�X����|��ݟv�����
�~ǥ���j�ī�䑰0d�p�'����ϴ��,�+�jXGN��F	�c)�D�m�y���F���o�>������&�D+R�-A�o/l>0���Ms��m(���[p�v��:�q�w����~օi�k�����-�:�U��e�6��BU0*�6Dr75(r\���=-�l�*��ltH��%����7<��g����Z�����RY��[x��lș������q���/�@��ɩ�E��gg��:�P�,;&�*T�Qe�8<KM���آ0�R_���ơ�F�鍬>ݘ� ��)*��z��3B����iܕ��|�m=�w��l�j�]�!����]6؛�ws<�˄�ݽ�U�<�f!l(�L*洦!<v����W�nuC_�:+����u��O�`�:t���,K��R�ű���0�PFk����8#~���|nr&O��K�k���O |M)@o�"%S�R}�z���w�h�|=]�f� �}�;,�~{s��@M�T�%+������ipyɹ`�`9���8wr������Ҩ�ւ��o�ޜ�Ρ��8%���ΉHoYDbLOaj����O��xih[�V�(RU���΀A?�+T�����Yd-e^��ES�`�T?|ֲ�� �)hc���ʂ��hȇ4y�R�]cdY���` ������l�,�[y0�܋)d���.����6�ƽ�z�V�N���ַ$�6g��XSRQ�>�ŦH��q��@�fO���c�OC]f,�.��Z����^�2ڕ\��I��w&W<S�逪���8t���Ұ{�I�����I�ce��i^Yv�YC,REy����)�Դ�L[-���&�����ҕ�ӂ���"����{R��ӢM!�K4�����PJAԘv� hᡄ^lZ���i���^)�θ�dX%�G[2� ������P-(���dZ����*�r2��knVC���*`�f�N�r2j���: ��_�·۱d��U�J�Ij�iz9���c�[	���@���������]0�C_�(fiX#o�� ��A�Q8�v{4�����.3~�X�D���<*�2jD�͓�1�i�Z�^��%͸���j�<�Wqƀ�揼F[�8{A��Q�c7_�6X��<,wټD��c��c��+����j5q�&�\����J֏�Bv�T��H�7ITY OF SUCH DAMAGE.
*/

#ifndef USER_QUEUE_H_
#define USER_QUEUE_H_
#include "os_type.h"
#include "ringbuf.h"
typedef struct {
	uint8_t *buf;
	RINGBUF rb;
} QUEUE;

void ICACHE_FLASH_ATTR QUEUE_Init(QUEUE *queue, int bufferSize);
int32_t ICACHE_FLASH_ATTR QUEUE_Puts(QUEUE *queue, uint8_t* buffer, uint16_t len);
int32_t ICACHE_FLASH_ATTR QUEUE_Gets(QUEUE *queue, uint8_t* buffer, uint16_t* len, uint16_t maxLen);
BOOL ICACHE_FLASH_ATTR QUEUE_IsEmpty(QUEUE *queue);
#endif /* USER_QUEUE_H_ */
