#include"test.h"

void Test()
{
	cout << "�����С���" << endl;
	Test_0();
	Test_1();
	Test_2();
	Test_3();

		cout << "ͨ�����в��ԣ�" << endl;
}
void Test_0(void)
{
	Complex* c = NULL;
	Complex c1(1.0, 1.0);
	Complex c2(1.0, 1.0);
	Complex ret(0, 0);
	c->print(c1);
	cout << endl;
	c->print(c2);
	cout << endl;
	cout << "c1+c2 = ";
	ret = c1 + c2;
	c->print(ret);
	cout << endl;
	c->print(ret);
	cout << "�ľ���ֵΪ��" << c->ComplexAbs() << endl<<endl;
}

//���Թ��캯��
void Test_1(void)
{
	Complex* c = NULL;
	Complex c1(-1.0, 1.0);
	Complex c2(5.0, -1.0);
	Complex ret(0, 0);
	c->print(c1);
	cout << endl;
	c->print(c2);
	cout << endl;
	cout << "c1-c2 = ";
	ret = c1 - c2;
	c->print(ret);
	cout << endl;
	c->print(ret);
	cout << "�ľ���ֵΪ��" << c->ComplexAbs() << endl<<endl;
}

void Test_2(void)
{
	Complex* c = NULL;
	Complex c1(-12.0, 1.0);
	Complex c2(4.0, -10.0);
	Complex ret(0, 0);
	c->print(c1);
	cout << endl;
	c->print(c2);
	cout << endl;
	cout << "c1*c2 = ";
	ret = c1 * c2;
	c->print(ret);
	cout << endl;
	c->print(ret);
	cout << "�ľ���ֵΪ��" << c->ComplexAbs() << endl << endl;
}

void Test_3(void)
{
	Complex* c = NULL;
	Complex c1(3.0, 5.0);
	Complex c2(1.0, -1.0);
	Complex ret(0, 0);
	c->print(c1);
	cout << endl;
	c->print(c2);
	cout << endl;
	cout << "c1/c2 = ";
	ret = c1 / c2;
	c->print(ret);
	cout << endl;
	c->print(ret);
	cout << "�ľ���ֵΪ��" << c->ComplexAbs() << endl<<endl;
}


