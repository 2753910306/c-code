#include"Test.h"

void Test1(void)
{
	cout << "��ʼ���ԣ�\n\n";
	Test1_1();
	Test1_2();
	Test1_3();
	Test1_4();
	cout << "����ͨ����" << endl;

}
void Test2(void)
{
	cout << "��ʼ���ԣ�\n\n";
	Test2_1();
	Test2_2();
	Test2_3();
	Test2_4();
	cout << "����ͨ����" << endl;
}
/*ģ���ֶ�����*/
void Test1_1(void)
{
	string str[100] = { "" };
	char c = getchar();//���س��ַ���ȡ����������
	numConv c1(str);
	c1.input();
	c1.chineseConv();
	c1.print_chinese();
	c1.print_num();
}
/*����*/
void Test1_2(void)
{
	cout << "\n��������1��\n";
	string str[100] = { "һ","ǧ","��","Ԫ","��","��","��","��" };
	numConv c1(str);
	c1.chineseConv();
	c1.print_chinese();
	c1.print_num();
	cout << "���Գɹ���\n\n";
}
void Test1_3(void)
{
	cout << "��������2��\n";
	string str[100] = { "һ","ǧ","��","һ","Ԫ","��","��","��","��" };
	numConv c1(str);
	c1.chineseConv();
	c1.print_chinese();
	c1.print_num();
	cout << "���Գɹ���\n\n";
}
void Test1_4(void)
{
	cout << "��������3��\n";
	string str1[100] = { "һ","ǧ","��","һ","��","Ԫ","��","��","��","��" };
	numConv c1(str1);
	c1.chineseConv();
	c1.print_chinese();
	c1.print_num();
	cout << "���Գɹ���\n\n";
}

/*ģ���ֶ�����*/
void Test2_1(void)
{
	long double n = 0.0;
	cout << "\n���������֣�\n";
	cin >> n;
	Calc c1(n);
	c1.Calc_Init();
	c1.print_Num();
	c1.convert();
	c1.print_Hanzi();
}
/*����*/
void Test2_2(void)
{
	cout << "��������1��\n";
	Calc c2(1000000000.01);
	c2.Calc_Init();
	c2.print_Num();
	c2.convert();
	c2.print_Hanzi();
	cout << "���Գɹ���\n\n";
}
void Test2_3(void)
{
	cout << "��������2��\n";
	Calc c3(100000.00);
	c3.Calc_Init();
	c3.print_Num();
	c3.convert();
	c3.print_Hanzi();
	cout << "���Գɹ���\n\n";
}
void Test2_4(void)
{
	cout << "��������3��\n";
	Calc c5(1001.01);
	c5.Calc_Init();
	c5.print_Num();
	c5.convert();
	c5.print_Hanzi();
	cout << "���Գɹ���\n\n";
}