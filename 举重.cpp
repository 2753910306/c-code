//奥利第一次来到健身房，她正在计算她能举起的最大重量。
// 杠铃所能承受的最大重量为maxCapacity，健身房里有n个杠铃片，
// 第 i 个杠铃片的重量为 weights[i]。奥利现在需要选一些杠铃片加到杠铃上，
// 使得杠铃的重量最大，但是所选的杠铃片重量总和又不能超过 maxCapacity ，
// 请计算杠铃的最大重量是多少。
//
//比如，给定杠铃片的重量为 weights = [1, 3, 5]， 而杠铃的最大承重为 maxCapacity = 7，
// 那么应该选择重量为 1 和 5 的杠铃片，(1 + 5 = 6)，所以最终的答案是 6。
//样例 1
//
//输入：
//[1, 3, 5]
//7
//输出：
//6

#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0, n = 0, j = 0;
	int m = 0, flag = 0;
	int weights[1000] = { NULL };
	printf("器材重量：");
	do
	{
		scanf_s("%d", &weights[n++]);
	} while (getchar() != '\n');

	printf("最大承受重量：");

	scanf_s("%d", &m);

	for (i = 0; i < n-1; i++)
	{
		int flag = weights[i];
		for (j = i + 1; j < n; j++)
		{
			if (flag <= m)
			{
				flag = weights[i] + weights[j];
			}
			else
			{
				continue;
			}
		}
	}
	printf("max=%d", flag);
	
	return 0;
}