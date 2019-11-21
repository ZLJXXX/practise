#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//本题以空格和双引号为间隔，统计参数个数，对于双引号，通过添加flag,保证双引号中的空格被输出.
int main()
{
	string str;
	while (getline(cin, str))
	{
		int count = 0;
		//首先计算参数数量
		for (int i = 0; i<str.size(); i++)
		{
			if (str[i] == ' ')
			{
				count++;
			}
			//如果是双引号向后遍历直到找到下一个双引号为止
			if (str[i] == '"')
			{
				do
				{
					i++;
				} while (str[i] != '"');
			}
		}

		//空格计数比参数个数少一个
		cout << count + 1 << endl;
		//双引号中的空格要打出来
		//用异或改变flag的值，两个双引号可以使flag复原
		int flag = 1;
		for (int i = 0; i<str.size(); i++)
		{
			//有双引号，flag通过异变为零，下一次才遇见双引号，异变为1
			if (str[i] == '"')
				flag ^= 1;
			//双引号和普通空格不打印
			if (str[i] != ' '&&str[i] != '"')
				cout << str[i];
			//双引号中的空格打印
			if (str[i] == ' ' && (!flag))
				cout << str[i];
			//遇到换引号外的空格就换行
			if (str[i] == ' '&& flag)
				cout << endl;
		}
		cout << endl;
	}
	return 0;

}