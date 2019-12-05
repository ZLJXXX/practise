#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
bool prisenum(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int num = 100;
	for (int i = 2; i < 100; i++)
	{
		if (prisenum(i) && i % 10 == 1)
		{
			cout << i << " ";
	}
	}
	cout << endl;
	system("pause");
	return 0;
}