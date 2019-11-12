#define _CRT_SECURE_NO_WARNINGS
//将一个字符串插入到另一个字符串中，若构成回文，有多少种回文
#include<iostream>
#include<string>
using namespace std;
bool myreverse(const string& str)
{
	int begin = 0;
	int end = str.size() - 1;
	while (begin < end)
	{
		if (str[begin] != str[end])
		{
			return false;
		}
		++begin;
		--end;
	}
	return  true;

}
int main()
{
	string A1;
	string B;
	cin >> A1 >> B;
	int count = 0;
	int pi = 0;
	while (pi <= A1.size())
	{
		string str = A1;
		str.insert(pi, B);
		if (myreverse(str))
		{
			count++;
		}
		pi++;
	}
	cout << count << endl;
}