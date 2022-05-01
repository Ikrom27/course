#include "base.h"
#include <string>
#include <math.h>
#include <iostream>
using namespace std;

cl_1::cl_1(string name, int field) {
	this->name = name + "_1";
	this->field = field;
}

void cl_1::print() {
	cout << this->name << " " << this->field << endl;
}

cl_2::cl_2(string name, int field) : cl_1(name, field) {
	this->name = name + "_2";
	this->field = pow(field, 2);
}

void cl_2::print() {
	cl_1::print();
	cout << this->name << " " << this->field << endl;
}

cl_3::cl_3(string name, int field) :cl_2(name, field) {
	this->name = name + "_3";
	this->field = pow(field, 3);
}

void cl_3::print() {
	cl_2::print();
	cout << this->name << " " << this->field << endl;
}

cl_4::cl_4(string name, int field) :cl_3(name, field) {
	this->name = name + "_4";
	this->field = pow(field, 4);
}

void cl_4::print() {
	cl_3::print();
	cout << this->name << " " << this->field;
}