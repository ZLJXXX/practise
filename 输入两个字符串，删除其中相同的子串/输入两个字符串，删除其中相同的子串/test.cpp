/// ���������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ���
//���磬���롱They are students.���͡�aeiou������ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.��
//�������� :
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	//ʹ�ù�ϣӳ�� ��str2�г����ַ����Ϊ1
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