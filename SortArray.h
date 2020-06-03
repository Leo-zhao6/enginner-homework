#include<assert.h>


void SortArray(int i_sortarray[])//传入一个数组
{
	for (int x = 1; x < 10; x++)//进行冒泡排序；从数组中下标为0的数值开始
	{
		for (int y = 0; y < 10 - x; y++)//每轮进行完毕后，不比较最后一个数值
		{
			if (i_sortarray[y] > i_sortarray[y + 1])//与在它之后的数值进行比较；如果比它小则交换顺序
			{
				int z;
				z = i_sortarray[y];
				i_sortarray[y] = i_sortarray[y + 1];
				i_sortarray[y + 1] = z;
			}
			assert(y >= 0 && y < 10);//进行断言，准确找出bug
		}
		assert(x >= 0 && x < 10);//进行断言，准确找出bug
	}
}
