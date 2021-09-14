//描述
//给定一个m* n 的全零矩阵M，以及一些更新操作。
//
//操作由2D数组表示，并且每个操作由具有两个正整数a和b的数组表示，
// 对于一个操作[a, b], 这意味着M[i][j] 会在所有0 <= i < a且0 <= j < b 的i，j位置上加1.
//
//	在执行完所有操作后，您需要计算并返回矩阵中的最大整数的个数。
//
//	m和n的范围是[1, 40000]。
//	a的范围是[1，m]，b的范围是[1，n]。
//	操作个数不超过10, 000。
//
//	样例
//	样例 1:
//
//输入:
//m = 3, n = 3
//operations = [[2, 2], [3, 3]]
//输出 : 4
//解释 :
//	最初，M =
//	[[0, 0, 0]，
//	[0, 0, 0]，
//	[0, 0, 0]]
//
//在执行[2, 2]之后，M =
//[[1, 1, 0]，
//[1, 1, 0]，
//[0, 0, 0]]
//
//执行[3, 3]后，M =
//[[2, 2, 1]，
//[2, 2, 1]，
//[1, 1, 1]]
//
//所以M中的最大整数是2，M中有4个2。所以返回4。


#include<stdio.h>
#include<string.h>

int main()
{
	int arr[100][100] = { NULL };
	int n = 0, m = 0;
	printf("m=");
	scanf("%d", &m);
	printf("n=");
	scanf("%d", &n);
	char operations[1000] = { NULL };
	gets_s(operations);
	int len = strlen(operations);
	int i = 0, j = 0;
	int I = 0, J = 0;
	for (i = 0; i < len; i++)
	{
		int a = 0, b = 0;
		if (operations[i] == '[')
		{
			a = operations[i + 1] - '0';
			b = operations[i + 3] - '0';
			for (I = 0; I < a; I++)
			{
				for (J = 0; J < b; J++)
				{
					if (arr[I][J] != 0)
					{
						arr[I][J] += 1;
					}
					else
					{
						arr[I][J] = 1;
					}
				}
			}
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++) 
		{
			printf("%d ", arr[i][j]);
		}printf("\n");
	}

	return 0;
}