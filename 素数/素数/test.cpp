#define _CRT_SECURE_NO_WARNINGS
//100~200de����
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//����ֻ������1��������
		//�ж�i�Ƿ�Ϊ���� 
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
//�Գ�����i = a * b, ��a,b��С�ڵ���sqrt(i)��i/2 