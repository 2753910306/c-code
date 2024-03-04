#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	int i1 = 0;
	int i2 = 0;
	char a;
	char str1[100][10];
	char* str3[100];
	char str4[50] = { NULL };
	gets_s(str4);
	cout << str4 << endl;
	int len = strlen(str4);
	cout << len << endl;
	for (i1 = 0; i1 < len; i1++)
		if (str4[i1] != ' ')
			str1[i][j++] = str4[i1];
		else
		{
			str1[i++][j] = '\0';
			j = 0;
		}
	str1[i][j] = '\0';
	/*	for (i1 = 0; i1 < len; i1++)
			for (i2 = 0; i2 < 3; i2 += 2)
			{
				*(*(str1 + i1) + i2) = *(str4 + i1);
			}*/
	for (int m = 0; m <= i; m++)
	{
		cout << str1[m] << endl;
	}
	cout << endl;
	memset(str1, '\0', sizeof(str1));

	string str[100];

	for (j = 0; j < 20; j++)
	{
		str[j] = str1[j];
		cout << j << str1[j] << endl;
	}
	if (strcmp(str1[16], "Ԫ") == 0)
		cout << 1;
	cout << endl;
	cout << str[0];

	return 0;
}