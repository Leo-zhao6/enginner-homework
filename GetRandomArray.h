#include<ctime>
#include<cstdlib>
#include<assert.h>



void GetRandomArray(int i_randomarray[])
{
	srand((int)time(0));//ʱ�����ӣ���֤ÿ�ε��Գ������鲻��ͬ
	for (int i = 0; i < 10; i++)//��������и�ֵ
	{
		i_randomarray[i] = rand() % 100 + 1;
		assert(i >= 0 && i < 10);//���ж��ԣ�׼ȷ�ҳ�bug
	}

}

