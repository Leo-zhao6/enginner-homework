#include<iostream>
#include<assert.h>
using namespace std;

void ShowArray(int i_showarray[])//��ʾ�����е���ֵ
{
	for (int j = 0; j < 10; j++)
	{
		cout << i_showarray[j] << ' ';
		assert(j >= 0 && j < 10);//���ж��ԣ�׼ȷ�ҳ�bug
	}
}

