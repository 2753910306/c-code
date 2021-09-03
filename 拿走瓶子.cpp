//有一排有编号的瓶子，现在你需要将这些瓶子全部拿走。
//你每次只可以拿走连续的若干个瓶子，并且需要保证瓶子的编号是一个“回文串”。
//回文串指的是正着和反着读都一样的串，例如“121”和“4664”。
//返回拿走所有瓶子所需要的最少次数。
//
//1、瓶子的数量不超过500
//2、瓶子的编号不超过1000
//
//样例
//例1 :
//
//输入：
//[1, 3, 4, 1, 5]
//输出：
//3
//说明：
//第一次先拿走[4]，剩余[1, 3, 1, 5]
//第二次拿走[1, 3, 1]，剩余[5]
//第三次拿走[5]
//例2:
//1 2 5 3 6 2 5 4 1
// 1 2 5 3 6 2 5 1
// 1 5 3 6 2 5 1
// 1 5 6 2 5 1
// 1 5 2 5 1
//输入：
//[1, 2, 3, 5, 3, 1]
//输出：
//2


#include<stdio.h>

int main()
{
	int arr[500] = { NULL };
	int n = 0;
	do
	{
		scanf_s("%d", &arr[n++]);
	} while (getchar() != '\n');
	int count = 0, i = 0, j = 0;
	int left = 0, right = n - 1;
	int t = n;
	for(left = 0; left < right; left++)
	{
		int flag = 0;
		if (left == right)
		{
			break;
			count++;
		}
		for (i = right; i > left; i--)
		{
			if (arr[left] == arr[i])
			{	
				right = right - (right - i);
				count += (right - i + 1);
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{	
			count++;
		}
	}
	printf("%d", count);

	return 0;
}