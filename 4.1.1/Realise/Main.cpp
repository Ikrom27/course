#include "app.h"


int main()
{
	Application q(nullptr);
	q.build_tree_objects();
	return q.exec_app();
}