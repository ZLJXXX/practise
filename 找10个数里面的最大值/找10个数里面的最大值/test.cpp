#define _CRT_SECURE_NO_WARNINGS//��10�����������ֵ��
#include<stdio.h>
int main()
{
	int num[10] = { 0 };
	int i = 0;
	//����ʮ������ 
	printf("������ʮ��������\n");
	for (i = 0; i<10; i++)
	{
		scanf("%d", &num[i]);
	}
	int max = 0;//����max������������������� 
	max = num[0];
	for (i = 1; i<10; i++)
	{
		if (max < num[i])
		{
			max = num[i];
		}

	}
	printf("��������ֵΪ��%d\n", max);
	return 0;
}
//�����һ��λ�õ��±�Ϊ�� ��ѭ������һ����㿪ʼ 