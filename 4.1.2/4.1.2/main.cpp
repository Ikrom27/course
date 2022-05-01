#include "base.h"
#include <string>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	string name;
	int field;
	cin >> name;
	cin >> field;
	cl_4* obj = new cl_4(name, field);
	obj->print();
}