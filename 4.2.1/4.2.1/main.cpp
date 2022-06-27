#include "classes.h"
#include <iostream>
using namespace std;
int main()
{
	cl_4* obj;
	int a1, a2, a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;
	obj = new cl_4(a1, a2, a3, a4);
	cout << "a1 = " << a1 << " " << "a2 = " << a2 << " " << "a3 = "
		<< a3 << " " << "a4 = " << a4;
	int x = 1;
	int class_number;
	cin >> x;
	while (x != 0) {
		cin >> class_number;
		int result = 0;
		switch (class_number) {
		case 1:
		{
			result = obj->cl_1::count(x);
			break;
		}
		case 2:
		{
			result = obj->cl_2::count(x);
			break;
		}
		case 3:
		{
			result = obj->cl_3::count(x);
			break;
		}
		case 4:
		{
			result = obj->count(x);
			break;
		}
		}
		cout << endl << "Class " << class_number << " F( " << x <<
			" ) = " << result;
		cin >> x;
	}
}