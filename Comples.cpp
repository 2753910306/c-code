#include"myfun.h"

double Complex::ComplexAbs()
{
	return sqrt(real * real + image * image);
}

Complex::Complex(double r = 0.0, double i = 0.0)
{
	real = r;
	image = i;
	n++;
}

//���������
Complex Complex:: operator + (const Complex& c)
{
	Complex tmp;
	tmp.real = real + c.real;
	tmp.image = image + c.image;
	return tmp;
}

//���������
Complex Complex::operator - (const Complex& c)
{
	Complex tmp;
	tmp.image = image - c.image;
	tmp.real = real - c.real;
	return tmp;
}

//���������(a+bi)(c+di)=(ac-bd)+(bc+ad)i
Complex Complex::operator*(const Complex& c)
{
	Complex tmp;
	tmp.real = real * c.real - image * c.image;
	tmp.image = image * c.real + real * c.image;
	return tmp;
}

//���������(ac+bd)/(c^2+d^2)+(bc-ad)/(c^2+d^2)i
Complex Complex :: operator/(const Complex& c)
{
	Complex tmp;
	double deno = c.real * c.real + c.image * c.image;//������ķ�ĸ    
	tmp.real = ((real * c.real) + (image * c.image)) / deno;
	tmp.image = ((image * c.real) - (real * c.image)) / deno;
	return tmp;
}

Complex Complex::operator+=(const Complex& c)
{
	Complex tmp;
	tmp.real += c.real;
	tmp.image += c.image;
	return tmp;
}

Complex Complex::operator-=(const Complex& c)
{
	Complex tmp;
	tmp.real -= c.real;
	tmp.image -= c.image;
	return tmp;
}


void Complex::print(Complex& c)
{
	cout << c.real << " + " << c.image << "i";
}

ostream& operator<<(ostream& out, Complex& c)
{
	if(c.image<0)
		out << c.real << c.image << "i";
	else
	    out<< c.real << "+" << c.image << "i";
	return out;
}
istream& operator>>(istream& in, Complex& c)
{
	cout << "��ֱ����븴����ʵ�����鲿��";
	in>>c.real >> c.image ;
	return in;
}