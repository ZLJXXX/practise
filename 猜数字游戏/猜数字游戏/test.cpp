#define _CRT_SECURE_NO_WARNINGS
////��ɲ�������Ϸ
////while(1)----> �¶ԣ�break;
////Ŀ�����֣� д���������srand(unsigned int seed)--->rand % M --->����0~M - 1����
////��������Ӳ��� �����������������䣻��ʱ����������ӣ����������ͬ��srand((unsigned int) time(NULL)) 
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
void guess()
{	//����0~99�������
	int aim = rand() % 100;
	//���������
	int input = 0;
	while (1)
	{
		printf("��������µ�����\n");
		scanf("%d", &input);
		if (input == aim)
		{
			printf("��ϲ��¶���\n");
			break;
		}
		if (input > aim)
		{
			printf("�´���\n");
		}
		else if (input < aim)
		{
			printf("��С��");
		}
	}
}
int main()
{
	//����˵�
	int num = 0;
	do
	{
		printf("***********************************\n");
		printf("***********��������Ϸ**************\n");
		printf("************1.play*****************\n");
		printf("************0.exit*****************\n");
		printf("***********************************\n");
		scanf("%d",&num);
		switch (num)
		{
			case 1:
				printf("��Ϸ��ʼ\n");
				srand((unsigned int)time(NULL));
				guess();
			case 0: 
				printf("�˳���Ϸ\n");
				break;
			default :
				printf("����ѡ����������������");
				break;

		}
	} while (num);
	system("pause");//��ͣ�ڴ���
	return 0;
}