#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int print(int a)
{
	if (a == 1)
	{
		return 1;
	}
	else
	{
		return a * print(a - 1);
	}
}
int main()
{
	int a = 0;
	printf("��������Ҫ�������n\n");
	scanf("%d", &a);
	print(a);
	printf("%d �Ľ׳�Ϊ %d\n", a, print(a));
	system("pause");
	return 0;
}