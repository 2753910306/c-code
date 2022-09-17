#include<iostream>
using namespace std;

int main()
{
	char c1, c2, c3, c4, c5;
	c1 = 'C';
	c2 = 'h';
	c3 = 'i';
	c4 = 'n';
	c5 = 'a';
	char c[6] = { 'C','h','i','n','a','\0'};
	int i;
	for (i = 0; i < 5; i++)
	{
		c[i]+=4;
	}

	for (i = 0; i < 5; i++)
	{
		cout << char(c[i]);
	}
	cout << '\n';
	cout <<(char) (c1 + 4) << (char)(c2 + 4)<< (char)(c3 + 4) << (char)(c4 + 4) << (char)(c5 + 4) << endl;
	return 0;
}