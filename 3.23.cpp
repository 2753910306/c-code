#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "�������������֣�";
	cin >> n;
	cout << "��ƽ������";
	double fun(double xn1, int a);
	cout <<fixed<<setprecision(10) << fun(1.0, n)<<endl;
	return 0;
}
double fun(double xn1, int a)
{ 
	double xn = xn1;
	xn1 = 0.5 *( xn + a / xn);
	if (fabs(xn1 - xn) >= 1e-5)
		xn1 = fun(xn1,a);
	return xn1;
}