//����
//��һ��n* m��С�ľ���
// Ѱ�Ҿ��������б��ھӣ��������ң��Խ�Ҳ�㣬�����Ǳ߽磬��8�������ϸ��ĵ㡣
//����һ��n* m��С�ľ������ԭ�����еĵ���ھӶ��ϸ�����λ��Ϊ1����֮Ϊ0��

//����
//����:
//1 2 3
//4 5 8
//9 7 0
//��� :
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