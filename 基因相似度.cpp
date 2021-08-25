//描述
//给定两段基因片段 Gene1 和 Gene2, 基因片段中由数字和"ACGT"四种字符组成。
//每一个字符前都会有相应的数字，这个数字是描述
//该字符连续出现的数量，例如："1A2C2G1T" 表示 "ACCGGT"。
//返回一个表示这两个基因片段的相似度的字符串，
// 相似度字符串的定义是："相同位置上的字符相同个数" + "/" + "总字符个数"。
//Gene1 和 Gene2 仅仅包含数字和["A", "C", "G", "T"]这四种字母
//Gene1 以及 Gene2 的长度范围是 : [1, 100000]
//基因片段中字符数量的范围是 : [1, 10000000]
//保证扩充之后的 Gene1 以及 Gene2 的长度相同
//示例 1 :
//	输入 :
//	Gene1 : "2T3G"
//	Gene2 : "3T2G"
//	输出 :
//	"4/5"
//	解释 :
//	"TTTGG" 和 "TTGGG" 有 4 处位置上的基因片段相同，所以 "4/5"
//	示例 2 :
//	输入 :
//	Gene1 = "3T2G4A1C"
//	Gene2 = "6T1A2C1G"
//	输出 :
//	"4/10"
//	解释：
//	"TTTGGAAAAC" 和 "TTTTTTACCG" 有 4 个位置具有相同的基因

#include<stdio.h>
#include<string.h>
#define N 1000

void Expansion_of_gene(char Gene[], char arr[], int G)//扩充基因
{
	int i = 0, j = 0;
	int count = 0;
	for (i = 0; i < G; i++)
	{
		if (i % 2 == 0)
		{
			for (j = count; j < count + Gene[i] - '0'; j++)
			{
				arr[j] = Gene[i + 1];
			}
			count += Gene[i] - '0';
		}
	}
}
void Print_gene(char arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}

int genelen(char Gene[],int G)
{
	int i = 0;
	int len = 0;
	for (i = 0; i < G; i++)//翻译
	{
		if (i % 2 == 0)
		{
			len += Gene[i] - '0';
		}
	}
	return len;
}

int main()
{
	char Gene1[N] = { NULL };
	char Gene2[N] = { NULL };
	char arr1[N] = { NULL }, arr2[N] = { NULL };
	int i = 0, count=0;
	int len1 = 0, len2 = 0;

	printf("Gene1=");
	gets_s(Gene1);
	int G1 = strlen(Gene1);

	printf("Gene2=");
	gets_s(Gene2);
	int G2 = strlen(Gene2);

	len1 = genelen(Gene1, G1);
	len2 = genelen(Gene2, G2);
	
	if (len1 == len2)
	{
		printf("基因长度匹配\n");
		Expansion_of_gene(Gene1, arr1, G1);
		Expansion_of_gene(Gene2, arr2, G2);
		printf("Gene1的基因段为：");
		Print_gene(arr1, len1);
		printf("Gene2的基因段为：");
		Print_gene(arr2, len2);
	}
	else
	{
		printf("基因长度不匹配！");
	}
	
	for (i = 0; i < len1; i++)
	{
		if (arr1[i] == arr2[i])
		{
			count++;
		}
	}
	printf("相同的基因占总基因比例为：%d/%d\n", count, len1);
	return 0;
}