#pragma once
#ifndef num_chinese_H
#define num_chinese_H

#include<iostream>
#include<string>

using namespace std;

class numConv
{
public:
	numConv(string* str);
	numConv() {};
	void input(void);
	void chineseConv(void);
	long double match(string str);
	void print_num(void);
	void print_chinese(void);

private:
	string chinese[50];
	int chinese_len;
	long double t;
};


#endif