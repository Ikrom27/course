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
	int state_;
public:
	Base(std::string _name, Base* _head = nullptr);
	void set_name(std::string _name);
	std::string get_name();
	void display();
	void change_head(Base* new_head );
	Base* get_head();
	Base* find_object(std::string name);
	void add_sticks(Base* new_stick);
	void set_state(int state);
	void print_tree(int tabs);
	void print_tree_status(int tabs);
};
#endif