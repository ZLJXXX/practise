#define _CRT_SECURE_NO_WARNINGS
//�����������α�����ֵ��������ֵ�����ݽ��н���
#include<stdio.h>
//int main()
//{
//	int a = 30;
//	int b = 20;
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("%d \n",a);
//	printf("%d \n",b); 
//	return 0;
//}
int main()
{
	int a = 30;
	int b = 20;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d \n", a);
	printf("b = %d \n", b);
	return 0;
}