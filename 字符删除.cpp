/*���������ַ��� str �� sub������������� str ����ȫɾ����Щ�� sub �д��ڵ��ַ���
�ַ����а����ո�
����
���� 1:
����:
str = "They are students"��sub = "aeiou"
��� :
	"Thy r stdnts"*/
#include<stdio.h>
#include<string.h>

void qjyd(char str[], int strl,int j)
{
	int i = 0;
	int t = 0;
	while (j < strl)
	{
		str[j] = str[j + 1];
		j++;	
	}
}

int main()
{
	char str[100] = { NULL }, sub[100] = { NULL };
	printf("str=");
	gets_s(str);
	int strl = strlen(str);
	printf("sub=");
	gets_s(sub);
	int subl = strlen(sub);
	int i = 0;
	int j = 0;
	char t = 0;
	for (i = 0; i < subl; i++)
	{
		for (j = 0; j < strl; j++)
		{
			if (str[j] == sub[i])
			{
				qjyd(str, strl, j);

			}
		}
	}
	for (i = 0; i < strl; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}