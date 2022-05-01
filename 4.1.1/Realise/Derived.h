#ifndef DER_H
#define DER_H
#include<iostream>
#include "Base.h"



class Derived: public Base {
public:
	Derived(std::string _name, Base* _head = nullptr)
		: Base(_name, _head) {};
};

#endif