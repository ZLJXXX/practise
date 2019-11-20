#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
//井字棋，是一种在3 * 3格子上进行的连珠游戏，三个相同就代表获胜。
//【解题思路】：
//井字棋有四种情况表示当前玩家获胜，1代表当前玩家棋子 1. 行全为1， 即行的和为3 2. 列全为1， 列的和为
//3 3. 主对角全为1， 对角和为3 4. 副对角全为1， 对角和为3 5. 如果扩展为N*N的话，判断和是否等于N，下
//面代码适用任何情况
class Board {
public: bool checkWon(vector<vector<int> > board)
{
			int row = board.size(); //检查每一行的和是是否等于row 
			int i, j, sum;
			for (i = 0; i < row; i++)
			{
				sum = 0;
				for (j = 0; j < row; j++)
				{
					sum += board[i][j];
				}
				if (sum == row)
					return true;
			}//检查每一列的和是是否等于row
			for (i = 0; i < row; i++)
			{
				sum = 0;
				for (j = 0; j < row; j++)
				{
					sum += board[j][i];
				}
				if (sum == row)
					return true;
			}
			//检查主对角线的和是是否等于row 
			sum = 0;

			for (i = 0; i < row; i++)
			{
				sum += board[i][i];
			}
			if (sum == row)
				return true;
			//检查副对角线的和是是否等于row
			sum = 0;
			for (i = 0; i < row; i++)
			{
				sum += board[i][row - i - 1];
			}
			if (sum == row)
				return true;
			return false;
}
}