#include "app.h"


int main()
{
	Application obj(nullptr);
	obj.build_tree_objects();
	//	std::cout << obj.find_object("Object_6")->get_name();
	return obj.exec_app();
}