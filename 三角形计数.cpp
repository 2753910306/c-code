//给定一个整数数组，在该数组中，寻找三个数，
// 分别代表三角形三条边的长度，问，
// 可以寻找到多少组这样的三个数来组成三角形？
//
//样例
//样例 1:
//
//输入: [3, 4, 6, 7]
//输出 : 3
//解释 :
//    可以组成的是
//	  (3, 4, 6),
//    (3, 6, 7),
//    (4, 6, 7)
//    样例 2 :
//
//    输入 : [4, 4, 4, 4]
//    输出 : 4
//    任何三个数都可以构成三角形
//    所以答案为 C(3, 4) = 4

#include<stdio.h>

int main()
{
	int arr[100] = { NULL };
	int n = 0, i = 0, j = 0, t = 0;
	do
	{
		scanf("%d", &arr[n++]);
	} while (getchar() != '\n');
	int count = 0;
	for (i = 0; i < n - 2; i++)
	{
		for (j = i + 1; j < n - 1; j++)
		{
			for (t = j + 1; t < n; t++)
			{
				int flag = 1;
				if ((arr[i] + arr[j]) <= arr[t] || (arr[i] + arr[t]) <= arr[j] ||
					(arr[j] + arr[t]) <= arr[i])
				{
					flag = 0;
				}
				else
				{
					count++;
					printf("%d %d %d\n", arr[i], arr[j], arr[t]);
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}