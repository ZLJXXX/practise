#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class   BinInsert{
public:
	int binInsert(int n, int m, int j, int i) {
		// write code here
		m = m << j;
		return m | n;
	}
};
int main()
{
	BinInsert s;
	int n;int m; int j; int i;
	while (cin >> n >> m >> j >> i)
	{
		int num = s.binInsert(n, m, j, i);
		cout << num << endl;
	}
	return 0;
}