//描述
//给出一个字符串(以字符数组形式给出)，
// 一个右偏移和一个左偏移，根据给出的偏移量循环移动字符串，
// 并保存在一个新的结果集中返回。
// (left offest表示字符串向左的偏移量，
// right offest表示字符串向右的偏移量，
// 左偏移量和右偏移量计算得到总偏移量，
// 在总偏移量处分成两段字符串并交换位置)。
//
//样例
//样例 1:
//
//输入：str = "abcdefg", left = 3, right = 1
//输出："cdefgab"
//解释：左偏移量为3，右偏移量为1，总的偏移量为向左2，
// 故原字符串向左移动，变为"cdefg" + "ab"。
//样例 2 :
//
//	输入：str = "abcdefg", left = 0, right = 0
//	输出："abcdefg"
//	解释：左偏移量为0，右偏移量为0，总的偏移量0，故字符串不变。
//	样例 3 :
//
//	输入：str = "abcdefg", left = 1, right = 2
//	输出："gabcdef"
//	解释：左偏移量为1，右偏移量为2，
// 总的偏移量为向右1，故原字符串向右移动，变为"g" + "abcdef"。


#include<stdio.h>
#include<string.h>

int main()
{
	char str[100] = { NULL };
	printf("str=");
	gets_s(str);
	int len = strlen(str);
	int i = 0, j = 0;
	int left = 0, right = 0;
	printf("left=");
	scanf("%d", &left);
	printf("right=");
	scanf("%d", &right);
	char t=0;
	if (left > right)
	{
		left = left - right;
		for (i = 0; i < left; i++)
		{
			str[len + i] = str[i];
		}
		for (i = left; i < len + left; i++)
		{
			printf("%c ", str[i]);
		}
	}
	else
	{
		right = right - left;
		for (j = len ; j < 2 * len; j++)
		{
			str[j] = str[i++];
			
		}
		
		for (i = len - right ; i < 2 * len - right; i++)
		{
			printf("%c ", str[i]);
		}
	}
	
	return 0;
}