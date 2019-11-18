#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int my_byte(int n)
{
	int count = 0;
	int maxnum = 0;
	while (n)
	{
		if ((n & 1) == 1)
		{
			count++;
			maxnum = max(maxnum, count);
		}
		else
		{
			count = 0;
		}
		n = n >> 1;
	}
	return maxnum;
}
int main()
{
	int byte;
	while (cin >> byte)
	{
		cout << my_byte(byte) << endl;
	}
	return 0;
}