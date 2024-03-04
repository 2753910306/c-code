#include<iostream>
#include<string>
#include"Chinese_digital_interchange.h"
#include"Test.h"

using namespace std;

int main()
{
	while (1)
	{
		label:
		cout << "输入1进入中文转数字模式\n输入2进入数字转中文模式\n输入3退出" << endl;
		int flag = 0;
		cout << "flag = ";
		cin >> flag;
		if (flag == 1)
		{
			cout << "中文转数字模式\n";
			//Test1();
			char c = getchar();//将回车字符读取掉，再输入
			numConv c1;
			c1.input();
			c1.chineseConv();
			c1.print_num();
			cout << endl;
		}
		else if (flag == 2)
		{
			cout << "数字转中文模式\n";
			//Test2();
			long double n = 0.0;
			cout << "\n请输入数字：\n";
			cin >> n;
			Calc c1(n);
			c1.Calc_Init();
			c1.convert();
			cout << "中文数字输出为：";
			c1.print_Hanzi();
			cout << endl;
		}
		else if (flag == 3)
		{
			return 0;
		}
		else
		{
			cout << "错误输入，请重新输入！\n\n";
			goto label;
		}
	}
	return 0;
}