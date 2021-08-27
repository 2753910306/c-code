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

//思路，先找最大的，然后再往下找
//一直相加判断大小，利用dp【0】为真这个条件来实现逼近我们的最大值


#include<stdio.h>
#include<string.h>

int max(int a, int b)
{
	int max = a;
	if (a < b)
	{
		max = b;
	}
	return max;
}
int main()
{
	int i = 0, n = 0, j = 0;
	int maxCapacity = 0;
	int weights[1000] = { NULL };
	printf("器材重量：");
	do
	{
		scanf_s("%d", &weights[n++]);
	} while (getchar() != '\n');

	printf("最大承受重量：");
	scanf_s("%d", &maxCapacity);

	int answer=0;
	char dp[1000] = { NULL };
	dp[0] = true;

	for (int i = 0; i < n; i++)
	{
		int weight = weights[i];
		for (int j = maxCapacity; j >= weight; j--)
		{
			if (dp[j - weight]) 
			{
				dp[j] = true;
				answer = max(answer, j);
			}
		}
	}
	printf("max=%d", answer);
	return 0;
} 
