#include<assert.h>


void SortArray(int i_sortarray[])//����һ������
{
	for (int x = 1; x < 10; x++)//����ð�����򣻴��������±�Ϊ0����ֵ��ʼ
	{
		for (int y = 0; y < 10 - x; y++)//ÿ�ֽ�����Ϻ󣬲��Ƚ����һ����ֵ
		{
			if (i_sortarray[y] > i_sortarray[y + 1])//������֮�����ֵ���бȽϣ��������С�򽻻�˳��
			{
				int z;
				z = i_sortarray[y];
				i_sortarray[y] = i_sortarray[y + 1];
				i_sortarray[y + 1] = z;
			}
			assert(y >= 0 && y < 10);//���ж��ԣ�׼ȷ�ҳ�bug
		}
		assert(x >= 0 && x < 10);//���ж��ԣ�׼ȷ�ҳ�bug
	}
}
