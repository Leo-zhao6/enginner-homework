#include<ctime>
#include<cstdlib>
#include<assert.h>



void GetRandomArray(int i_randomarray[])
{
	srand((int)time(0));//时间种子，保证每次调试出的数组不相同
	for (int i = 0; i < 10; i++)//对数组进行赋值
	{
		i_randomarray[i] = rand() % 100 + 1;
		assert(i >= 0 && i < 10);//进行断言，准确找出bug
	}

}

