#ifndef __CLASSES_H
#define __CLASSES_H
#include <math.h>
#include <string>
#include <iostream>
using namespace std;
class cl_1 {
private:
	string name_;
	int field_;
public:
	cl_1(string name, int field);
	virtual void print();
};
class cl_2 : private cl_1 {
private:
	string name_;
	int field_;
public:
	cl_2(string name, int field);
	void print() override;
};
class cl_3 : private cl_2 {
private:
	string name_;
	int field_;
public:
	cl_3(string name, int field);
	void print() override;
};
class cl_4 : private cl_3 {
private:
	string name_;
	int field_;
public:
	cl_4(string name, int field);
	void print() override;
};
#endif