#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
#define ADD(x,y) ((x) + (y))
#define CMP(x,y) ((x) > (y))
int main()
{
	double a, b, c;
	while (cin >> a >> b >> c)
	{
		//������������������бȽ�
		if (CMP(ADD(a, b), c) && CMP(ADD(b, c), a) && CMP(ADD(a, c), b))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}