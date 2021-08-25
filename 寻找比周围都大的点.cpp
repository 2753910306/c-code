//描述
//给一个n* m大小的矩阵，
// 寻找矩阵中所有比邻居（上下左右，对角也算，不考虑边界，即8个）都严格大的点。
//返回一个n* m大小的矩阵，如果原矩阵中的点比邻居都严格大，则该位置为1，反之为0。

//样例
//输入:
//1 2 3
//4 5 8
//9 7 0
//输出 :
//	0 0 0
//	0 0 1
//	1 0 0

#include<stdio.h>
#define N 3
#define M 3
int main()
{
	int i = 0, j = 0;
	int flag = 0, a[N][M] = { 0 }, arr[N][M] = { 0 };
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (a[i][j] > a[i + 1][j] && a[i][j] > a[i + 1][j - 1] &&
				a[i][j] > a[i + 1][j + 1] && a[i][j] > a[i][j - 1] &&
				a[i][j] > a[i][j + 1] && a[i][j] > a[i - 1][j - 1] &&
				a[i][j] > a[i - 1][j + 1] && a[i][j] > a[i - 1][j]) 
			{
				arr[i][j] = 1;
			}
			else
				arr[i][j] = 0;
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%d ", a[i][j]);
		}printf("\n");
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%d ", arr[i][j]);
		}printf("\n");
	}
	return 0;
}