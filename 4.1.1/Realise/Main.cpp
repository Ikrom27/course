#include "app.h"


int main()
{
	Application q(nullptr);		// Создание объекта
	q.build_tree_objects();		// Строит дерево
	return q.exec_app();
}