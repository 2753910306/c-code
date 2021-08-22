// ‰»Î£∫
//A = "ABCD"
//B = "ACD"
// ‰≥ˆ£∫
//true

#include<stdio.h>
#include<string.h>

int main()
{
	char a1[100] = { NULL }, a2[100] = { NULL };
	int n=0,m=0,i=0;
	int flag = 0;
	printf("A=");
	gets_s(a1);
	n = strlen(a1);
	printf("B=");
	gets_s(a2);
	m = strlen(a2);
	for (i = 0; i < m; i++)
	{
		flag = 0;
		for (int j = 0; j < n; j++)
		{
			if (a2[i] == a1[j])
				flag = 1;
		}
		if (flag == 0)
			break;
	}
	if (flag)
		printf("ture");
	else
		printf("false");
	return 0;
}