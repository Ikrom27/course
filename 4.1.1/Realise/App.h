#ifndef APP_H
#define APP_H
#include<iostream>
#include "base.h"
class Application : public Base
{
public:
	Application(Base* p);
	void build_tree_objects();
	int exec_app();
};
#endif