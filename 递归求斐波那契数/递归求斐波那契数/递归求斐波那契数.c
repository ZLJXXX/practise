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
		return fib(b - 1) + fib(b - 2);//��n�� == ��n-1�� + ��n-2��!!!!!
	}
}
int main()
{
	int a = 0;
	printf("��Ҫ��ڼ���쳲��������������룺");
	printf("\n");
	scanf("%d", &a);
	int d = fib(a);
	printf("��%d��쳲�������Ϊ%d\n", a, d);
	system("pause");
	return 0;
}