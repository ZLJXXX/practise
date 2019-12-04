#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int n, m;
vector<vector<int>> maze;//�Թ�����
vector<vector<int>> path_temp;//�洢��ǰλ�ã���һά��ʾλ��
vector<vector<int>> path_best;//�ҵ�����·��
void mazetrack(int i, int j)
{
	maze[i][j] = 1;//��ʾ��ǰλ���Ѿ��߹�����������
	path_temp.push_back({ i, j });//����ǰ�ڵ���뵽·��
	if (i == n - 1 && j == m - 1)//�ж��Ƿ񵽴��յ�
	if (path_best.empty() || path_temp.size() < path_best.size())
		path_best = path_temp;
	if (i - 1 >= 0 && maze[i - 1][j] == 0)//̽��������
		mazetrack(i - 1, j);
	if (i + 1<n && maze[i + 1][j] == 0)//̽��������
		mazetrack(i + 1, j);
	if (j - 1 >= 0 && maze[i][j - 1] == 0)//̽��������
		mazetrack(i, j - 1);
	if (j + 1<m && maze[i][j + 1] == 0)//̽��������
		mazetrack(i, j + 1);
	maze[i][j] = 0;//�ָ��ֳ�����Ϊδ��
	path_temp.pop_back();
}
int main()
{
	while (cin >> n >> m)
	{
		maze = vector<vector<int>>(n, vector<int>(m, 0));//���ռ��ʼ��
		path_temp.clear();
		path_best.clear();
		//����¼��
		for (auto& i : maze)
		for (auto& j : i)
			cin >> j;
		mazetrack(0, 0);//���ݷ��ҵ����·��
		for (auto i : path_best)
			cout << '(' << i[0] << ',' << i[1] << ')' << endl;
	}
	return 0;
}