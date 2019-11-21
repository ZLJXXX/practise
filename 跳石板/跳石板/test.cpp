#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����˼�Ǵ�N��ʼ��������Ҫ�ۼӼ������Ա��ָ��������M��ÿ���ۼӵ�ֵΪ��ǰֵ��һ��Լ���� 
//������˼·���� ��1 - M��ʯ�忴��һ���������stepNum��ÿ��stepNum[i]�����Ŵ���㵽��һ����С�Ĳ���������0Ϊ���ܵ��
//�� ��㿪ʼ��stepNum���б���������i������Լ��������stepNum[i]���ߵĲ�������Ȼ������Ǽ����ܵ����λ�õ� �� С������
//������ܵ��������Ϊ��ʱλ�õ���С���� + 1��������ܵ���ľ͸���Ϊmin���Ѽ�¼����С�������˴��� ��С���� + 1������
//����һ���õ����
#include<iostream>
using namespace std;
//������������Լ��
int divisor(int n, int m)
{
	int maxdivisor = 0;
	int nextmaxdivisor = 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			nextmaxdivisor = maxdivisor;
			maxdivisor = i;
		}
	}
	if (m % maxdivisor == 0)
	{
		return maxdivisor;
	}
	else
		return nextmaxdivisor;
}
//�ж�����
bool isprime(int m)
{
	for (int i = 2; i < m; i++)
	{
		if (m % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n, m;

	while (cin >> n >> m)
	{
		if (isprime(m) || isprime(n))
		{

			cout << "-1" << endl;
			break;
		}
		int count = 0;

		while (n < m)
		{
			n = n + divisor(n, m);
			count++;
		}
		cout << count << endl;
	}
	return 0;
}