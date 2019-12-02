#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str, table = "0123456789ABCDEF";
	int m, n;
	cin >> m >> n;
	bool flag = false;
	//ÅÐ¶ÏÕý¸º
	if (m<0)
	{
		m = 0 - m;
		flag = true;
	}
	while (m)
	{
		str += table[m%n];
		m /= n;
	}
	if (flag)
		str += '-';
	reverse(str.begin(), str.end());
	cout << str << endl;
	return 0;
}