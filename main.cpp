#include<iostream>
#include"Test.h"
#include"Chinese.h"
using namespace std;

int main()
{
	Test();
	while (1)
	{
		numConv c1;
		c1.input();
		c1.chineseConv();
		c1.print_chinese();
		c1.print_num();
	}
	return 0;
}
