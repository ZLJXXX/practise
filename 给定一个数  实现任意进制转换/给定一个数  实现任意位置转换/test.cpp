#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int M, N;
	cin >> M >> N;
	bool flag = false;
	string str, table = "0123456789ABCDEF";
	if (N <  2 && N > 16)
	{
		return false;
	}
	if (M<0)
	{
		M = 0 - M;
		flag = true;
	}
	while (M > 0)
	{
		str += table[M%N];
		M = M / N;
	}
	if (flag)
	{
		str += "-";
		flag = false;
	}
	reverse(str.begin(), str.end());
	cout << str << endl;	system("pause");
	return 0;

}