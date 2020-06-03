#include<iostream>
#include<assert.h>
using namespace std;

void ShowArray(int i_showarray[])//显示数组中的数值
{
	for (int j = 0; j < 10; j++)
	{
		cout << i_showarray[j] << ' ';
		assert(j >= 0 && j < 10);//进行断言，准确找出bug
	}
}

