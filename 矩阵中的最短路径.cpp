//给定m行n列的矩阵，矩阵中0表示空地、 - 1表示障碍、1表示目标点（多个）。
//
//对于每个空地，标记出应该从该点向哪个方向出发才能以最短的距离到达目标点。
//
//如果向上出发这将该点标记为2，如果向下出发这将该点标记为3，
// 如果向左出发这将该点标记为4，如果向右出发这将该点标记为5。
//
//方向的优先级从大到小为上、下、左、右，
// 即如果从一个点向上或向下出发都能以最短距离到达目标点，则向上出发。
//
//返回完成标记之后的矩阵。
//
//0 < m, n < 1000
//	样例
//	样例 1：
//
//	输入 :
//[[1, 0, 1],
// [0, 0, 0], 
// [1, 0, 0]]
//输出 :
//	////[[1, 4, 1], [2, 2, 2], [1, 4, 2]]


#include<stdio.h>
#define row 4
#define col 4

int main()
{
	int arr[row][col] = { 0 };
	int cons[row][col] = { 0 };
	int i = 0, j = 0;
	for (i = 1; i < row; i++)
	{
		for (j = 1; j < col; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}

	for (i = 1; i < row; i++)
	{
		
		for (j = 1; j < col; j++)
		{
			if (arr[i][j] == 1)
			{
				cons[i][j] = 1;
			}
			else if (arr[i - 1][j] == 1)
			{
				cons[i][j] = 2;
			}
			else if (arr[i + 1][j] == 1)
			{
				cons[i][j] = 3;
			}
			else if (arr[i][j - 1] == 1)					
			{
				cons[i][j] = 4;
			}
			else if (arr[i][j + 1] == 1)
			{
				cons[i][j] = 5;
			}
			else
			{
				cons[i][j] = 2;
			}
							
		}
		
	}
	for (i = 1; i < row; i++)
	{
		for (j = 1; j < col; j++)
		{
			printf("%d ", cons[i][j]);
		}printf("\n");
	}
	return 0;
}
