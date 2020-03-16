#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int fib(int b)
{
	if (b == 1 || b == 2)
	{
		return 1;
	}
	else if (b > 2)
	{
		return fib(b - 1) + fib(b - 2);//第n个 == 第n-1个 + 第n-2个!!!!!
	}
}
int main()
{
	int a = 0;
	printf("您要求第几个斐波那契数，请输入：");
	printf("\n");
	scanf("%d", &a);
	int d = fib(a);
	printf("第%d个斐波那契数为%d\n", a, d);
	system("pause");
	return 0;
}