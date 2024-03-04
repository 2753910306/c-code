#include"test.h"

void _Test(void)
{

	cout << "开始测试：\n";
	_Test_1();
	_Test_2();
	_Test_3();
	_Test_4();
	_Test_5();
	cout << "测试通过！" << endl;
}

void _Test_1(void)
{
	Calc c1(100000000000);
	c1.Calc_Init();
	c1.print_Num();
	c1.convert();
	c1.print_Hanzi();
}
void _Test_2(void)
{
	Calc c2(1000000000.01);
	c2.Calc_Init();
	c2.print_Num();
	c2.convert();
	c2.print_Hanzi();
}
void _Test_3(void)
{
	Calc c3(100000.00);
	c3.Calc_Init();
	c3.print_Num();
	c3.convert();
	c3.print_Hanzi();
}
void _Test_4(void)
{
	Calc c4(10);
	c4.Calc_Init();
	c4.print_Num();
	c4.convert();
	c4.print_Hanzi();
}
void _Test_5(void)
{
	Calc c5(1001.01);
	c5.Calc_Init();
	c5.print_Num();
	c5.convert();
	c5.print_Hanzi();
}