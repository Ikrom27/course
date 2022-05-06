#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "classes.h"
#include <iostream>


int main()
{
	std::string id;
	std::cin >> id;
	class_4* obj = dynamic_cast <class_4*>(new class8(id));
	return(0);
}