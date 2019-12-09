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
		//对两边求和与第三遍进行比较
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