#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> array;
	int n;
	while (cin >> n)
	{
		array.push_back(n);
	}
	int count = 1;
	int temp = array[0];
	for (int i = 1; i<array.size(); i++)
	{
		if (array[i] == temp)
		{
			count++;
		}
		else{
			count--;
		}
		if (count == 0)
		{
			temp = array[i];
			count++;
		}
	}
	cout << temp << endl;
	return 0;
}