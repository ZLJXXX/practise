#include<stdio.h>
int main()
{
	int n = 6;
	int i, a, b;
	//ǰ4��.�ϰ벿��
	for (i = 1; i <= n; i++)//��������
	{
		for (a = n - 1; a >= i; a--)//��ӡ�ո�
		{
			printf(" ");
		}
		for (b = 1; b <= 2 * i - 1; b++)//��ӡ*
		{
			printf("*");
		}
		printf("\n");
	}
	//��3��,�°벿��
	for (i = n - 1; i >= 1; i--)
	{
		for (a = i; a <= n - 1; a++)
		{
			printf(" ");
		}
		for (b = 1; b <= 2 * i - 1; b++)
		{
			printf("*");
		}
		printf("\n");
	}
}