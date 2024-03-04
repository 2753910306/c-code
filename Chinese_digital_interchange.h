#pragma once
#ifndef Chinese_digital_interchange_H
#define Chinese_digital_interchange_H

#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>

using namespace std;

class numConv
{
public:
	numConv(string* str);
	numConv(){};
	void input(void);
	void chineseConv(void);
	long double match(string str);
	void print_num(void);
	void print_chinese(void);

private:
	string chinese[100];
	int chinese_len;
	long double t;
};

class Calc
{
public:
	/*Êý×Ö×ªÖÐÎÄ*/
	Calc(long double n);
	void Calc_Init(void);
	void convert(void);
	void print_Num(void);
	void print_Hanzi(void);
	void digit(int t);
	void decimal_digit(int t);


private:
	long double num;
	int count1;
	long long zs[20];
	int xs[2];
	string zsconv[20];
	string xsconv[2];
	int zscount = 0;
	int xscount = 0;
	const char* chineseNum[10] = { "Áã","Ò¼","·¡","Èþ","ËÁ","Îé" ,"Â½","Æâ","°Æ","¾Á" };
};

#endif


