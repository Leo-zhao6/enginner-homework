/*****************

ѧ�ţ�31903172

��������     ��

*****************/


#include"GetRandomArray.h"
#include"ShowArray.h"
#include"SortArray.h"

int main(int argc, char* argv[])
{
	int i_randomarray[10];//����һ������Ϊ10������
	GetRandomArray(i_randomarray);//�����鸳ֵΪ�������
	SortArray(i_randomarray);//�����������д�С���������
	ShowArray(i_randomarray);//��ʾ������õ���������
}
