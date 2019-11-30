#define _CRT_SECURE_NO_WARNINGS//求10个整数中最大值。
#include<stdio.h>
int main()
{
	int num[10] = { 0 };
	int i = 0;
	//输入十个整数 
	printf("请输入十个整数：\n");
	for (i = 0; i<10; i++)
	{
		scanf("%d", &num[i]);
	}
	int max = 0;//变量max用来存放数组中最大的数 
	max = num[0];
	for (i = 1; i<10; i++)
	{
		if (max < num[i])
		{
			max = num[i];
		}

	}
	printf("最大的整数值为：%d\n", max);
	return 0;
}
//数组第一个位置的下标为零 ，循环变量一般从零开始 