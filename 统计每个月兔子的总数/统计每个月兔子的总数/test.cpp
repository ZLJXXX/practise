#define _CRT_SECURE_NO_WARNINGS
//第n个月的兔子数量由两部分组成，一部分是上个月的兔子f(n - 1)，另一部是满足3个月大的兔子，会生一只兔
//子f(n - 2)。所以第n个月兔子总数： f(n) = f(n - 1) + f(n - 2)。制作-1)，本题是在变相考察斐波那契数列。
#include<iostream>
using namespace std;
int main()
{
	int month;
	while (cin >> month){
		int first = 1;
		int second = 1;
		int result;
		for (int i = 3; i <= month; i++)
		{
			result = first + second;
			first = second;
			second = result;
		}
		cout << result << endl;
	}
	return 0;
}
