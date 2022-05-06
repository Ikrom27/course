#ifndef BASE_H
#define BASE_H
#include <string>
#include <vector>
class Base
{
private:
	std::string name;
	Base* head;
	std::vector<Base*> sticks;
public:
	Base(std::string _name, Base* _head = nullptr);
	void set_name(std::string _name);
	std::string get_name();
	void display();
	void change_head(Base* new_head );
	Base* get_head();
};
#endif