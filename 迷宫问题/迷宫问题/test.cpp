#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int n, m;
vector<vector<int>> maze;//迷宫数组
vector<vector<int>> path_temp;//存储当前位置，第一维表示位置
vector<vector<int>> path_best;//找到最优路径
void mazetrack(int i, int j)
{
	maze[i][j] = 1;//表示当前位置已经走过，不能再走
	path_temp.push_back({ i, j });//将当前节点加入到路径
	if (i == n - 1 && j == m - 1)//判断是否到达终点
	if (path_best.empty() || path_temp.size() < path_best.size())
		path_best = path_temp;
	if (i - 1 >= 0 && maze[i - 1][j] == 0)//探索向上走
		mazetrack(i - 1, j);
	if (i + 1<n && maze[i + 1][j] == 0)//探索向下走
		mazetrack(i + 1, j);
	if (j - 1 >= 0 && maze[i][j - 1] == 0)//探索向左走
		mazetrack(i, j - 1);
	if (j + 1<m && maze[i][j + 1] == 0)//探索向右走
		mazetrack(i, j + 1);
	maze[i][j] = 0;//恢复现场，设为未定
	path_temp.pop_back();
}
int main()
{
	while (cin >> n >> m)
	{
		maze = vector<vector<int>>(n, vector<int>(m, 0));//开空间初始化
		path_temp.clear();
		path_best.clear();
		//数据录入
		for (auto& i : maze)
		for (auto& j : i)
			cin >> j;
		mazetrack(0, 0);//回溯法找到最短路径
		for (auto i : path_best)
			cout << '(' << i[0] << ',' << i[1] << ')' << endl;
	}
	return 0;
}