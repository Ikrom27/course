#include "base.h"
#include <string>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	string name;
	int field;
	cin >> name >> field;
	cl_1* obj = new cl_1(name, field);
	obj->print();
}