#define _CRT_SECURE_NO_WARNINGS
class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		sort(gifts.begin(), gifts.end());
		int middle = gifts[n / 2];
		int count = 0;
		for (int i = 0; i<n; i++)
		{
			if (gifts[i] == middle)
			{
				count++;
			}
		}
		if (count > n / 2)
		{
			return middle;
		}
		else{
			return 0;
		}
	}
};
