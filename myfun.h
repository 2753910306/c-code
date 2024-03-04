#pragma once
#ifndef _myfun_H
#define _myfun_H

#include<iostream>
using namespace std;

const double PI = 3.1415926;
class CStereoShape
{
public:
	virtual double GetArea()= 0;
	virtual double GetVolumn()= 0;
};

class CCube :public CStereoShape//立方体类
{
public:
	CCube(double l = 0, double w = 0, double h = 0)
	{
		width = w;
		height = h;
		length = l;
	}
	double GetArea()
	{
		return 2 * (width * height + width * length + length * height);
	}
	double GetVolumn()
	{
		return  width * length * height;
	}
	void put(double l, double w, double h)
	{
		length = l;
		width = w;
		height = h;
	}
private:
	double length;
	double width;
	double height;
};

class CSphere :public CStereoShape
{
private:
	double radius;
public:
	CSphere(double r = 0)
	{
		radius = r;
	}
	double GetArea()
	{
		return 4 * PI * radius * radius;
	}
	double GetVolumn()
	{
		return 4 * PI * radius * radius * radius / 3;
	}
	void put(double r)
	{
		radius = r;
	}
};

//带头结点的双链表构造初始化
struct List
{
	CStereoShape* price;
	List* next; //指向后面的指针
};
List* head, * p, * q,*node;  //定义头指针以及p、q两个工作指针
void init()     //循环链表初始化
{
	head = new List();
	node = NULL;
	head->next = node;
}

void insert(CStereoShape* x)//在尾部插入新的元素
{
	q = new List();
	if (head->next == node)
	{
		p = new List();
		p->price = x;
		head->next = p;
		p->next = node;
	}
	else
	{
		q->price = x;
		p->next = q;
		q->next = node;
		p = q;
	}
}

void output()
{
	List* p = head;
	p = p->next;
	while (p != node)
	{
		cout << p->price->GetArea()<<"   " << p->price->GetVolumn() << endl;
		p = p->next;
	}
}
double count_area()//计算总面积
{
	p = head;
	p = p->next;
	double sum = 0;
	while (p != node)
	{
		sum += p->price->GetArea();
		p = p->next;
	}
	return sum;
}
double count_voulmn()//计算总体积
{
	p = head;
	p = p->next;
	double sum = 0;
	while (p != node)
	{
		sum += p->price->GetVolumn();
		p = p->next;
	}
	return sum;
}
#endif