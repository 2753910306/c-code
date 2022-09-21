#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d =0;
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A' && ch <= 'z')
			a++;
		else if (ch == ' ')
			b++;
		else if (ch >= '0' && ch <= '9')
			c++;
		else
			d++;
	}
	cout << "英文字母数量：" << a << endl;
	cout << "空格数：" << b << endl;
	cout << "数字数：" << c << endl;
	cout << "其他字符数：" << d << endl;
	return 0;
}