#ifndef __CLASSES_H
#define __CLASSES_H
#include <math.h>
#include <string>
#include <iostream>
using namespace std;
class cl_1 {
private:
	string name;
	int field;
public:
	cl_1(string name, int field);
	void print();
};
class cl_2 : private cl_1 {
private:
	string name;
	int field;
public:
	cl_2(string name, int field);
	void print();
};
class cl_3 : private cl_2 {
private:
	string name;
	int field;
public:
	cl_3(string name, int field);
	void print();
};
class cl_4 : private cl_3 {
private:
	string name;
	int field;
public:
	cl_4(string name, int field);
	void print();
};
#endif