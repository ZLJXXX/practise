#define _CRT_SECURE_NO_WARNINGS
//题目的意思是从N开始，最少需要累加几步可以变成指定的数字M，每次累加的值为当前值的一个约数。 
//【解题思路】： 将1 - M个石板看做一个结果数组stepNum，每个stepNum[i]储存着从起点到这一步最小的步数，其中0为不能到达。
//从 起点开始对stepNum进行遍历，先求i的所有约数（即从stepNum[i]能走的步数），然后更新那几个能到达的位置的 最 小步数。
//如果不能到达则更新为此时位置的最小步数 + 1，如果是能到达的就更新为min（已记录的最小步数，此处的 最小步数 + 1）），
//遍历一遍后得到结果
#include<iostream>
using namespace std;
//求这个数的最大公约数
int divisor(int n, int m)
{
	int maxdivisor = 0;
	int nextmaxdivisor = 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			nextmaxdivisor = maxdivisor;
			maxdivisor = i;
		}
	}
	if (m % maxdivisor == 0)
	{
		return maxdivisor;
	}
	else
		return nextmaxdivisor;
}
//判断素数
bool isprime(int m)
{
	for (int i = 2; i < m; i++)
	{
		if (m % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n, m;

	while (cin >> n >> m)
	{
		if (isprime(m) || isprime(n))
		{

			cout << "-1" << endl;
			break;
		}
		int count = 0;

		while (n < m)
		{
			n = n + divisor(n, m);
			count++;
		}
		cout << count << endl;
	}
	return 0;
}