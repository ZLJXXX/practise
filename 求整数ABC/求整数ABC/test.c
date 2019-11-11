#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	// if(-30<=a<=30&&-30<=b<=30&&-30<=c<=30&&-30<=d<=30)
	//{}

	int A, B, C;
	if ((c - a) / 2 == (d + b) / 2)
	{
		B = (c - a) / 2;
		A = (a + c) / 2;
		C = (d - b) / 2;
		printf("%d %d %d", A, B, C);
	}
	else
	{
		printf("No");
	}
	system("pause");
	return 0;
}
