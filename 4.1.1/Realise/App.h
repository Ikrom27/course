#ifndef APP_H
#define APP_H
#include<iostream>
#include "base.h"
class Application : public Base	// Унаследовал корень
{
public:
	Application(Base* p);		// Конструктор, в параметре указатель на корень
	void build_tree_objects();		//Построение дерева
	int exec_app();		//Запускает систему
};
#endif