#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
bool isprime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if ((num % i) == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int num;
	int i;
	while (cin >> num)
	{
		if (num % 2 == 0)
		{
			int half = num / 2;
			for (i = half; i>0; i--)
			{
				if (isprime(i) && isprime(num - i))
				{
					break;
				}
			}
			cout << i << endl << num - i << endl;
		}
	}
	return 0;
}