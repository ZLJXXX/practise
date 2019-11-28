/// 输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。
//例如，输入”They are students.”和”aeiou”，则删除之后的第一个字符串变成”Thy r stdnts.”
//输入描述 :
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	//使用哈希映射 将str2中出现字符标记为1
	int hashtable[256] = { 0 };
	for (int i = 0; i<str2.size(); i++)
	{
		hashtable[str2[i]]++;
	}
	string ret;
	for (int i = 0; i<str1.size(); i++)
	{
		if (hashtable[str1[i]] == 0)
		{
			ret += str1[i];
		}
	}
	cout << ret << endl;
}