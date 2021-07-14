#include<stdio.h>
#include<string.h>

int main()
{
	int i, n, j, m;
	char ch1 ,ch2,ch;
	char password[20] = { }, add[20] = { };
	printf("请输入密码：");
	scanf("%s", password);
	ch1=getchar();
	n = strlen(password);
	for (i = 0; i < n; i++)
		printf("*");
	printf("\n请再次确定密码：");
	scanf("%s", add);
	ch2 = getchar();
	m = strlen(add);
	for (j = 0; j < m; j++)
		printf("*");

	printf("\n确定请输入Y，取消则输入N:\n");
	ch = getchar();
	getchar();//清除/n
	if (ch == 'Y')
		printf("确认成功！\n");
	else
		printf("确认失败，请重新输入！>\n");
	return 0;
}