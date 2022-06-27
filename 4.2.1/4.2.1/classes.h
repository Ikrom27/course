#ifndef __CLASSES_H
#define __CLASSES_H
#include <string>
#include <iostream>
using namespace std;

class cl_1 {
private:
	string name;
public:
	cl_1(string name);
	void get_name_first();
};


class cl_2 : public cl_1 {
private:
	string name;
public:
	cl_2(string name);
	void get_name();
};


class cl_3 : public cl_1 {
private:
	string name;
public:
	cl_3(string name);
	void get_name();
};


class cl_4 : public cl_1 {
private:
	string name;
public:
	cl_4(string name);
	void get_name();
};


class cl_5 : public cl_1 {
private:
	string name;
public:
	cl_5(string name);
	void get_name();
};


class cl_6 : public cl_2, public cl_3 {
private:
	string name;
public:
	cl_6(string name);
	void get_name();
};


class cl_7 : public cl_4, public cl_5 {
private:
	string name;
public:
	cl_7(string name);
	void get_name();
};


class cl_8 : public cl_6, public cl_7 {
private:
	string name;
public:
	cl_8(string name);
	void get_name();
};
#endif