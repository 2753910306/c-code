#include<stdio.h>
#define line 3
#define n 2
#define m 3
int main()
{
	int arr1[n][line] = { NULL };
	int arr2[line][m] = { NULL };
	int arr[n][m] = { 0 };
	int i = 0, j = 0,l = 0;
	printf("请输入矩阵arr1[%d][%d]：",n,line);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < line; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("请输入矩阵arr2[%d][%d]：",line,m);
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (l = 0; l < m; l++)
		{
			for (j = 0; j < line; j++)
			{

				arr[i][j] = arr1[i][j] * arr2[j][l]+arr[i][j];
			}
			
		}
	}
	printf("矩阵相乘后的结果为：\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%-3d ", arr[i][j]);
		}printf("\n");
	}

	return 0;
}