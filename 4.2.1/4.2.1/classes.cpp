#include "classes.h"
#include <string>
#include <iostream>
using namespace std;


cl_1::cl_1(string name) {
	this->name = name + "_1";
}
void cl_1::get_name_first() {
	cout << this->name << endl;
}


cl_2::cl_2(string name) :cl_1(name) {
	this->name = name + "_2";
}
void cl_2::get_name() {
	cout << this->name << endl;
}


cl_3::cl_3(string name) :cl_1(name) {
	this->name = name + "_3";
}
void cl_3::get_name() {
	cout << this->name << endl;
}


cl_4::cl_4(string name) :cl_1(name) {
	this->name = name + "_4";
}
void cl_4::get_name() {
	cout << this->name << endl;
}


cl_5::cl_5(string name) :cl_1(name) {
	this->name = name + "_5";
}
void cl_5::get_name() {
	cout << this->name << endl;
}


cl_6::cl_6(string name) :cl_2(name), cl_3(name) {
	this->name = name + "_6";
}
void cl_6::get_name() {
	cout << this->name << endl;
}


cl_7::cl_7(string name) :cl_4(name), cl_5(name) {
	this->name = name + "_7";
}
void cl_7::get_name() {
	cout << this->name << endl;
}


cl_8::cl_8(string name) :cl_6(name), cl_7(name) {
	this->name = name + "_8";
}
void cl_8::get_name() {
	cout << this->name;
}