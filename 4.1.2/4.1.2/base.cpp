#include "base.h"
#include <string>
#include <math.h>
#include <iostream>
using namespace std;

cl_1::cl_1(string name, int field) {
	name_ = name + "_1";
	field_ = pow(field, 1);
}

void cl_1::print() {
	cout << name_ << " " << field_ << endl;
	cl_2* temp = new cl_2(name, field);
	temp->print();
}

cl_2::cl_2(string name, int field) : cl_1(name, field) {
	name_ = name + "_2";
	field_ = pow(field, 2);
}

void cl_2::print() {
	cout << name_ << " " << field_ << endl;
	cl_3* temp = new cl_3(name_, field_);
	temp->print();
}

cl_3::cl_3(string name, int field) :cl_2(name, field) {
	name_ = name + "_3";
	field_ = pow(field, 3);
}

void cl_3::print() {
	cout << name_ << " " << field_ << endl;
	cl_4* temp = new cl_4(name_, field_);
	temp->print();
}

cl_4::cl_4(string name, int field) :cl_3(name, field) {
	name_ = name + "_4";
	field_ = pow(field, 4);
}

void cl_4::print() {
	cout << name_ << " " << field_;
}