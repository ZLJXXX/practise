#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class UnusualAdd {
public:
	int addAB(int A, int B) {

		while (1)
		{
			int c = A;
			A = A ^ B;
			B = (c & B) << 1;
			if (B == 0)
			{
				return A;
			}
		}
	}
};
int main()
{
	UnusualAdd s;
	int a, b;
	cin >> a >> b;
	cout << s.addAB(a,b) << endl;
	system("pause");
	return 0;
}