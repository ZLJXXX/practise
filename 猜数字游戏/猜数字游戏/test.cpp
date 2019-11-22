#define _CRT_SECURE_NO_WARNINGS
////完成猜数字游戏
////while(1)----> 猜对；break;
////目标数字： 写死，随机数srand(unsigned int seed)--->rand % M --->产生0~M - 1的数
////若随机种子不变 ，则产生的随机数不变；用时间做随机种子，则随机数不同，srand((unsigned int) time(NULL)) 
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
void guess()
{	//产生0~99的随机数
	int aim = rand() % 100;
	//你输入的数
	int input = 0;
	while (1)
	{
		printf("请输入你猜的数字\n");
		scanf("%d", &input);
		if (input == aim)
		{
			printf("恭喜你猜对了\n");
			break;
		}
		if (input > aim)
		{
			printf("猜大了\n");
		}
		else if (input < aim)
		{
			printf("猜小了");
		}
	}
}
int main()
{
	//加入菜单
	int num = 0;
	do
	{
		printf("***********************************\n");
		printf("***********猜数字游戏**************\n");
		printf("************1.play*****************\n");
		printf("************0.exit*****************\n");
		printf("***********************************\n");
		scanf("%d",&num);
		switch (num)
		{
			case 1:
				printf("游戏开始\n");
				srand((unsigned int)time(NULL));
				guess();
			case 0: 
				printf("退出游戏\n");
				break;
			default :
				printf("输入选项有误，请重新输入");
				break;

		}
	} while (num);
	system("pause");//暂停黑窗口
	return 0;
}