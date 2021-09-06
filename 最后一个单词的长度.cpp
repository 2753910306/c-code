#include<stdio.h>
#include<string.h>
int main()
{
	char str[100] = { NULL };
	int i = 0;
	gets_s(str);
	int len = strlen(str);
	int count = 0;
	for (i = len-1; i > 0; i--)
	{
		if (str[i] != ' ')
		{
			count++;
		}
		else if(str[i]==' ')
		{
			break;
		}
	}

	printf("%d\n", count);
	return 0;
}