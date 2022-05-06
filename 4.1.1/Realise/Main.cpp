#include "app.h"


int main()
{
	Application obj(nullptr);
	obj.build_tree_objects();
	return obj.exec_app();
}