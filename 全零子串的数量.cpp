//����һ��ֻ����0��1���ַ���str, 
// �뷵������ַ�����ȫΪ0�����ַ����ĸ���
//
//1<=|str|<=30000
//
//����1 :
//
//����:"00010011"3 + 2 + 1 + 2 + 1
//��� : 9
//���� :
//	"0"���ַ�����5��,
//	"00"���ַ�����3��,
//	"000"���ַ�����1����
//	���Է���9
//	����2 :
//00000100 5 + 4 + 3 + 2 + 1  + 2 + 1
// 0000 0000
// 000 000 000
// 00 00 00 00
// 0 0 0 0 0
// 
//����:
//"010010"
//��� :
//	5


#include<stdio.h>
#include<string.h>

int fun(char str[], int i)
{
	int count=0;
	while (str[i] == '0')
	{
		count++;
		i++;
		fun(str, i);
	}
	return count;
}
int main()
{
	int arr[100] = { NULL };
	char str[100] = { NULL };
	gets_s(str);
	int len = strlen(str);
	int i = 0, count = 0;
	int max = 0;
	int n = 0;
	for (i = 0; i < len; )
	{
		if (str[i] == '0')
		{
			count = fun(str, i);
			printf("%d ", count);
			arr[n++] = count;
			i = count + i;
		}
		else
			i++;
	}printf("\n");
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		for (int j = arr[i]; j > 0; j--)
		{
			sum += j;
		}
	}

	printf("%d\n", sum);
	return 0;
}