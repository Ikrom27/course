#include "Derived.h"

Derived::Derived(std::string _name, Base* _head) :Base()
{
	return new Base(_name, _head);
}
