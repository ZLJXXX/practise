#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int StrToInt(string str)
{
		//еп©у
		if (str.empty())
		{
			return NULL;
		}
		int post = 1;
		if (str[0] == '-')
		{
			post = -1;
			str[0] = '0';
		}
		if (str[0] == '+')
		{
			post = 1;
			str[0] = '0';
		}
		int num = 0;
		for (int i = 0; i<str.size(); i++)
		{
			if (str[i]<'0' || str[i]>'9')
			{
				num = 0;
				break;
			}
			num = num * 10 + str[i] - '0';
		}
		num = num * post;
		return num;
}
int main()
{
	string str = "+abc123145678ab35";
	int num = 0;
	num = StrToInt(str);
	cout << num << endl;
	system("pause");
	return 0;
}
