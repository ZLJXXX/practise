#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int  i;
	for (i = 100; i > 0; i--)
	{
		if (i % 17 == 0)
		{
			break;
		}
		printf("%d\n", i);
	}
	return 0;
}