#define _CRT_SECURE_NO_WARNINGS
//�������������Լ��
//շת�������ȡ������������������������С��������������������������С�����������Ϊ0��
//���С��Ϊ�������������Լ����//���������Ϊ0���ý�С������һ���������������ֱ������Ϊ0��
//���������������Լ��Ϊ��һ��������
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("��������������\n");
	scanf("%d %d", &a, &b);
	if (a<b)
	{
		c = a;
		a = b;
		b = c;
	}
	if (a % b == 0)
	{
		printf("���Լ��Ϊ��%d \n", b);
	}
	else
	{
		while (a % b != 0)
		{
			c = a % b;
			a = b;
			b = c;
		}
		printf("���Լ��Ϊ��%d \n", c);

	}

	system("pause");
	return 0;
}