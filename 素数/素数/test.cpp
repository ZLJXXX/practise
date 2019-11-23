#define _CRT_SECURE_NO_WARNINGS
//100~200de素数
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//素数只能整除1和他本身
		//判断i是否为素数 
		int j = 0;
		for (j = 2; j<i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j >= i)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
//试除法，i = a * b, 则a,b都小于等于sqrt(i)或i/2 