#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string replaceSpace(char *str, int length) {
		string ret;
		for (int i = 0; i < length; i++)
		{
			if (str[i] != ' ')
				ret += str[i];
			else
				ret += "%20";
		}
		return ret;
	}
};
int main()
{
	Solution s;
	char* str = "hello world";
	int length = strlen(str);
	string ret = s.replaceSpace(str, length);
	for (int i = 0;i < ret.size();i++)
	{
		cout << ret[i];
	}
	cout << endl;
	system("pause");
	return 0;
}