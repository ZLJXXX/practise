#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//�����Կո��˫����Ϊ�����ͳ�Ʋ�������������˫���ţ�ͨ�����flag,��֤˫�����еĿո����.
int main()
{
	string str;
	while (getline(cin, str))
	{
		int count = 0;
		//���ȼ����������
		for (int i = 0; i<str.size(); i++)
		{
			if (str[i] == ' ')
			{
				count++;
			}
			//�����˫����������ֱ���ҵ���һ��˫����Ϊֹ
			if (str[i] == '"')
			{
				do
				{
					i++;
				} while (str[i] != '"');
			}
		}

		//�ո�����Ȳ���������һ��
		cout << count + 1 << endl;
		//˫�����еĿո�Ҫ�����
		//�����ı�flag��ֵ������˫���ſ���ʹflag��ԭ
		int flag = 1;
		for (int i = 0; i<str.size(); i++)
		{
			//��˫���ţ�flagͨ�����Ϊ�㣬��һ�β�����˫���ţ����Ϊ1
			if (str[i] == '"')
				flag ^= 1;
			//˫���ź���ͨ�ո񲻴�ӡ
			if (str[i] != ' '&&str[i] != '"')
				cout << str[i];
			//˫�����еĿո��ӡ
			if (str[i] == ' ' && (!flag))
				cout << str[i];
			//������������Ŀո�ͻ���
			if (str[i] == ' '&& flag)
				cout << endl;
		}
		cout << endl;
	}
	return 0;

}