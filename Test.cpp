#include"Test.h"

void Test1(void)
{
	cout << "开始测试：\n\n";
	Test1_1();
	Test1_2();
	Test1_3();
	Test1_4();
	cout << "测试通过！" << endl;

}
void Test2(void)
{
	cout << "开始测试：\n\n";
	Test2_1();
	Test2_2();
	Test2_3();
	Test2_4();
	cout << "测试通过！" << endl;
}
/*模拟手动输入*/
void Test1_1(void)
{
	string str[100] = { "" };
	char c = getchar();//将回车字符读取掉，再输入
	numConv c1(str);
	c1.input();
	c1.chineseConv();
	c1.print_chinese();
	c1.print_num();
}
/*测试*/
void Test1_2(void)
{
	cout << "\n测试数据1：\n";
	string str[100] = { "一","千","万","元","三","角","三","分" };
	numConv c1(str);
	c1.chineseConv();
	c1.print_chinese();
	c1.print_num();
	cout << "测试成功！\n\n";
}
void Test1_3(void)
{
	cout << "测试数据2：\n";
	string str[100] = { "一","千","零","一","元","三","角","三","分" };
	numConv c1(str);
	c1.chineseConv();
	c1.print_chinese();
	c1.print_num();
	cout << "测试成功！\n\n";
}
void Test1_4(void)
{
	cout << "测试数据3：\n";
	string str1[100] = { "一","千","零","一","万","元","三","角","三","分" };
	numConv c1(str1);
	c1.chineseConv();
	c1.print_chinese();
	c1.print_num();
	cout << "测试成功！\n\n";
}

/*模拟手动输入*/
void Test2_1(void)
{
	long double n = 0.0;
	cout << "\n请输入数字：\n";
	cin >> n;
	Calc c1(n);
	c1.Calc_Init();
	c1.print_Num();
	c1.convert();
	c1.print_Hanzi();
}
/*测试*/
void Test2_2(void)
{
	cout << "测试数据1：\n";
	Calc c2(1000000000.01);
	c2.Calc_Init();
	c2.print_Num();
	c2.convert();
	c2.print_Hanzi();
	cout << "测试成功！\n\n";
}
void Test2_3(void)
{
	cout << "测试数据2：\n";
	Calc c3(100000.00);
	c3.Calc_Init();
	c3.print_Num();
	c3.convert();
	c3.print_Hanzi();
	cout << "测试成功！\n\n";
}
void Test2_4(void)
{
	cout << "测试数据3：\n";
	Calc c5(1001.01);
	c5.Calc_Init();
	c5.print_Num();
	c5.convert();
	c5.print_Hanzi();
	cout << "测试成功！\n\n";
}