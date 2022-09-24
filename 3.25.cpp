#include<iostream>
using namespace std;

int main()
{
	char ch1[3] = { 'A','B','C' };
	char ch2[3] = { 'X','Y','Z' };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == 0 && j != 0 && j!= 1)
			{
				cout << ch1[i] << "--" << ch2[j] << endl;
			}
			if (i == 1 && j != 2 && j != 1)
			{
				cout << ch1[i] << "--" << ch2[j] << endl;
			}
			if (i == 2 && j != 0 && j != 2)
			{
				cout << ch1[i] << "--" << ch2[j] << endl;
			}
		}
	}
	return 0;
}