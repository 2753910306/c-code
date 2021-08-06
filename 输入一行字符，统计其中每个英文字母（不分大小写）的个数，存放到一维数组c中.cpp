#include<stdio.h>
#include<stdlib.h>

int fun(char str[], int sz)
{
	int i = 0, count = 0;
	for (i = 0; i < sz; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i]>='A' && str[i] <= 'Z'))
			count++;
		else
			NULL;
	}
	return count;
}

int main()
{
	int i = 0,Count;
	char str[20];
	printf("input zifu:\n");
	scanf("%s", str);
	int sz = sizeof(str) / sizeof(str[0]);
	Count=fun(str, sz);
	printf("%d\n", Count);
	return 0;

}