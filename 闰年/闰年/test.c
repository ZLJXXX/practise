#define _CRT_SECURE_NO_WARNINGS
//����  
#include<stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//�ܱ�4�����Ҳ���100���� ���ܱ��İ�����  
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;

		}


		/*if(year % 4 ==0)
		{
		if(year % 100 !=0 )
		{
		printf("%d ",year);
		}
		}
		if(year % 400 == 0)
		{
		printf("%d ",year);
		}*/
	}
	printf("\ncount = %d\n ", count);
	return 0;
}