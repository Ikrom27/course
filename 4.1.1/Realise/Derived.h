#ifndef DER_H
#define DER_H
#include<iostream>
#include "Base.h"


class Derived: public Base {
public:
	Derived(std::string _name, Base* _head = nullptr): Base(_name, _head) {};
};

class Derived_2 : public Base {
public:
	Derived_2(std::string _name, Base* _head = nullptr) : Base(_name, _head) {};
};

class Derived_3 : public Base {
public:
	Derived_3(std::string _name, Base* _head = nullptr) : Base(_name, _head) {};
};

class Derived_4 : public Base {
public:
	Derived_4(std::string _name, Base* _head = nullptr) : Base(_name, _head) {};
};

class Derived_5 : public Base {
public:
	Derived_5(std::string _name, Base* _head = nullptr) : Base(_name, _head) {};
};

class Derived_6 : public Base {
public:
	Derived_6(std::string _name, Base* _head = nullptr) : Base(_name, _head) {};
};
#endif