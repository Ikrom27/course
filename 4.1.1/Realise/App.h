#ifndef APP_H
#define APP_H
#include<iostream>
#include "base.h"
class app : public Base_class	// Унаследовал корень
{
public:
	app(Base_class* p);		// Конструктор, в параметре указатель на корень
	void build_tree_objects();		//Построение дерева
	int exec_app();		//Запускает систему
};
#endif