#include<stdio.h>
#include<string.h>

int main()
{
	int i, n, j, m;
	char ch1 ,ch2,ch;
	char password[20] = { }, add[20] = { };
	printf("���������룺");
	scanf("%s", password);
	ch1=getchar();
	n = strlen(password);
	for (i = 0; i < n; i++)
		printf("*");
	printf("\n���ٴ�ȷ�����룺");
	scanf("%s", add);
	ch2 = getchar();
	m = strlen(add);
	for (j = 0; j < m; j++)
		printf("*");

	printf("\nȷ��������Y��ȡ��������N:\n");
	ch = getchar();
	getchar();//���/n
	if (ch == 'Y')
		printf("ȷ�ϳɹ���\n");
	else
		printf("ȷ��ʧ�ܣ����������룡>\n");
	return 0;
}