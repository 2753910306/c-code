//����
//�������λ���Ƭ�� Gene1 �� Gene2, ����Ƭ���������ֺ�"ACGT"�����ַ���ɡ�
//ÿһ���ַ�ǰ��������Ӧ�����֣��������������
//���ַ��������ֵ����������磺"1A2C2G1T" ��ʾ "ACCGGT"��
//����һ����ʾ����������Ƭ�ε����ƶȵ��ַ�����
// ���ƶ��ַ����Ķ����ǣ�"��ͬλ���ϵ��ַ���ͬ����" + "/" + "���ַ�����"��
//Gene1 �� Gene2 �����������ֺ�["A", "C", "G", "T"]��������ĸ
//Gene1 �Լ� Gene2 �ĳ��ȷ�Χ�� : [1, 100000]
//����Ƭ�����ַ������ķ�Χ�� : [1, 10000000]
//��֤����֮��� Gene1 �Լ� Gene2 �ĳ�����ͬ
//ʾ�� 1 :
//	���� :
//	Gene1 : "2T3G"
//	Gene2 : "3T2G"
//	��� :
//	"4/5"
//	���� :
//	"TTTGG" �� "TTGGG" �� 4 ��λ���ϵĻ���Ƭ����ͬ������ "4/5"
//	ʾ�� 2 :
//	���� :
//	Gene1 = "3T2G4A1C"
//	Gene2 = "6T1A2C1G"
//	��� :
//	"4/10"
//	���ͣ�
//	"TTTGGAAAAC" �� "TTTTTTACCG" �� 4 ��λ�þ�����ͬ�Ļ���

#include<stdio.h>
#include<string.h>
#define N 1000

void Expansion_of_gene(char Gene[], char arr[], int G)//�������
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
	for (i = 0; i < G; i++)//����
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
		printf("���򳤶�ƥ��\n");
		Expansion_of_gene(Gene1, arr1, G1);
		Expansion_of_gene(Gene2, arr2, G2);
		printf("Gene1�Ļ����Ϊ��");
		Print_gene(arr1, len1);
		printf("Gene2�Ļ����Ϊ��");
		Print_gene(arr2, len2);
	}
	else
	{
		printf("���򳤶Ȳ�ƥ�䣡");
	}
	
	for (i = 0; i < len1; i++)
	{
		if (arr1[i] == arr2[i])
		{
			count++;
		}
	}
	printf("��ͬ�Ļ���ռ�ܻ������Ϊ��%d/%d\n", count, len1);
	return 0;
}