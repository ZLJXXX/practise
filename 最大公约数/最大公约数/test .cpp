#define _CRT_SECURE_NO_WARNINGS
//求两个数的最大公约数
//辗转相除法：取两个数中最大的数做除数，较小的数做被除数，用最大的数除较小数，如果余数为0，
//则较小数为这两个数的最大公约数，//如果余数不为0，用较小数除上一步计算出的余数，直到余数为0，
//则这两个数的最大公约数为上一步的余数
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入两个数：\n");
	scanf("%d %d", &a, &b);
	if (a<b)
	{
		c = a;
		a = b;
		b = c;
	}
	if (a % b == 0)
	{
		printf("最大公约数为：%d \n", b);
	}
	else
	{
		while (a % b != 0)
		{
			c = a % b;
			a = b;
			b = c;
		}
		printf("最大公约数为：%d \n", c);

	}

	system("pause");
	return 0;
}