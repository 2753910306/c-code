#include<stdio.h>
#include<stdlib.h>


int fun(char s[], int sz, char zf)
{
	int i = 0;
	int Count=0;
	for(i = 0; i < sz; i++)
	{
		if (s[i] == zf)
			Count++;
		else
			NULL;
	}
	return Count;

}
int main()
{
	char s[] = { "abc123c4" };
	int count = 0;
	int sz = 0;
	char zf;
	sz = sizeof(s) / sizeof(s[0]);
	printf("��������������ҵ��ַ�:");
	scanf("%c", &zf);
	count = fun(s, sz, zf);
	printf("%c�ĸ���Ϊ��%d", zf, count);
	return 0;
}