/*****************

学号：31903172

姓名：赵     祥

*****************/


#include"GetRandomArray.h"
#include"ShowArray.h"
#include"SortArray.h"

int main(int argc, char* argv[])
{
	int i_randomarray[10];//定义一个长度为10的数组
	GetRandomArray(i_randomarray);//把数组赋值为随机数组
	SortArray(i_randomarray);//对随机数组进行从小到大的排序
	ShowArray(i_randomarray);//显示已排序好的数组数组
}
