#pragma once
#ifndef _myfun_H
#define _myfun_H

#include<iostream>
using namespace std;

class Complex
{
public:
	Complex(double r, double i);
	Complex operator+(const Complex& c);
	Complex operator-(const Complex& c);
	Complex operator*(const Complex& c);
	Complex operator/(const Complex& c);
	Complex operator+=(const Complex& c);
	Complex operator-=(const Complex& c);
	double ComplexAbs();
	friend ostream& operator<<(ostream& out, Complex& c);
	friend istream& operator>>(istream& in, Complex& c);
	void print(Complex& c);
	static int n;
private:
	double real;
	double image;
};

#endif